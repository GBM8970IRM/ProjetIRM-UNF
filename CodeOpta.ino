#include <OptaBlue.h>     // Librairie utilisée pour la lecture du débit. 
#include <Ethernet.h>     // Pour établir la connexion à l'aide d'Ethernet de l'arduino.
#include <HttpClient.h>   // Pour envoyer les données HTTP de l'arduino vers le serveur.
#include <ArduinoModbus.h>// Librairie qui permet d'utiliser le port Modbus de l'arduino avec le thermomètre humidité-temperature.
#include <ArduinoRS485.h> // Librairie pour l'utilisation du standard RS-485 avec le themomètre humidité-temperature.

//Liste de constantes nécessaires aux calculs
float TEMPERATURE_REFERENCE = 50 + 273.15; // Température de référence (K)
int RESISTANCE_REFERENCE = 988.1; // Résistance de référence à 50°C (ohms)
int BETA = 4100; // Constante beta (K)
int RESISTANCE_SERIE = 2985; // Résistance en série avec le thermomètre (ohms)

//Constantes pour la communication avec le Modbus par RS-485
constexpr auto BAUDRATE = 9600; // Débit de comminucation établie à 9600 bits/seconde.
constexpr auto BITDURATION = 1.f / BAUDRATE; // Durée d'un seul bit.
constexpr auto WORD_LENGTH = 10.0f; // Établissement de la longueur d'un seul mot en nombre de bits.
// Calcul du délai antérieur et postérieur en microsecondes pour une transmission RS-485 stable
constexpr auto preDelayBR = BITDURATION * WORD_LENGTH * 3.5f * 1e6; // Ici il s'agit du calcul du pré-délai avant la transmission.
constexpr auto postDelayBR = BITDURATION * WORD_LENGTH * 3.5f * 1e6 / 2.0; // Ici il s'agit du calcul du post-délai après la transmission.

//Liste de variables utilisées dans les calculs de températures.
float division_thermometre1, division2, lecture_entree, lecture_sortie;
float temp_entree, temp_sortie, temp_irm, hum_irm;
float voltage_thermistor1, voltage_thermistor2;
float resistance_thermistor1, resistance_thermistor2;

using namespace Opta; // Nous permet d'éviter les préfixes pour les appels de fonctions. 

//Constantes requises au bon fonctionnement de l'envoi de données.
String url ="/metrics/job/temperature";
int serverPort = 9091;  // Port du Prometheus Pushgateway.
byte mac[] = { 0xA8, 0x61, 0x0A, 0x50, 0x5A, 0xE7 }; // Adresse MAC assigné à l'arduino.
IPAddress server(10, 200, 38, 184); // Adresse IP du serveur qui reçoit les données.

//Création des objets pour la connexion.
EthernetClient ethernetClient; // Création d'un objet de type EthernetClient pour établir une connexion réseau.
HttpClient client(ethernetClient); // Création d'un objet nommé client pour envoyer des requêtes HTTP à partir de la conexion établie par ethernetClient.

// Définition du canal 0 pour la lecture du débit
#define CANAL 0

//Fonctions utile tout le long du code. 
// Fonction pour le calcul de la résistance selon la lecture d'une PINS utilisé pour les thermomètres de l'eau.
float calcultemperature (float lecture_pin) {
  float voltage= (5/1935.00) * lecture_pin; //Lecture  sur 5V
  float resistance = (voltage * RESISTANCE_SERIE) / (5.0 - voltage); //Calcul de la résistance par diviseur de tension.
  float division = log(resistance/RESISTANCE_REFERENCE); // calcul de division pour suivre la courbe du thermomètre.
  float temp = (1 / ((division/BETA)+(1/TEMPERATURE_REFERENCE))) - 273.15; // Calcul de la température.
  return temp;
}

//Fonction pour lire la température et l'humidité avec le Modbus.
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

void CurrentRead(){
    // Lecture du courant sur le canal CANAL
  AnalogExpansion exp = OptaController.getExpansion(0); // On suppose que l'extension est sur l'index 0
  if (exp) {
    float current_mA = exp.pinCurrent(CANAL);
    Serial.println("Courant mesuré : " + String(current_mA) + " mA");
  }
}

