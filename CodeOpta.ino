#include <SPI.h>
#include <Ethernet.h>   // Pour la connexion Ethernet
#include <HttpClient.h> // Pour envoyer les données HTTP
#include <ArduinoModbus.h>
#include <ArduinoRS485.h>

float T0 = 50 + 273.15; // Température de référence (K)
int RT0 = 988.1; // Résistance de référence à 50°C (ohms)
int B = 4100; // Constante beta (K)
int R = 2985; // Résistance en série avec le thermomètre (ohms)
float division1;
float division2;
float lecture_I3;
float lecture_I4;


float temp1, temp2, tempIRM, humIRM;
float voltage_thermistor1, voltage_thermistor2;
float resistance_thermistor1, resistance_thermistor2;

//Chemin sur lequel le pushgateway attend les données
String url ="/metrics/job/temperature";

int serverPort = 9091;  // Port du Pushgateway
byte mac[] = { 0xA8, 0x61, 0x0A, 0x50, 0x5A, 0xE7 }; // Adresse MAC de l'Arduino
IPAddress server(); // À remplacer par l'IP du serveur UNF

EthernetClient ethernetClient; // Client Ethernet
HttpClient client(ethernetClient); // Client HTTP
//On met l'adresse IP en chaine de caractères pour utiliser HttpClient plus tard

constexpr auto baudrate = 9600;
constexpr auto bitduration = 1.f / baudrate;
constexpr auto wordlen = 10.0f;
// Calcul du délai antérieur et postérieur en microsecondes pour une transmission RS485 stable
constexpr auto preDelayBR = bitduration * wordlen * 3.5f * 1e6;
constexpr auto postDelayBR = bitduration * wordlen * 3.5f * 1e6 / 2.0;

void setup() {
    //Initiation des entrées et des sorties 
  pinMode(LED_D0, OUTPUT); //Sortie LED du Opta pour signal visuel qu'il est en fonctionnement
  digitalWrite(LED_D0, HIGH);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(D2, OUTPUT);

  Serial.begin(baudrate);
  analogReadResolution(12);

  // Initialisation de l'Ethernet
  if (Ethernet.begin(mac) == 0) {
    Serial.println("Échec de la configuration Ethernet avec DHCP");
    while (true);  // Bloque le programme si l'Ethernet échoue
  }

  delay(2000);
  Serial.print("Connecté à Ethernet, adresse IP : ");
  Serial.println(Ethernet.localIP());

  if (!client.connect(server, serverPort)) {
    Serial.println(" Échec de connexion au serveur !");
} else {
    Serial.println(" Connexion réussie !");
}

  // Initialisation de la communication RS485
  RS485.setDelays(preDelayBR, postDelayBR);
  if (!ModbusRTUClient.begin(baudrate, SERIAL_8N2)) {
    Serial.println("Erreur Modbus");
    while (true);
  }
}

void loop() {

  digitalWrite(D2, HIGH); // Active la sortie digitale
  digitalWrite(LED_D2, HIGH); //Nous permet de voir si le code marche bien

  //Lecture des thermistors
  lecture_I4=analogRead(A3);
  lecture_I3 =analogRead(A2);
  voltage_thermistor1 = (5/1935.00) * lecture_I3; //Lecture 5V
  voltage_thermistor2 = (5/1935.00) * lecture_I4; //Lecture 5V

  // Calcul de la résistance des thermistors (loi d'Ohm)
  resistance_thermistor1 = (voltage_thermistor1 * R) / (5.0 - voltage_thermistor1);
  resistance_thermistor2 = (voltage_thermistor2 * R) / (5.0 - voltage_thermistor2);

  // Calcul de la température
  division1 = log(resistance_thermistor1/RT0);
  temp1 = (1 / ((division1/B)+(1/T0))) - 273.15;
  division2 = log(resistance_thermistor2/RT0);
  temp2 = (1 / ((division2/B)+(1/T0))) - 273.15;

  //Lecture de la température et de l'humidité de la salle IRM 
  //Requête de données à l'adresse 0x01 (par défault) dans le registre 0x00 (température) et 0x01 (humidité)
  tempIRM = ReadRS485(0x01, 0x00)/100;
  humIRM = ReadRS485(0x01, 0x01)/100;

  // Affichage des données
  Serial.print("Température Entrée (°C): ");
  Serial.println(temp1);
  Serial.print("Température Sortie (°C): ");
  Serial.println(temp2);
  Serial.print("Température Salle IRM (°C): ");
  Serial.println(tempIRM);
  Serial.print("Humidité Salle IRM (%): ");
  Serial.println(humIRM);

  // Préparation des données à envoyer
  String postData = "# HELP temperature_input Temperature in Celsius at input\n";
  postData += "# TYPE temperature_input gauge\n";
  postData += "temperature_input{label1=\"temp1\", location=\"entry\"} " + String(temp1);  // Température à l'entrée
  postData += "\n"; 

  postData += "# HELP temperature_output Temperature in Celsius at output\n";
  postData += "# TYPE temperature_output gauge\n";
  postData += "temperature_output{label2=\"temp2\", location=\"exit\"} " + String(temp2);  // Température à la sortie
  postData += "\n";

  postData += "# HELP temperature_IRM Temperature IRM in Celsius\n";
  postData += "# TYPE temperature_IRM gauge\n";
  postData += "temperature_IRM{label3=\"tempIRM\", unit=\"Celsius\"} " + String(tempIRM);  // Température IRM
  postData += "\n";

  postData += "# HELP humidity_IRM Humidity IRM in percentage\n";
  postData += "# TYPE humidity_IRM gauge\n";
  postData += "humidity_IRM{label4=\"humIRM\", unit=\"percent\"} " + String(humIRM);  // Humidité IRM
  postData += "\n";

  char serverStr[16];
  sprintf(serverStr, "%d.%d.%d.%d", server[0], server[1], server[2], server[3]);

  // Envoi des données via HttpClient 
  Serial.println("Envoi des données au serveur...");
  client.beginRequest();
  client.put(serverStr, serverPort, url.c_str());  
  client.sendHeader("Content-Type", "text/plain");
  client.sendHeader("Content-Length", postData.length());
  client.print(postData);
  client.endRequest();

  // Lire la réponse du serveur
  int statusCode = client.responseStatusCode();
  Serial.print("Code réponse: ");
  Serial.println(statusCode);

  client.stop();

  delay(5000); // Pause avant la prochaine envoi
}

float ReadRS485(int addr, int reg) {
  int w1 = 0;
  if (!ModbusRTUClient.requestFrom(addr, HOLDING_REGISTERS, reg, 1)) {
    Serial.println("Erreur lecture Modbus");
    Serial.println(ModbusRTUClient.lastError());
  } else {
    w1 = ModbusRTUClient.read();
  }
  return w1;
}
