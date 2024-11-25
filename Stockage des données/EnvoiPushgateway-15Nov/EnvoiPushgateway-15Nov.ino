#include <SPI.h>
#include <Ethernet.h>  // Pour la connexion Ethernet

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

int serverPort = 9091;  // Port du Pushgateway (Par défaut il s'agit de 9091)
byte mac[] = { 0xA8, 0x61, 0xA, 0x50, 0x5A, 0xE7 };  // Adresse MAC de l'arduino (NE PAS MODIFIER)
IPAddress server(10, 200, 39, 55);  // Adresse IP du Pushgateway (Sera celle du serveur)

EthernetClient client; //Connexion au serveur

void setup() {
  pinMode(LED_D0, OUTPUT);
  digitalWrite(LED_D0, HIGH);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(D2, OUTPUT);
  //digitalWrite(D1, HIGH); // Max digital output (power supply) = 12V --> diviseur de tension (R1 = 14k et R2 = 10k) pour envoyer 5V au circuit
  Serial.begin(9600);
  analogReadResolution(12);

  // Initialisation de l'Ethernet
  if (Ethernet.begin(mac) == 0) {
    Serial.println("Échec de la configuration Ethernet avec DHCP");
    while (true);  // Bloque si l'Ethernet échoue et nous envoie un message d'erreur
  }

  delay(1000); // essaye de se connecter à chaque seconde
  Serial.print("Connecté à Ethernet, adresse IP : ");
  Serial.println(Ethernet.localIP());
}

void loop() {
  digitalWrite(D2, HIGH); // Max digital output (power supply) = 12V --> diviseur de tension (R1 = 14k et R2 = 10k) pour envoyer 5V au circuit
  digitalWrite(LED_D2, HIGH);
  // Lecture du voltage au thermistor
  lecture_I4=analogRead(A3);
  lecture_I3 =analogRead(A2);
  voltage_thermistor1 = (5/1935.00) * analogRead(A2); //Lecture 5V
  voltage_thermistor2 = (5/1935.00) * analogRead(A3); //Lecture 5V
  tempIRM = map(analogRead(A1),0,2046,0,100);
  humIRM = map(analogRead(A0),0,2046,0,40);
  // Lecture du voltage à la résistance
  //voltage_resistance = 5.00 - voltage_thermistor;
  // Calcul de la resistance du thermistor (loi d'ohm)
  resistance_thermistor1 = (voltage_thermistor1 * R)/(5-voltage_thermistor1);
  resistance_thermistor2 = (voltage_thermistor2 * R)/(5-voltage_thermistor2);
  // Calcul de la température
  division1 = log(resistance_thermistor1/RT0);
  temp1 = (1 / ((division1/B)+(1/T0))) - 273.15;
  division2 = log(resistance_thermistor2/RT0);
  temp2 = (1 / ((division2/B)+(1/T0))) - 273.15;
  Serial.print("Température IRM (°C): ");
  Serial.println(analogRead(A1));
  Serial.print("Humidité IRM (%): ");
  Serial.println(analogRead(A0));

  Serial.print("TemperatureEauEntrée (°C): ");
  Serial.println(temp1);
  //Serial.println(voltage_thermistor1,3);

  Serial.print("TemperatureEauSortie (°C): ");
  Serial.println(temp2);
  //Serial.println(resistance_thermistor2 ,3);

  delay(2000);
  // Générer une valeur aléatoire entre 18 et 22 pour tester la connexion
  //float valeur_aleatoire = random(180, 221) / 10.0;  // Valeur aléatoire entre 18.0 et 22.0

  // Créer les données à envoyer avec des labels
  //String postData = "# HELP prometheus Temperature in Celsius\n";
  //postData += "# TYPE prometheus gauge\n";
  String postData = "# HELP temperature_input Temperature in Celsius at input\n";
  postData += "# TYPE temperature_input gauge\n";
  postData += "temperature_input{label1=\"valeur1\", location=\"entry\"} " + String(temp1) + "\n";  // Température à l'entrée

  postData += "# HELP temperature_output Temperature in Celsius at output\n";
  postData += "# TYPE temperature_output gauge\n";
  postData += "temperature_output{label2=\"valeur2\", location=\"exit\"} " + String(temp2) + "\n";  // Température à la sortie

  postData += "# HELP temperature_IRM Temperature IRM in Celsius\n";
  postData += "# TYPE temperature_IRM gauge\n";
  postData += "temperature_IRM{label3=\"valeur3\", unit=\"Celsius\"} " + String(tempIRM) + "\n";  // Température IRM

  postData += "# HELP humidity_IRM Humidity IRM in percentage\n";
  postData += "# TYPE humidity_IRM gauge\n";
  postData += "humidity_IRM{label4=\"valeur4\", unit=\"percent\"} " + String(humIRM) + "\n";  // Humidité IRM
  // Tenter de se connecter au Pushgateway
  if (client.connect(server, serverPort)) {
    Serial.println("Connecté au Pushgateway");

    // Création de la requête HTTP POST (Voir si l'utilisation de la requête PUT marche mieux)
    client.print("PUT /metrics/job/prometheus HTTP/1.1\r\n"); // Le job name dans le yml est temperature
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
    Serial.print(postData);

    // Attendre la réponse du serveur
    while (client.connected() && !client.available()) {
      delay(1);  // Attendre la réponse
    }
    while (client.available()) {
      char rep = client.read();
      Serial.write(rep);  // Afficher la réponse du serveur
    }

    client.stop();  // Fermer la connexion
  } else {
    Serial.println("Échec de la connexion au Pushgateway");
  }

  // Afficher la valeur envoyée
  Serial.print("Valeur envoyée : ");
  Serial.println(temp1);

  delay(5000);  // Attendre 5 secondes avant d'envoyer à nouveau
}