void setup() {
  //Initiation des PINS d'entrées et de sorties.
  pinMode(LED_D0, OUTPUT); //Sortie LED directement intégrée au opta nous signal son bon fonctionnement.
  digitalWrite(LED_D0, HIGH); //Nous allumons cette même LED.
  pinMode(A2, INPUT); // PIN identifiée comme étant I3 sur l'Arduino, sert à receuillir les données de l'eau d'entrée. 
  pinMode(A3, INPUT); // PIN identifiée comme étant I4 sur l'Arduino, sert à receuillir les données de l'eau de sortie.
  // Manque les pins pour le débimètre.

  Serial.begin(BAUDRATE); // On initialise la connexion par le port USB pour permettre la connexion à un ordinateur en cas de problème. 
  analogReadResolution(12); // On augmente la résolution de lecture de l'arduino pour la mettre sur 12 bits.

  // Initialisation de l'Ethernet
  if (Ethernet.begin(mac) == 0) { // On lance la connexion et on vérifie si nous avons réussi à avoir une adresse IP de DHCP.
    Serial.println("Échec de la configuration Ethernet avec DHCP"); //On imprimme un message d'erreur dans le serial print.
    while (true);  // Bloque le programme si l'Ethernet échoue.
  }

  delay(2000); // Ajout d'un délai pour s'assurer que la connexion est bien établie.
  Serial.print("Connecté à Ethernet, adresse IP : "); // On imprimme l'adresse IP dans le terminal de l'ordinateur (Une seule fois à l'initialisation).
  Serial.println(Ethernet.localIP());

//Validation de la connection au serveur. On imprimme dans le terminal.
  if (!client.connect(server, serverPort)) {
    Serial.println(" Échec de connexion au serveur !");
} else {
    Serial.println(" Connexion réussie !");
}

// Initialisation de la communication RS485 pour le Modbus donc le thermomètre humidité-température.
  RS485.setDelays(preDelayBR, postDelayBR);
  if (!ModbusRTUClient.begin(BAUDRATE, SERIAL_8N2)) { // On indique le nombre de bits d'information (8), le nombre de bits de parité (0 donc N) et le nombre de bits de stop (2).
    Serial.println("Erreur Modbus");
    while (true);
  }
}

  OptaController.begin(); // On active le protocole du contrôleur du opta
  // Initialisation du canal CANAL sur l'extension 0
  AnalogExpansion::beginChannelAsAdc(OptaController, 0, CANAL, OA_CURRENT_ADC, false, false, false, 0);
}

void loop() {
  digitalWrite(LED_D2, HIGH); //Nous permet de voir si le code entre bien dans la boucle en allumant une LED.

  //Lecture des thermistors puis calculs de la température
  lecture_sortie=analogRead(A3);
  lecture_entree =analogRead(A2);
  temp_entree = calcultemperature(lecture_entree);
  temp_sortie = calcultemperature(lecture_sortie);

  //Lecture de la température et de l'humidité de la salle IRM 
  //Requête de données à l'adresse 0x01 (par défault) dans le registre 0x00 (température) et 0x01 (humidité)
  temp_irm = ReadRS485(0x01, 0x00)/100;
  hum_irm = ReadRS485(0x01, 0x01)/100;
  OptaController.update(); // Mise à jour du controleur opta.
  CurrentRead(); // Fonction pour la lecture du débit.

  // Affichage des données dans le serial print afin de détecter les erreurs.
  Serial.print("Température Entrée (°C): ");
  Serial.println(temp_entree);
  Serial.print("Température Sortie (°C): ");
  Serial.println(temp_sortie);
  Serial.print("Température Salle IRM (°C): ");
  Serial.println(temp_irm);
  Serial.print("Humidité Salle IRM (%): ");
  Serial.println(hum_irm);

  // Préparation des données à envoyer
  String postData = "# HELP temperature_input Temperature in Celsius at input\n";
  postData += "# TYPE temperature_input gauge\n";
  postData += "temperature_input{label1=\"temp1\", location=\"entry\"} " + String(temp_entree);  // Température à l'entrée
  postData += "\n"; 

  postData += "# HELP temperature_output Temperature in Celsius at output\n";
  postData += "# TYPE temperature_output gauge\n";
  postData += "temperature_output{label2=\"temp2\", location=\"exit\"} " + String(temp_sortie);  // Température à la sortie
  postData += "\n";

  postData += "# HELP temperature_IRM Temperature IRM in Celsius\n";
  postData += "# TYPE temperature_IRM gauge\n";
  postData += "temperature_IRM{label3=\"tempIRM\", unit=\"Celsius\"} " + String(temp_irm);  // Température IRM
  postData += "\n";

  postData += "# HELP humidity_IRM Humidity IRM in percentage\n";
  postData += "# TYPE humidity_IRM gauge\n";
  postData += "humidity_IRM{label4=\"humIRM\", unit=\"percent\"} " + String(hum_irm);  // Humidité IRM
  postData += "\n";

  // On convertie l'adresse IP pour l'obtenir en chaine de caractères.
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

  // Lire la réponse du serveur à chaque envoie de données
  int statusCode = client.responseStatusCode();
  Serial.print("Code réponse: ");
  Serial.println(statusCode);

  client.stop();

  delay(5000); // Pause avant la prochaine envoi
}


