#include <SPI.h>
#include <Ethernet.h>  // Pour la connexion Ethernet
#include <ArduinoModbus.h>
#include <ArduinoRS485.h>

float T0 = 50 + 273.15; //température de référence (K)
int RT0 = 988.1; //resistance de référence à 50°C (ohms)
int B = 4100; //constante beta (K)
int R = 2985; // résistance en série avec le thermomètre (ohms)
float voltage_thermistor1;
float voltage_resistance1;
float resistance_thermistor1;
float temp1;
float division1;
float division2;
float lecture_I3;
float lecture_I4;
float voltage_thermistor2;
float voltage_resistance2;
float resistance_thermistor2;
float temp2;
float tempIRM;
float humIRM;
float lecture_I1;
float lecture_I2;

int serverPort = 9091;  // Port du Pushgateway (Par défaut il s'agit de 9091)
byte mac[] = { 0xA8, 0x61, 0xA, 0x50, 0x5A, 0xE7 };  // Adresse MAC de l'arduino (NE PAS MODIFIER)
IPAddress server();  // Adresse IP du Pushgateway (Sera celle du serveur)

EthernetClient client; //Connexion au serveur

//Initiation du baudrate pour le terminal Sériel et RS485
constexpr auto baudrate{ 9600 };

constexpr auto bitduration{ 1.f / baudrate };
constexpr auto wordlen{ 10.0f };
// Calcul du délai antérieur et postérieur en microsecondes pour une transmission RS485 stable
constexpr auto preDelayBR{ bitduration * wordlen * 3.5f * 1e6 };
constexpr auto postDelayBR{ bitduration * wordlen * 3.5f * 1e6 / 2.0};


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
    while (true);  // Bloque si l'Ethernet échoue et nous envoie un message d'erreur
  }

  delay(2000); // Délai avant de continuer
  Serial.print("Connecté à Ethernet, adresse IP : ");
  Serial.println(Ethernet.localIP());

  //Initialisation de la communication RS485
  RS485.setDelays(preDelayBR, postDelayBR);
  if (!ModbusRTUClient.begin(baudrate, SERIAL_8N2))
  {
    Serial.println("Modbus begin err.");
    while(true);
  }
  
}

void loop() {
  digitalWrite(D2, HIGH); // Active la sortie digitale
  digitalWrite(LED_D2, HIGH);

  // Lecture des thermistors
  lecture_I4=analogRead(A3);
  lecture_I3 =analogRead(A2);
  voltage_thermistor1 = (5/1935.00) * analogRead(A2); //Lecture 5V
  voltage_thermistor2 = (5/1935.00) * analogRead(A3); //Lecture 5V

  // Calcul de la resistance du thermistor (loi d'ohm)
  resistance_thermistor1 = (voltage_thermistor1 * R)/(5-voltage_thermistor1);
  resistance_thermistor2 = (voltage_thermistor2 * R)/(5-voltage_thermistor2);
  // Calcul de la température
  division1 = log(resistance_thermistor1/RT0);
  temp1 = (1 / ((division1/B)+(1/T0))) - 273.15;
  division2 = log(resistance_thermistor2/RT0);
  temp2 = (1 / ((division2/B)+(1/T0))) - 273.15;

  //Impression de la température de l'eau
  Serial.print("TemperatureEauEntrée (°C): ");
  Serial.println(temp1);
  Serial.print("TemperatureEauSortie (°C): ");
  Serial.println(temp2);

  //Lecture de la température et de l'humidité de la salle IRM 
  //Requête de données à l'adresse 0x01 (par défault) dans le registre 0x00 (température) et 0x01 (humidité)
  tempIRM = ReadRS485(0x01, 0x00)/100;
  humIRM = ReadRS485(0x01, 0x01)/100;

  //Impression de la température et de l'humidité de la salle IRM
  Serial.print("Température Salle IRM: ");
  Serial.print(tempIRM);
  Serial.println("C");

  Serial.print("Humidité Salle IRM : ");
  Serial.print(humIRM);
  Serial.println("%");

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

  // Envoi des données au serveur
  if (client.connect(server, serverPort)) {
    Serial.println("Connecté au Pushgateway");

    // Création de la requête HTTP POST (Voir si l'utilisation de la requête PUT marche mieux)
    client.print("PUT /metrics/job/temperature HTTP/1.1\r\n"); // Le job name dans le yml est temperature
    client.print("Host: ");
    client.print(server.toString());
    client.print("\r\n");
    client.print("Content-Type: text/plain\r\n"); 
    client.print("X-Content-Type-Options: nosniff\r\n");// Texte brut pour envoyer la métrique
    client.print("Content-Length: ");
    client.print(postData.length());
    client.print("\r\n");
    client.print("Connection: close\r\n");  // Ferme la connexion après la requête
    client.print("\r\n");  // Fin des en-têtes
    client.print(postData);  // Corps de la requête avec les données de la métrique
    //Serial.print(postData);

    // Attendre la réponse du serveur
    while (client.connected() && !client.available()) {
      delay(1);  // Attendre la réponse
    }
    while (client.available()) {
      char rep = client.read();
      //Serial.write(rep);  // Afficher la réponse du serveur
    }

    client.stop();  // Fermer la connexion
  } else {
    Serial.println("Échec de la connexion au Pushgateway");
  }

  delay(5000);  // Attendre 5 secondes avant d'envoyer à nouveau
}

float mapfloat(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (float)(x - in_min) * (out_max - out_min) / (float)(in_max - in_min) + out_min;
}

float GetStableReadings(int pin, int numReadings) {
  long total = 0;  // Variable pour la somme des lectures
  int reading;

  // Faire plusieurs lectures et additionner les valeurs
  for (int i = 0; i < numReadings; i++) {
    reading = analogRead(pin);  // Lire la valeur analogique
    total += reading;           // Ajouter la lecture à la somme
    delay(10);                  // Petit délai pour éviter une lecture trop rapide
  }

  // Retourner la moyenne des lectures
  return total / numReadings;
}

float ReadRS485(int addr, int reg)
{
  //Variable temporaire qui garde la donnée du
  int w1 = 0;
  //Request data from device addr with register reg with data size 1. (change HOLDING_REGISTERS according to which type of register you're reading from)
  if(!ModbusRTUClient.requestFrom(addr, HOLDING_REGISTERS, reg, 1))
  {
    //If it failed, print error to console
    Serial.println("Failed reading from Modbus");
    Serial.println(ModbusRTUClient.lastError());
  }
  else
  {
    //If it succeeded, write the read value to a variable
    w1 = ModbusRTUClient.read();
  }
  //Return the read data
  return w1;
}