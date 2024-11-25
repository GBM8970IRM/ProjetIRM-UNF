#include <SPI.h>
#include <Ethernet.h>  // Pour la connexion Ethernet

int serverPort = 9091;  // Port du Pushgateway (Par défaut il s'agit de 9091)
byte mac[] = { 0xA8, 0x61, 0xA, 0x50, 0x5A, 0xE7 };  // Adresse MAC de l'arduino (NE PAS MODIFIER)
IPAddress server();  // Adresse IP du Pushgateway (Sera celle du serveur)

EthernetClient client; //Connexion au serveur

void setup() {
  Serial.begin(9600);

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
  // Générer une valeur aléatoire entre 18 et 22 pour tester la connexion
  float valeur_aleatoire = random(180, 221) / 10.0;  // Valeur aléatoire entre 18.0 et 22.0

  // Créer les données à envoyer avec des labels
  String postData = "# HELP temperature Temperature in Celsius\n";
  postData += "# TYPE temperature gauge\n";
  postData += "temperature{label1=\"valeur1\",label2=\"valeur2\"} " + String(valeur_aleatoire)+ "\n"; // utilité des labels à découvrir (potentiel de tirage de donnée)

  // Tenter de se connecter au Pushgateway
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
  Serial.println(valeur_aleatoire);

  delay(5000);  // Attendre 5 secondes avant d'envoyer à nouveau
}