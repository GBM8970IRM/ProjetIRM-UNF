Monitoring de salle d’IRM  
**PROCÉDURES DE TESTS**  
***(TEST DOCUMENTATION)***  
**GBM8970.003 v 0.2**  
**9 avril 2025**

	

| Nom | Matricule | Signature |
| :---- | :---- | ----- |
| William Sirois | 2129771 | **![][image1]** |
| Louis-Antoine Delisle  | 2148039 | ![][image2] |
| Emmy Tran-Khanh | 2141807 | **![][image3]** |
| Héloïse Warin | 2128566 | **![][image4]** |
| Charlotte Pépin | 2147949 | **![][image5]** |

**TABLE DES MATIÈRES**

[**1 INTRODUCTION	5**](#heading=)

[**2 PLANS DE TESTS	5**](#plans-de-tests)

[**2.1 Caractéristiques qui seront testées	5**](#heading=)

[2.1.1 Détection de la température de la salle IRM	5](#détection-de-la-température-de-la-salle-irm)

[2.1.2 Détection de l’humidité de la salle IRM	5](#détection-de-l’humidité-de-la-salle-irm)

[2.1.3 Détection de la température de l’eau du chiller (entrée et sortie)	5](#détection-de-la-température-de-l’eau-du-chiller-\(entrée-et-sortie\))

[2.1.4 Détection du débit de l’eau du chiller (entrée)	5](#détection-du-débit-de-l’eau-du-chiller-\(entrée\))

[2.1.5 Réception des alarmes sur Slack	5](#réception-des-alarmes-sur-slack)

[2.1.6 Réception des alertes et historiques des alertes sur Grafana	5](#réception-des-alertes-et-historiques-des-alertes-sur-grafana)

[2.1.7 Fonctionnement de l’interface Grafana	6](#fonctionnement-de-l’interface-grafana)

[2.1.8 Poids total du dispositif	6](#poids-total-du-dispositif)

[2.1.9 Taille du dispositif	6](#taille-du-dispositif)

[2.1.10 Exigences physiques du boîtier	6](#exigences-physiques-du-boîtier)

[2.1.11 Manuel de l’usager	6](#manuel-de-l’usager)

[2.1.12 Formation	6](#formation)

[**2.2 Caractéristiques qui ne seront pas testées	6**](#caractéristiques-qui-ne-seront-pas-testées)

[2.2.1 Matériaux	6](#matériaux)

[2.2.2 Durée de vie	6](#durée-de-vie)

[2.2.3 Alerte débit	6](#alerte-débit)

[**2.3 Outils utilisés lors des tests	7**](#outils-utilisés-lors-des-tests)

[2.3.1 Thermomètre à fluide commercial	7](#thermomètre-à-fluide-commercial)

[2.3.2 Thermomètre commercial standard	7](#thermomètre-commercial-standard)

[2.3.3 Capteur d’humidité commercial	7](#capteur-d’humidité-commercial)

[2.3.4 Débitmètre Q9 Flomec	7](#débitmètre-q9-flomec)

[2.3.5 Balance électronique	7](#balance-électronique)

[2.3.6 Règle graduée de 30 cm	7](#règle-graduée-de-30-cm)

[**3 LES TESTS	7**](#les-tests)

[**3.1 Test T1 : Mesure de la température de la salle IRM	7**](#heading=)

[3.1.1 Objectifs du test	7](#objectifs-du-test)

[3.1.2 Procédures	7](#procédures)

[3.1.3 Les entrées	8](#les-entrées)

[3.1.4 Les sorties attendues	8](#les-sorties-attendues)

[3.1.5 Les résultats acceptables et inacceptables	8](#les-résultats-acceptables-et-inacceptables)

[**3.2 Test T2 : Mesure de la variation de la température de la salle IRM	8**](#test-t2 :-mesure-de-la-variation-de-la-température-de-la-salle-irm)

[3.2.1 Objectifs du test	8](#objectifs-du-test-1)

[3.2.2 Procédures	8](#procédures-1)

[3.2.3 Les entrées	8](#les-entrées-1)

[3.2.4 Les sorties attendues	8](#les-sorties-attendues-1)

[3.2.5 Les résultats acceptables et inacceptables	9](#les-résultats-acceptables-et-inacceptables-1)

[**3.3 Test T3 : Mesure de l’humidité de la salle IRM	9**](#test-t3 :-mesure-de-l’humidité-de-la-salle-irm)

[3.3.1 Objectifs du test	9](#objectifs-du-test-2)

[3.3.2 Procédures	9](#procédures-2)

[3.3.3 Les entrées	9](#les-entrées-2)

[3.3.4 Les sorties attendues	9](#les-sorties-attendues-2)

[3.3.5 Les résultats acceptables et inacceptables	9](#les-résultats-acceptables-et-inacceptables-2)

[**3.4 Test T4 : Mesure de la variation de l’humidité de la salle IRM	9**](#heading=)

[3.4.1 Objectifs du test	10](#objectifs-du-test-3)

[3.4.2 Procédures	10](#procédures-3)

[3.4.3 Les entrées	10](#les-entrées-3)

[3.4.4 Les sorties attendues	10](#les-sorties-attendues-3)

[3.4.5 Les résultats acceptables et inacceptables	10](#les-résultats-acceptables-et-inacceptables-3)

[**3.5 Test T5 : Mesure de la température de l’eau du chiller (entrée et sortie)	10**](#test-t5 :-mesure-de-la-température-de-l’eau-du-chiller-\(entrée-et-sortie\))

[3.5.1 Objectifs du test	10](#objectifs-du-test-4)

[3.5.2 Procédures	10](#procédures-4)

[3.5.3 Les entrées	11](#les-entrées-4)

[3.5.4 Les sorties attendues	11](#les-sorties-attendues-4)

[3.5.5 Les résultats acceptables et inacceptables	11](#les-résultats-acceptables-et-inacceptables-4)

[**3.6 Test T6 : Mesure de la variation de la température de l’eau du chiller (entrée et sortie)	11**](#heading=)

[3.6.1 Objectifs du test	11](#objectifs-du-test-5)

[3.6.2 Procédures	11](#procédures-5)

[3.6.3 Les entrées	11](#les-entrées-5)

[3.6.4 Les sorties attendues	11](#les-sorties-attendues-5)

[3.6.5 Les résultats acceptables et inacceptables	12](#les-résultats-acceptables-et-inacceptables-5)

[**3.7 Test T7 : Mesure du débit de l’eau du chiller	12**](#heading=)

[3.7.1 Objectifs du test	12](#objectifs-du-test-6)

[3.7.2 Procédures	12](#procédures-6)

[3.7.3 Les entrées	12](#les-entrées-6)

[3.7.4 Les sorties attendues	12](#les-sorties-attendues-6)

[3.7.5 Les résultats acceptables et inacceptables	12](#les-résultats-acceptables-et-inacceptables-6)

[**3.8 Test T8 : Envoi et réception d’alertes sur Slack	12**](#heading=)

[3.8.1 Objectifs du test	12](#objectifs-du-test-7)

[3.8.2 Procédures	13](#procédures-7)

[3.8.3 Les entrées	13](#les-entrées-7)

[3.8.4 Les sorties attendues	13](#les-sorties-attendues-7)

[3.8.5 Les résultats acceptables et inacceptables	13](#les-résultats-acceptables-et-inacceptables-7)

[**3.9 Test T9 : Alertes et historiques des alertes sur Grafana	14**](#heading=)

[3.9.1 Objectifs du test	14](#objectifs-du-test-8)

[3.9.2 Procédures	14](#procédures-8)

[3.9.3 Les entrées	14](#les-entrées-8)

[3.9.4 Les sorties attendues	14](#les-sorties-attendues-8)

[3.9.5 Les résultats acceptables et inacceptables	15](#les-résultats-acceptables-et-inacceptables-8)

[**3.10 Test T10 : Délai d’affichage de Grafana et historique des données	15**](#test-t10 :-délai-d’affichage-de-grafana-et-historique-des-données)

[3.10.1 Objectifs du test	15](#objectifs-du-test-9)

[3.10.2 Procédures	15](#procédures-9)

[3.10.3 Les entrées	15](#les-entrées-9)

[3.10.4 Les sorties attendues	15](#les-sorties-attendues-9)

[3.10.5 Les résultats acceptables et inacceptables	16](#les-résultats-acceptables-et-inacceptables-9)

[**3.11 Test T11 : Mesure du poids total du dispositif	16**](#test-t11 :-mesure-du-poids-total-du-dispositif)

[3.11.1 Objectifs du test	16](#objectifs-du-test-10)

[3.11.2 Procédures	16](#procédures-10)

[3.11.3 Les entrées	16](#les-entrées-10)

[3.11.4 Les sorties attendues	16](#les-sorties-attendues-10)

[3.11.5 Les résultats acceptables et inacceptables	16](#les-résultats-acceptables-et-inacceptables-10)

[**3.12 Test T12 : Mesure de la taille du dispositif	17**](#test-t12 :-mesure-de-la-taille-du-dispositif)

[3.12.1 Objectifs du test	17](#objectifs-du-test-11)

[3.12.2 Procédures	17](#procédures-11)

[3.12.3 Les entrées	17](#les-entrées-11)

[3.12.4 Les sorties attendues	17](#les-sorties-attendues-11)

[3.12.5 Les résultats acceptables et inacceptables	17](#les-résultats-acceptables-et-inacceptables-11)

[**3.13 Test T13 : Exigences physiques du boîtier	17**](#test-t13 :-exigences-physiques-du-boîtier)

[3.13.1 Objectifs du test	17](#objectifs-du-test-12)

[3.13.2 Procédures	17](#procédures-12)

[3.13.3 Les entrées	17](#les-entrées-12)

[3.13.4 Les sorties attendues	17](#les-sorties-attendues-12)

[3.13.5 Les résultats acceptables et inacceptables	17](#les-résultats-acceptables-et-inacceptables-12)

[**3.14 Test T14 : Manuel de l’usager	18**](#test-t14 :-manuel-de-l’usager)

[3.14.1 Objectifs du test	18](#objectifs-du-test-13)

[3.14.2 Procédures	18](#procédures-13)

[3.14.3 Les entrées	18](#les-entrées-13)

[3.14.4 Les sorties attendues	18](#les-sorties-attendues-13)

[3.14.5 Les résultats acceptables et inacceptables	18](#les-résultats-acceptables-et-inacceptables-13)

[**3.15 Test T15 : Formation	18**](#test-t15 :-formation)

[3.15.1 Objectifs du test	18](#objectifs-du-test-14)

[3.15.2 Procédures	18](#procédures-14)

[3.15.3 Les entrées	19](#les-entrées-14)

[3.15.4 Les sorties attendues	19](#les-sorties-attendues-14)

[3.15.5 Les résultats acceptables et inacceptables	19](#les-résultats-acceptables-et-inacceptables-14)

[**4 RÉSUMÉ DES TESTS	19**](#résumé-des-tests)

[**5 SOMMAIRE DES TESTS	21**](#sommaire-des-tests)

1. # **INTRODUCTION**

Ce projet consiste en la création d’un prototype fonctionnel permettant de lire la température à l’entrée et à la sortie du système de refroidissement (chiller) d’une machine IRM (Imagerie par Résonance magnétique), le débit de l’eau entrant dans le chiller, ainsi que la température et l’humidité de la salle contenant la machine IRM à l’Unité de Neuroimagerie Fonctionnelle (UNF) de l’Institut Universitaire de Gériatrie de Montréal. Ces données doivent être captées par un Arduino Opta, puis transmises à une interface web afin de pouvoir envoyer des alertes au personnel concerné lorsque les valeurs sortent des intervalles de sécurité prédéfinies. Le présent document décrit donc les procédures de tests à effectuer afin de confirmer ou infirmer le bon fonctionnement du dispositif en fonction des spécifications fonctionnelles pré-établies (voir document de spécifications). 

2. # **PLANS DE TESTS** {#plans-de-tests}

   1. ## **Caractéristiques qui seront testées**

      1. ### **Détection de la température de la salle IRM** {#détection-de-la-température-de-la-salle-irm}

Le dispositif doit être en mesure de détecter la température de la salle IRM avec une précision de ± 0,3°C, une exactitude de ± 1°C et une fréquence d’échantillonnage de 1 minute pour des valeurs de température entre 0°C et 30°C.

2. ### **Détection de l’humidité de la salle IRM** {#détection-de-l’humidité-de-la-salle-irm}

Le dispositif doit être en mesure de détecter à une fréquence d’échantillonnage de 1 minute le niveau d’humidité de la salle IRM et ce, en pourcentage avec une précision de 3% RH.

3. ### **Détection de la température de l’eau du chiller (entrée et sortie)** {#détection-de-la-température-de-l’eau-du-chiller-(entrée-et-sortie)}

Le dispositif doit être en mesure de détecter la température de l’eau à l’entrée et à la sortie du chiller avec une précision de ± 0,3°C, une exactitude de ± 1°C et une fréquence d’échantillonnage de 5 secondes pour des valeurs de température entre 0°C et 30°C.

4. ### **Détection du débit de l’eau du chiller (entrée)** {#détection-du-débit-de-l’eau-du-chiller-(entrée)}

Le dispositif doit être en mesure de détecter le débit de l’eau à l’entrée du chiller à partir de 90 L/min, et un écart maximal de 0.5 L/min.

5. ### **Réception des alarmes sur Slack** {#réception-des-alarmes-sur-slack}

Le dispositif doit être en mesure d’envoyer des alarmes sur Slack lorsque la température de la salle IRM sort de l’intervalle de 18°C à 22°C, lorsque la température de l’eau à l’entrée et à la sortie du chiller sort de l’intervalle de 6°C à 12°C et lorsque le débit de l’eau à l’entrée du chiller est inférieur à 90 L/min. Les données recueillies sont moyennées sur une heure et les alarmes sont envoyées sur Slack indiquant la métrique qui l’a déclenché, la valeur dangereuse et l’heure de détection si la moyenne ne respecte pas les intervalles mentionnées ci-haut. Les alertes doivent être accessibles à tous les membres de la conversation Slack.

6. ### **Réception des alertes et historiques des alertes sur Grafana** {#réception-des-alertes-et-historiques-des-alertes-sur-grafana}

L’interface Grafana doit afficher l’état des alertes, indiquant la métrique qui l’a déclenché, la valeur dangereuse et l’heure de détection.

7. ### **Fonctionnement de l’interface Grafana** {#fonctionnement-de-l’interface-grafana}

Le dispositif doit être en mesure de transmettre les données captées à l’interface Grafana permettant de visualiser celles-ci en temps réel, en tout temps. L’interface est adaptée à l’ordinateur et au téléphone cellulaire.. Les données doivent être mises à jour toutes les 15 secondes, sans la nécessité de clics.  L’historique des données des 6 derniers mois doit être accessible en moins de 3 clics. Si le fil est déconnecté, l’affichage “No data” est affiché.

8. ### **Poids total du dispositif** {#poids-total-du-dispositif}

Le poids total du système principal du dispositif, soit le boîtier contenant l’arduino Opta, ne doit pas excéder 5 kg.

9. ### **Taille du dispositif** {#taille-du-dispositif}

Le système principal du dispositif, soit le boîtier contenant l’arduino Opta, doit avoir des dimensions inférieures à 20x20x30 cm.

10. ### **Exigences physiques du boîtier** {#exigences-physiques-du-boîtier}

Le boîtier du dispositif doit être de couleur neutre, posséder des ouvertures pour chaque câble de capteurs, posséder une ouverture sécurisée pour le mouvement et posséder 4 pattes antidérapantes. 

11. ### **Manuel de l’usager** {#manuel-de-l’usager}

Le manuel de l’usager doit être conçu sous PDF et contenir les informations nécessaires (pièces, schémas de montage, fonctionnalités, instructions d’entretien, avertissements de sécurité et spécifications des composantes).

12. ### **Formation** {#formation}

La formation offerte doit inclure les informations nécessaires, c’est-à-dire à quoi ressemble l’alarme, comment elle est transmise, comment elle est traitée, comment lire l’interface Grafana et naviguer ses menus du tableau de bord et comment utiliser le système.

2. ## **Caractéristiques qui ne seront pas testées** {#caractéristiques-qui-ne-seront-pas-testées}

   1. ### **Matériaux** {#matériaux}

Selon le document de spécifications fonctionnelles, le boîtier contenant les composantes principales du dispositif doit être fait d’un matériel résistant à des températures de 50 °C. Cette caractéristique ne sera pas testée par l’équipe puisqu’aucun matériel ou laboratoire est disponible pour effectuer un tel test de façon sécuritaire. L’équipe se basera alors sur les données fournies par le manufacturier du boîtier. 

2. ### **Durée de vie** {#durée-de-vie}

Selon le document de spécifications fonctionnelles, le dispositif doit pouvoir fonctionner pendant au moins un an avant de nécessiter quelconque changement dans l’alimentation. Cette caractéristique ne sera pas testée puisque le projet s’étale uniquement sur quelques mois. 

3. ### **Alerte débit** {#alerte-débit}

Puisque nous ne pouvons pas prédire si les valeurs de débit seront sous le seuil minimal, il sera impossible de tester les alertes de débit lorsque le dispositif sera installé à l’UNF. Les alertes ne pourront pas être testées avant l’installation finale, puisque le dispositif doit absolument être connecté au débitmètre de l’UNF.

3. ## **Outils utilisés lors des tests** {#outils-utilisés-lors-des-tests}

   1. ### **Thermomètre à fluide commercial** {#thermomètre-à-fluide-commercial}

Afin de vérifier l’exactitude des données de température de l’eau du chiller captées, un thermomètre à fluide commercial sera utilisé dans le but de comparer les deux valeurs. Celui-ci est déjà installé sur la tuyauterie du chiller à l’UNF.

2. ### **Thermomètre commercial standard**  {#thermomètre-commercial-standard}

Afin de vérifier l’exactitude des données de température de la salle IRM captées, un thermomètre commercial standard sera utilisé dans le but de comparer les deux valeurs.

3. ### **Capteur d’humidité commercial**  {#capteur-d’humidité-commercial}

Afin de vérifier l’exactitude des données d’humidité de la salle IRM captées, un capteur d’humidité commercial sera utilisé dans le but de comparer les deux valeurs.

4. ### **Débitmètre Q9 Flomec** {#débitmètre-q9-flomec}

Afin de vérifier l’exactitude des données de débit de l’eau du chiller, les valeurs reçues par l’Arduino par biais de l'adaptateur 4-20 mA seront comparées à celles affichées directement sur le débitmètre Q9 Flomec.

5. ### **Balance électronique**  {#balance-électronique}

Afin de vérifier le poids du boîtier et de la solution qu’il contient, une balance électronique sera utilisée.

6. ### **Règle graduée de 30 cm** {#règle-graduée-de-30-cm}

Afin de vérifier la taille du dispositif final, une règle graduée de 30 cm sera utilisée.

3. # **LES TESTS** {#les-tests}

   1. ## **Test T1 : Mesure de la température de la salle IRM**

   **Exigence(s) touchée(s) par ce test :**   
      4.2.1.4, 4.2.2.1, 7.1.1, 7.2.1, 7.2.3 

      1. ### **Objectifs du test** {#objectifs-du-test}

Le présent test permet de vérifier que le dispositif est en mesure de détecter la température de la salle IRM avec une précision de ± 0,3°C et une exactitude de ± 1°C (2 températures différentes avec 20 données chaque) et que la fréquence d'échantillonnage des mesures est de maximum une minute.

2. ### **Procédures** {#procédures}

1. Installer le capteur de température et d’humidité pour détecter la température de la pièce.  
2. S’assurer que le capteur est connecté au boîtier principal (Arduino Opta).  
3. S’assurer que le dispositif est alimenté le câble d’alimentation branché à une prise électrique standard.  
4. Installer un thermomètre commercial standard dans la même boîte de styromousse.  
5. Vérifier sur le graphique de l’interface Grafana que les mesures de la température de la pièce sont prises à une intervalle de maximum 1 minute.  
6. Lire la valeur de température captée directement sur le moniteur sériel de l’Arduino Opta, ou sur l’interface Grafana.  
7. Lire la valeur de température du capteur commercial.  
8. Comparer les valeurs de température obtenues avec les deux thermomètres.  
9. Répéter les étapes 6 à 8 à des intervalles de 1 minute pendant 20 minutes afin d’obtenir plusieurs mesures.  
10. Recommencer les étapes 6 à 9 pour une différente température, en déposant le capteur dans une boîte de styromousse refroidie  
    

    3. ### **Les entrées** {#les-entrées}

La seule entrée pour ce test est la température de la salle IRM.

4. ### **Les sorties attendues** {#les-sorties-attendues}

La sortie attendue pour ce test est la valeur de la température de la salle IRM et ce, avec une précision de ± 0,3°C, une exactitude de ± 1°C et une fréquence d'échantillonnage de maximum 1 minute. 

5. ### **Les résultats acceptables et inacceptables** {#les-résultats-acceptables-et-inacceptables}

Nous attendons une valeur de température ayant une précision de ± 0,3°C, une exactitude de ± 1°C et une fréquence d’échantillonnage de maximum 1 minute. Toute autre donnée sera jugée inacceptable.

2. ## **Test T2 : Mesure de la variation de la température de la salle IRM** {#test-t2 :-mesure-de-la-variation-de-la-température-de-la-salle-irm}

   **Exigence(s) touchée(s) par ce test :**   
   4.2.1.4, 4.2.2. 

   1. ### **Objectifs du test** {#objectifs-du-test-1}

Le présent test permet de vérifier que le dispositif est en mesure de détecter la variation de la température de la salle IRM dans un délai raisonnable (2 minutes), en refroidissant et en réchauffant la salle.

2. ### **Procédures** {#procédures-1}

1. Installer le capteur de température et d’humidité dans une boîte de styromousse.  
2. S’assurer que le capteur est connecté au boîtier principal (Arduino Opta).  
3. S’assurer que le dispositif est alimenté le câble d’alimentation branché à une prise électrique standard.  
4. Lire la valeur de température captée directement sur le moniteur sériel de l’Arduino Opta, ou sur l’interface Grafana et la noter.  
5. Recommencer l’étape 4 à chaque minute pour 30 fois. Après 10 minutes, on sort le thermomètre de la boîte afin qu’il se réchauffe progressivement dans la pièce.  
   

   3. ### **Les entrées** {#les-entrées-1}

La seule entrée pour ce test est la température de la salle IRM.

4. ### **Les sorties attendues** {#les-sorties-attendues-1}

La sortie attendue pour ce test est la présence d’une variation des valeurs de la température de la salle IRM lorsqu’il y a refroidissement ou réchauffement, et cela en-dessous de 2 minutes.

5. ### **Les résultats acceptables et inacceptables** {#les-résultats-acceptables-et-inacceptables-1}

Nous attendons une variation de température en-dessous de 2 minutes. Toute autre donnée sera jugée inacceptable.

3. ## **Test T3 : Mesure de l’humidité de la salle IRM** {#test-t3 :-mesure-de-l’humidité-de-la-salle-irm}

   **Exigence(s) touchée(s) par ce test :**   
   4.2.1.5, 4.2.2.1, 7.1.1  

   1. ### **Objectifs du test** {#objectifs-du-test-2}

Le présent test permet de vérifier que le dispositif est en mesure de détecter le niveau d’humidité de la salle IRM avec une exactitude de ± 3% RH et une fréquence d’échantillonnage de maximum 1 minute. 

2. ### **Procédures** {#procédures-2}

1. Installer le capteur d’humidité et de température dans la salle de l’IRM.  
2. S’assurer que le capteur est connecté au boîtier principal (Arduino Opta).  
3. S’assurer que le dispositif est alimenté le câble d’alimentation branché à  une prise électrique standard.  
4. Installer un capteur d’humidité commercial dans la salle IRM.  
5. Vérifier sur le graphique de l’interface Grafana que les mesures de l’humidité de la pièce sont prises à une intervalle de maximum 1 minute.  
6. Lire la valeur d’humidité captée directement sur le moniteur sériel de l’Arduino Opta, ou sur l’interface Grafana.  
7. Lire la valeur d’humidité du capteur commercial.  
8. Comparer les valeurs d’humidité obtenues avec les deux capteurs.  
9. Répéter les étapes 6 à 8 à des intervalles de 1 minute pendant 10 minutes afin d’obtenir plusieurs mesures.

   3. ### **Les entrées** {#les-entrées-2}

La seule entrée pour ce test est l’humidité de la salle IRM. 

4. ### **Les sorties attendues** {#les-sorties-attendues-2}

La sortie attendue pour ce test est la valeur du niveau d’humidité de la salle IRM en pourcentage à une exactitude de 3% RH et une fréquence d’échantillonnage de maximum 1 minute

5. ### **Les résultats acceptables et inacceptables** {#les-résultats-acceptables-et-inacceptables-2}

Nous attendons une valeur d’humidité ayant une exactitude de 3% RH et une fréquence d’échantillonnage de maximum 1 minute.  Toute autre donnée sera jugée inacceptable. 

4. ## **Test T4 : Mesure de la variation de l’humidité de la salle IRM**

   **Exigence(s) touchée(s) par ce test :**   
   4.2.1.5, 4.2.2.1

   1. ### **Objectifs du test** {#objectifs-du-test-3}

Le présent test permet de vérifier que le dispositif est en mesure de détecter la variation d’humidité de la salle IRM dans un délai raisonnable (2 minutes), en refroidissant et en réchauffant la salle.

2. ### **Procédures** {#procédures-3}

1. Installer le capteur d’humidité et de température dans la salle de l’IRM.  
2. S’assurer que le capteur est connecté au boîtier principal (Arduino Opta).  
3. S’assurer que le dispositif est alimenté le câble d’alimentation branché à une prise électrique standard.  
4. Lire la valeur d’humidité captée directement sur le moniteur sériel de l’Arduino Opta, ou sur l’interface Grafana et la noter.  
5. Répéter l’étape 4 à chaque minute pour 30 fois. Après 10 minutes, on sort le thermomètre de la boîte afin qu’il se réchauffe progressivement dans la pièce.

   3. ### **Les entrées** {#les-entrées-3}

La seule entrée pour ce test est l’humidité de la salle IRM. 

4. ### **Les sorties attendues** {#les-sorties-attendues-3}

La sortie attendue pour ce test est la présence d’une variation des valeurs d’humidité de la salle IRM lorsqu’il y a refroidissement ou réchauffement, et cela en-dessous de 2 minutes.

5. ### **Les résultats acceptables et inacceptables** {#les-résultats-acceptables-et-inacceptables-3}

Nous attendons une variation d’humidité en-dessous de 2 minutes. Toute autre donnée sera jugée inacceptable.

5. ## **Test T5 : Mesure de la température de l’eau du chiller (entrée et sortie)** {#test-t5 :-mesure-de-la-température-de-l’eau-du-chiller-(entrée-et-sortie)}

   **Exigence(s) touchée(s) par ce test :**   
   4.2.1.1, 4.2.1.2, 4.2.2.1, 7.1.2, 7.2.2, 7.2.4 

   1. ### **Objectifs du test** {#objectifs-du-test-4}

Le présent test permet de vérifier que le dispositif est en mesure de détecter la température de l’eau à l’entrée et à la sortie du chiller de l’IRM avec une précision de ± 0,3°C et une exactitude de ± 1°C et que la fréquence d’échantillonnage des mesures températures est de 5 secondes.

2. ### **Procédures** {#procédures-4}

1. Une fois les thermomètres installés convenablement dans un bécher d’eau, s’assurer que ceux-ci soient bien connectés au boîtier principal (Arduino Opta).  
2. S’assurer que le dispositif est alimenté par le câble d’alimentation branché à une prise électrique standard.  
3. Vérifier sur le graphique de l’interface Grafana que les mesures de la température de l’eau sont prises à une intervalle de 5 secondes.  
4. Vérifier la précision du capteur selon le fournisseur.  
5. Lire les valeurs de température captées directement sur le moniteur sériel de l’Arduino Opta, ou sur l’interface Grafana.  
6. Placer un bécher d’eau contenant les thermomètres sur une plaque chauffante. Ajouter 2 glaçons dans l’eau et programmer la plaque chauffante à 25°.  
7. Lire les valeurs de température sur les thermomètres à mercure déjà présents sur la tuyauterie.  
8. Comparer les valeurs de température obtenues avec les deux thermomètres (digital et mercure).  
9. Répéter les étapes 6 et 7 à des intervalles de 1 minute pendant 30 minutes afin d’obtenir plusieurs mesures dont les températures évoluent.

   3. ### **Les entrées** {#les-entrées-4}

Les deux entrées de ce test sont la température de l’eau à l’entrée du chiller et celle de l’eau à la sortie du chiller.

4. ### **Les sorties attendues** {#les-sorties-attendues-4}

Les sorties attendues pour ce test sont la valeur de la température de l’eau à l’entrée et à la sortie du chiller et ce, avec une précision de ± 0,3°C et une exactitude de ± 1°C et une fréquence d’échantillonnage de 5 secondes.

5. ### **Les résultats acceptables et inacceptables** {#les-résultats-acceptables-et-inacceptables-4}

Nous attendons des valeurs de température ayant une précision de ± 0,3°C, une exactitude de ± 1°C et une fréquence d’échantillonnage de 5 secondes. Toute autre donnée sera jugée inacceptable.

6. ## **Test T6 : Mesure de la variation de la température de l’eau du chiller (entrée et sortie)**

   **Exigence(s) touchée(s) par ce test :**   
   4.2.1.1, 4.2.1.2, 4.2.2.1

   1. ### **Objectifs du test** {#objectifs-du-test-5}

Le présent test permet de vérifier que le dispositif est en mesure de détecter la variation de température de l’eau dans un délai raisonnable (2 minutes), en refroidissant et en réchauffant l’eau.

2. ### **Procédures** {#procédures-5}

1. Une fois les thermomètres installés convenablement dans un bécher d’eau, s’assurer que ceux-ci soient bien connectés au boîtier principal (Arduino Opta).  
2. S’assurer que le dispositif est alimenté par le câble d’alimentation branché à une prise électrique standard.  
3. Placer un bécher d’eau contenant les thermomètres sur une plaque chauffante. Ajouter 2 glaçons dans l’eau.  
4. Lire les valeurs de température captées directement sur le moniteur sériel de l’Arduino Opta, ou sur l’interface Grafana, et la noter.  
5. Répéter l’étape 4 à des intervalles de 1 minute pendant 10 minutes afin d’obtenir plusieurs mesures.  
6. Placer le bécher sur une plaque chauffante programmée à 25°.  
7. Lire les valeurs de température captées directement sur le moniteur sériel de l’Arduino Opta, ou sur l’interface Grafana, et la noter.  
8. Répéter l’étape 7 à des intervalles de 1 minute pendant 10 minutes afin d’obtenir plusieurs mesures.  
9. Programmer la plaque chauffante à 35°  
10. Lire les valeurs de température captées directement sur le moniteur sériel de l’Arduino Opta, ou sur l’interface Grafana, et la noter.  
11. Répéter l’étape 10 à des intervalles de 1 minute pendant 10 minutes afin d’obtenir plusieurs mesures.

    3. ### **Les entrées** {#les-entrées-5}

Les deux entrées de ce test sont la température de l’eau à l’entrée du chiller et celle de l’eau à la sortie du chiller.

4. ### **Les sorties attendues** {#les-sorties-attendues-5}

La sortie attendue pour ce test est la présence d’une variation des valeurs de température de l’eau à l’entrée et à la sortie lorsqu’il y a refroidissement ou réchauffement, et cela en-dessous de 2 minutes.

5. ### **Les résultats acceptables et inacceptables** {#les-résultats-acceptables-et-inacceptables-5}

Nous attendons une variation de température de l’eau en-dessous de 2 minutes. Toute autre donnée sera jugée inacceptable.

7. ## **Test T7 : Mesure du débit de l’eau du chiller**

   **Exigence(s) touchée(s) par ce test :**   
   4.2.1.3, 4.2.2.1  

   1. ### **Objectifs du test** {#objectifs-du-test-6}

Puisque notre système utilise un débitmètre préexistant, notre travail réside dans la transmission de la valeur de débit vers l’Arduino Opta. Le présent test permet alors de vérifier que le «shield» qui lit et transmet l’information du débitmètre fonctionne correctement.

2. ### **Procédures** {#procédures-6}

1. Une fois le «shield» installé convenablement sur le débitmètre préexistant, s’assurer que celui-ci est bien connecté au boîtier principal (Arduino Opta).  
2. S’assurer que le dispositif est alimenté par le câble d’alimentation branché à une prise électrique standard.  
3. Lire la valeur de débit directement sur le moniteur sériel de l’Arduino Opta, ou sur l’interface Grafana.  
4. Lire la valeur de débit affichée directement sur le débitmètre.  
5. Comparer les deux valeurs de débit.  
6. Répéter les étapes 3 à 5 à des intervalles de 1 minute pendant 10 minutes afin d’obtenir plusieurs mesures..

   3. ### **Les entrées** {#les-entrées-6}

L’entrée pour ce test est la valeur de débit de l’eau à l’entrée du chiller provenant du débitmètre préexistant.

4. ### **Les sorties attendues** {#les-sorties-attendues-6}

La sortie attendue pour ce test est la même valeur de débit que celle affichée directement sur le débitmètre.

5. ### **Les résultats acceptables et inacceptables** {#les-résultats-acceptables-et-inacceptables-6}

Nous souhaitons obtenir la même valeur de débit que celle affichée sur le débitmètre, avec un écart de 0.5L/min permis. Toute autre donnée sera jugée inacceptable. 

8. ## **Test T8 : Envoi et réception d’alertes sur Slack**

   **Exigence(s) touchée(s) par ce test :**   
   4.2.1.8, 4.2.2.3, 4.2.2.4,, 6.1.2, 6.4.3

   1. ### **Objectifs du test** {#objectifs-du-test-7}

Le présent test permet de vérifier que le dispositif est en mesure d’envoyer des alertes sur Slack lorsque la température de la salle IRM sort de l’intervalle de 18 °C à 22 °C, lorsque la température de l’eau à l’entrée et à la sortie du chiller sort de l’intervalle de 6 °C à 12 °C et lorsque le débit de l’eau à l’entrée du chiller est inférieur à 90 L/min. Les données recueillies sont moyennées sur une heure et les alarmes sont envoyées si cette moyenne ne respecte pas les intervalles mentionnées ci-haut. Les alertes doivent afficher la métrique qui l’a déclenchée, sa valeur dangereuse, ainsi que l’heure de détection de cette valeur, et elles doivent être accessibles à tous les membres de la conversation Slack.

Puisque nous ne pouvons pas prédire si les valeurs de température mentionnées dépasseront réellement leur intervalle respectif lorsque le dispositif sera installé à l’UNF, les alertes seront testées avant l’installation finale et ce, en générant des alertes manuellement. Pour ce qui est du débit, il sera malheureusement impossible de tester les alertes puisque le dispositif doit absolument être connecté au débitmètre de l’UNF.

2. ### **Procédures** {#procédures-7}

1. Installer le dispositif avec les capteurs de température et d’humidité, et se connecter au Grafana.  
2. Déposer le capteur de température de l’eau dans de l’eau qui a une température au-delà de 12 °C.  
3. Attendre l’alerte d’erreur s’afficher dans le canal Slack, concernant la température maximale de l’eau.  
4. Vérifier que l’alerte indique quelle métrique l’a déclenchée, sa valeur dangereuse et son heure de détection.  
5. Vérifier que l’alerte est accessible à tous les membres de la conversation Slack.  
6. Ajuster l’eau pour que la température de l’eau moyennée sur une heure soit dans l’intervalle normale entre 6 à 12°C.  
7. Attendre l’alerte résolue s’afficher dans le canal Slack, concernant les valeurs être retournées dans l’intervalle accepté.  
8. Vérifier que l’alerte est accessible à tous les membres de la conversation Slack.  
9. Recommencer les étapes 2 à 8 pour une température en dessous de 6°C, et afficher l’alerte concernant la température minimale de l’eau.  
10. Placer le dispositif dans une pièce ayant une température ambiante supérieure à 22°C.  
11. Attendre l’alerte d’erreur s’afficher dans le canal Slack, concernant la température maximale de la pièce.  
12. Vérifier que l’alerte indique quelle métrique l’a déclenchée, sa valeur dangereuse et son heure de détection.  
13. Vérifier que l’alerte est accessible à tous les membres de la conversation Slack.  
14. Refroidir la pièce (ouvrir une fenêtre, augmenter l’air climatisé, etc) afin que la température de la pièce moyennée sur une heure soit dans l’intervalle de 18 à 22°C.  
15. Attendre l’alerte résolue s’afficher dans le canal Slack, concernant les valeurs être retournées dans l’intervalle accepté.  
16. Vérifier que l’alerte est accessible à tous les membres de la conversation Slack.  
17. Recommencer les étapes 10 à 16 pour une température en dessous de 18°C, et afficher l’alerte concernant la température minimale de la pièce.

    3. ### **Les entrées** {#les-entrées-7}

Les entrées pour ce test sont les températures de l’eau et de la pièce.

4. ### **Les sorties attendues** {#les-sorties-attendues-7}

Les sorties pour ce test sont les alertes d’erreur affichées dans le canal Slack concernant les températures minimales et maximales de l’eau et de la pièce, ainsi que les alertes résolues.

5. ### **Les résultats acceptables et inacceptables** {#les-résultats-acceptables-et-inacceptables-7}

Nous souhaitons obtenir les alertes d’erreur lorsque la valeur moyennée sur une heure est hors de l’intervalle accepté, indiquant quelle métrique l’a déclenchée, sa valeur dangereuse et son heure de détection, et obtenir les alertes résolues lorsque la valeur moyennée sur une heure est revenue dans l’intervalle accepté. Les alertes doivent être accessibles à tous les membres de la conversation Slack. Toute autre donnée sera jugée inacceptable.

9. ## **Test T9 : Alertes et historiques des alertes sur Grafana**

   **Exigence(s) touchée(s) par ce test :**   
   6.1.3, 6.1.4

   1. ### **Objectifs du test** {#objectifs-du-test-8}

Le présent test permet de vérifier que les alertes affichées sur l’interface web Grafana indique la métrique qui l’a déclenché, sa valeur dangereuse et son heure de détection, et que l’historique des alertes indique l’état actuel de l’alerte.

Puisque nous ne pouvons pas prédire si les valeurs de température mentionnées dépasseront réellement leur intervalle respectif lorsque le dispositif sera installé à l’UNF, les alertes seront testées avant l’installation finale et ce, en générant des alertes manuellement. Pour ce qui est du débit, il sera malheureusement impossible de tester les alertes puisque le dispositif doit absolument être connecté au débitmètre de l’UNF.

2. ### **Procédures** {#procédures-8}

1. Installer le dispositif avec les capteurs de température et d’humidité, et se connecter au Grafana.  
2. Déposer le capteur de température de l’eau dans de l’eau qui a une température au-delà de 12 °C.  
3. Dans la section *Alert Rules* de Grafana, vérifier que l’alerte de la température maximale de l’eau est activée (“firing”) et que l’alerte indique la métrique qui l’a déclenché, sa valeur dangereuse et son heure de détection.  
4. Ajuster l’eau pour que la température de l’eau moyennée sur une heure soit dans l’intervalle normale entre 6 à 12°C.  
5. Dans la section *Alert Rules* de Grafana, vérifier que l’état de l’alerte de la température maximale de l’eau est normale (“normal”).  
6. Recommencer les étapes 2 à 5 pour un total de 10 fois.  
7. Recommencer les étapes 2 à 6 pour une température en dessous de 6°C, et afficher l’état de l’alerte dans Grafana concernant la température minimale de l’eau (“firing” et “normal”), et que l’alerte indique la métrique qui l’a déclenché, sa valeur dangereuse et son heure de détection.  
8. Placer le dispositif dans une pièce ayant une température ambiante supérieure à 22°C.  
9. Dans la section *Alert Rules* de Grafana, vérifier que l’alerte de la température maximale de la pièce est activée (“firing”), et que l’alerte indique la métrique qui l’a déclenché, sa valeur dangereuse et son heure de détection.  
10. Refroidir la pièce (ouvrir une fenêtre, augmenter l’air climatisé, etc) afin que la température de la pièce moyennée sur une heure soit dans l’intervalle de 18 à 22°C.  
11. Dans la section *Alert Rules* de Grafana, vérifier que l’état de l’alerte de la température maximale de la pièce est normale (“normal”).  
12. Recommencer les étapes 8 à 11 pour un total de 10 fois.  
13. Recommencer les étapes 8 à 12 pour une température en dessous de 18°C, et afficher l’état de l’alerte dans Grafana concernant la température minimale de la pièce (“firing” et “normal”), et que l’alerte indique la métrique qui l’a déclenché, sa valeur dangereuse et son heure de détection.

    3. ### **Les entrées** {#les-entrées-8}

Les entrées pour ce test sont les températures de l’eau et de la pièce.

4. ### **Les sorties attendues** {#les-sorties-attendues-8}

Les sorties pour ce test sont les alertes d’erreur affichées sur Grafana concernant les températures minimales et maximales de l’eau et de la pièce.

5. ### **Les résultats acceptables et inacceptables** {#les-résultats-acceptables-et-inacceptables-8}

Les résultats sont acceptables si les alertes affichées sur Grafana concernant la température minimale et maximale de l’eau et de la pièce indiquent leur état (“normal” ou “firing”) et si les alertes indiquent la métrique qui l’a déclenchée, sa valeur dangereuse son heure de détection.

10. ## **Test T10 : Délai d’affichage de Grafana et historique des données** {#test-t10 :-délai-d’affichage-de-grafana-et-historique-des-données}

    **Exigence(s) touchée(s) par ce test :**   
    4.2.1.7, 4.2.2.2, 6.1.1, 6.4.1, 6.4.2

    1. ### **Objectifs du test** {#objectifs-du-test-9}

Ce test a pour but de : 

- S’assurer que le tableau de bord Grafana a une version adaptée à l’ordinateur et au téléphone cellulaire.  
- S'assurer que les données sont affichées en temps réel et sont correctement mises à jour toutes les 15 secondes sans qu’aucun clic ne soit requis.  
- Vérifier si toutes les données des 6 derniers mois sont stockées dans l’interface et récupérables en moins de 3 clics.  
- Vérifier que si un fil est déconnecté, la courbe est coupée dans l’historique pour la période ou aucune valeur n’est lue. Essayer avec chaque fil pour confirmer que chaque section affiche les données du bon thermomètre.

  2. ### **Procédures** {#procédures-9}

1. Brancher le système à Ethernet et mettre en marche Prometheus.  
2. Ouvrir Grafana sur le téléphone cellulaire.  
3. Vérifier que le tableau de bord a une version adaptée sur le téléphone cellulaire.  
4. Ouvrir Grafana sur l’ordinateur.  
5. Vérifier que le tableau de bord Grafana a une version adaptée sur l’ordinateur.  
6. Faire une première lecture de données et noter les valeurs obtenues pour tous les paramètres.  
7. Vérifier que les différentes mesures sont affichées sous un titre qui indique leur métrique.  
8. Attendre 15 secondes.  
9. Observer si les valeurs ont changé et les noter à nouveau.  
10. Répéter les étapes 6 à 9 dix fois et comparer toutes les notes : le test sera réussi si les valeurs ont changé entre chaque essai sans qu’aucun clic ne soit requis.  
11. Sélectionner l’option « 6 derniers mois » en haut à droite et vérifier que des données sont inscrites pour chacun de ces mois.  
12. Débrancher le fil du thermomètre de l’entrée du chiller et vérifier qu’une interruption dans la courbe de l’historique est visible. Répéter le test avec chaque fil.

    3. ### **Les entrées** {#les-entrées-9}

Les entrées directes du Grafana sont les données envoyées par Prometheus. Celles-ci sont envoyées en amont par le Pushgateway qui transfère les valeurs des thermomètres du Arduino Opta au Prometheus. Les deux applications communiquent déjà entre elles par le port 9090 de Prometheus.

4. ### **Les sorties attendues** {#les-sorties-attendues-9}

   La *Figure 3.1* illustre le tableau de bord attendu de l’interface Grafana, incluant les données et l’historique : 

| ![][image6] |
| ----- |
| **Figure 3.1 :** Modèle du tableau de bord Grafana  |

   5. ### **Les résultats acceptables et inacceptables** {#les-résultats-acceptables-et-inacceptables-9}

Les résultats sont acceptables si : 

- Le tableau de bord est adaptée à l’ordinateur et au téléphone cellulaire  
- Les données sont mises à jour toutes les 15 secondes avec 0 clics nécessaires  
- L’historique est affiché pour les 6 derniers mois avec moins de 3 clics nécessaires  
- Une interruption dans la courbe de l’historique est visible si un fil est déconnecté

  11. ## **Test T11 : Mesure du poids total du dispositif** {#test-t11 :-mesure-du-poids-total-du-dispositif}

  **Exigence(s) touchée(s) par ce test :**   
      5.2.2

      1. ### **Objectifs du test** {#objectifs-du-test-10}

Le présent test permet de vérifier le poids de la solution afin de s’assurer que le boîtier et la solution qu’il contient ne soient pas plus lourds que 5 kg dans le but que ceux-ci soient facilement déplaçables, au besoin.

2. ### **Procédures** {#procédures-10}

1. Une fois que le boîtier est complètement assemblé et que la solution est installée à l’intérieur, débrancher les fils des capteurs (ils ne comptent pas dans le poids de la solution).  
2. Placer le boîtier contenant la solution sur une balance électronique.  
3. Noter le poids de la solution et on le compare à la valeur cible. 

   3. ### **Les entrées** {#les-entrées-10}

L’entrée est le poids du boîtier de la solution.

4. ### **Les sorties attendues** {#les-sorties-attendues-10}

La sortie attendue est une mesure de poids en kilogrammes inférieure à 5 kg.

5. ### **Les résultats acceptables et inacceptables** {#les-résultats-acceptables-et-inacceptables-10}

Nous attendons un poids inférieur à 5 kg. Toute autre donnée sera jugée inacceptable. 

12. ## **Test T12 : Mesure de la taille du dispositif** {#test-t12 :-mesure-de-la-taille-du-dispositif}

    **Exigence(s) touchée(s) par ce test :**   
    5.1.1

    1. ### **Objectifs du test** {#objectifs-du-test-11}

Le présent test permet de vérifier si la taille du boîtier final est inférieure à 20x20x30 cm.

2. ### **Procédures** {#procédures-11}

1. Une fois que le boîtier est complètement assemblé, débrancher les fils des capteurs (ils ne comptent pas dans la taille de la solution).  
2. Mesurer la largeur, la hauteur et la profondeur du boîtier contenant la solution finale à l’aide d’une règle graduée de 30 cm.  
3. Noter les trois valeurs mentionnées, et comparer avec les valeurs cibles.

   3. ### **Les entrées** {#les-entrées-11}

Les entrées de ce test sont la largeur, la hauteur et la profondeur du boîtier contenant la solution finale.

4. ### **Les sorties attendues** {#les-sorties-attendues-11}

Les sorties attendues pour ce test sont la largeur, la hauteur et la profondeur du boîtier final, soit 20x20x30cm.

5. ### **Les résultats acceptables et inacceptables** {#les-résultats-acceptables-et-inacceptables-11}

Nous attendons des dimensions inférieures à 20x20x30 cm. Toute autre donnée sera jugée inacceptable.

13. ## **Test T13 : Exigences physiques du boîtier** {#test-t13 :-exigences-physiques-du-boîtier}

    **Exigence(s) touchée(s) par ce test :**   
    5.1.2, 5.2.1, 5.2.3, 5.2.4

    1. ### **Objectifs du test** {#objectifs-du-test-12}

Le présent test permet de vérifier les exigences physiques du dispositif, soit la couleur, les ouvertures présentes dans le boîtier, ainsi que ses pattes antidérapantes.

2. ### **Procédures** {#procédures-12}

1. Vérifier que le boîtier est de couleur neutre, soit noir, gris ou blanc.  
2. Vérifier que le boîtier possède une ouverture pour chaque câble de capteurs.  
3. Vérifier que le boîtier possède une ouverture qui peut être sécurisée lors des mouvements.  
4. Vérifier que le dessous du boîtier possède 4 pattes antidérapantes.

   3. ### **Les entrées** {#les-entrées-12}

Les entrées de ce test sont les exigences physiques du dispositif.

4. ### **Les sorties attendues** {#les-sorties-attendues-12}

Les sorties attendues pour ce test sont la présence ou non des exigences physiques, soit la couleur, les ouvertures et les pattes antidérapantes du boîtier.

5. ### **Les résultats acceptables et inacceptables** {#les-résultats-acceptables-et-inacceptables-12}

Les résultats acceptables sont la couleur neutre du boîtier, la présence d’ouvertures pour chaque câble de capteurs, l’ouverture sécurisée et la présence des 4 pattes antidérapantes du boîtier.

14. ## **Test T14 : Manuel de l’usager** {#test-t14 :-manuel-de-l’usager}

    **Exigence(s) touchée(s) par ce test :**   
    6.2.1, 6.2.2, 6.2.3, 6.2.4, 6.2.5, 6.2.6, 6.2.7

    1. ### **Objectifs du test** {#objectifs-du-test-13}

L’objectif de ce test est de vérifier qu’un manuel de l’usager a été conçu sous format PDF et qu’il contient toutes les informations nécessaires, telles que les pièces, schémas de montage, fonctionnalités, instructions d’entretien et avertissements de sécurité.

2. ### **Procédures** {#procédures-13}

1. Ouvrir le manuel de l’usager avec un logiciel qui lit le format PDF et vérifier la conformité avec le document envoyé.  
2. Vérifier que le manuel contient la liste des pièces présentes dans le système.  
3. Vérifier que le manuel contient les schémas de montage des composantes électroniques.  
4. Vérifier que le manuel contient les fonctionnalités des menus du tableau de bord Grafana.  
5. Vérifier que le manuel contient les instructions d’entretien requises pour le bon fonctionnement du système.  
6. Vérifier que le manuel contient les avertissements nécessaires de sécurité.  
   

   3. ### **Les entrées** {#les-entrées-13}

L’entrée de ce test est le manuel de l’usager.

4. ### **Les sorties attendues** {#les-sorties-attendues-13}

Les sorties attendues pour ce test sont les pièces, schémas de montage, fonctionnalités, instructions d’entretien et avertissements de sécurité.

5. ### **Les résultats acceptables et inacceptables** {#les-résultats-acceptables-et-inacceptables-13}

Les résultats acceptables sont la présence des sorties attendues dans le manuel de l’usager.

15. ## **Test T15 : Formation** {#test-t15 :-formation}

    **Exigence(s) touchée(s) par ce test :**   
    6.3.1, 6.3.2, 6.3.3, 6.3.4, 6.3.5

    1. ### **Objectifs du test** {#objectifs-du-test-14}

L’objectif de ce test est de vérifier que les clients sont suffisamment formés pour pouvoir utiliser la solution de manière indépendante et former d’autres utilisateurs à leur tour.

2. ### **Procédures** {#procédures-14}

1. Les concepteurs montent une formation intégrée au guide d’utilisation qui inclut la gestion des alarmes et la manière d’interpréter les notifications, la lecture de l’interface, la manière de naviguer dans les différents menus du tableau de bord et une explication générale du fonctionnement du système.  
2. Chaque usager doit faire une démonstration de chaque fonctionnalité, et les concepteurs évaluent s’ils les jugent capables ou non de faire l’action. Par exemple, l’usager 1 doit faire la lecture de la température de la salle et régler une alerte devant la supervision des concepteurs pour que tout le monde s’assure de la conformité des lectures et interprétations.  
3. Lorsque les usagers sont jugés aptes à manœuvrer la solution, ils doivent former une tierce personne devant la supervision des concepteurs en répétant l’étape 2, pour s’assurer que la transmission s’effectue de manière claire, durable et cohérente.

   3. ### **Les entrées** {#les-entrées-14}

L’entrée de ce test est la formation écrite et orale donnée aux clients. 

4. ### **Les sorties attendues** {#les-sorties-attendues-14}

Les sorties attendues pour ce test sont l’utilisation réussie ou non réussie des fonctionnalités de la solution de manière autonome par l’usager.

5. ### **Les résultats acceptables et inacceptables** {#les-résultats-acceptables-et-inacceptables-14}

Les résultats sont acceptables si l’usager peut mesurer, analyser et comprendre les données et les logiciels de la solution de manière autonome et durable. L’usager doit pouvoir expliquer dans ses mots le fonctionnement de la solution et l’expliquer à son tour à quelqu’un d’autre.

4. # **RÉSUMÉ DES TESTS** {#résumé-des-tests}

À la lumière de tout ce qui a été décrit à la section 3 du présent document, le tableau suivant résume les différents tests à effectuer avec leur critère de réussite respectif, et celui-ci sera utilisé lors de la réalisation des tests. La colonne « réussite/échec » sera donc laissée vide et sera remplie lorsque les tests auront été complétés.

| Tableau 4.1 : Résumé des tests |  |  |  |
| :---- | :---- | :---- | :---- |
| **T\#** | **Caractéristique testée** | **Critère de réussite** | **Réussite/échec** |
| T1 | Température de la salle IRM | Précision de ± 0,3°C |  |
|  |  | Exactitude de ± 1°C |  |
|  |  | Fréquence d'échantillonnage de 1 minute |  |
| T2 | Variation de la température de la salle IRM | Variation de la température lors d’un changement |  |
| T3 | Humidité de la salle IRM | Exactitude de ± 3% RH |  |
|  |  | Fréquence d'échantillonnage de 1 minute |  |
| T4 | Variation de l’humidité de la salle IRM | Variation de l’humidité lors d’un changement |  |
| T5 | Température de l’eau du chiller | Précision de ± 0,3°C |  |
|  |  | Exactitude de ± 1°C |  |
|  |  | Fréquence d'échantillonnage de 5 secondes |  |
| T6 | Variation de la température de l’eau | Variation de la température de l’eau lors d’un changement |  |
| T7 | Débit de l’eau du chiller | Écart maximal de 0.5 L/min avec le débitmètre |  |
| T8 | Alertes sur Slack | Alerte envoyée sur Slack si les valeurs de température sont hors de l’intervalle acceptée et alerte résolue envoyée lors du retour à la normale |  |
|  |  | Affichage de la métrique qui a déclenchée l’alerte, la valeur dangereuse, l’heure de détection |  |
|  |  | Accessibilité de l’alerte à tous les membres de la conversation Slack |  |
| T9 | Alertes et historique des alertes sur Grafana | État de l’alerte |  |
|  |  | Alerte indique la métrique qui l’a déclenchée, la valeur dangereuse et l’heure de détection |  |
| T10 | Interface Grafana et historique des données | Données mises à jour toutes les 15 secondes avec 0 clics |  |
|  |  | Affichage de l’historique des 6 derniers mois en moins de 3 clics |  |
|  |  | Affichage du texte « No data » si le fil est déconnecté |  |
|  |  | Adapté à l’ordinateur et le téléphone cellulaire |  |
| T11 | Poids total du dispositif | Poids inférieur à 5 kg |  |
| T12 | Taille du dispositif | Dimensions inférieures à 20x20x30 cm |  |
| T13 | Exigences physiques du boîtier | Couleur neutre |  |
|  |  | Présence d’ouverture pour chaque câble de capteurs |  |
|  |  | Ouverture sécurisée |  |
|  |  | Présence de 4 pattes antidérapantes |  |
| T14 | Manuel de l’usager | Pièces dans le système |  |
|  |  | Schémas de montage des composantes électroniques |  |
|  |  | Fonctionnalités des menus du tableau de bord |  |
|  |  | Format PDF lisible par tout ordinateur |  |
|  |  | Instructions d’entretien |  |
|  |  | Avertissements de sécurité |  |
|  |  | Spécifications des composantes |  |
| T15 | Formation | À quoi ressemble alarme et comment elle est transmise |  |
|  |  | Comment confirmer alarme est traitée |  |
|  |  | Comment lire l’interface |  |
|  |  | Comment naviguer dans les menus du tableau de bord |  |
|  |  | Comment utiliser le système |  |

5. # **SOMMAIRE DES TESTS** {#sommaire-des-tests}

| ID | Description | Réf. vers une section de ce document | Notes |
| :---- | :---- | :---- | :---- |
| T1 | Mesure de la température de la salle IRM | [Section 3.1](#objectifs-du-test) |  |
| T2 | Mesure de la variation de la température de la salle IRM | [Section 3.2](#test-t2 :-mesure-de-la-variation-de-la-température-de-la-salle-irm) |  |
| T3 | Mesure de l’humidité de la salle IRM | [Section 3.3](#test-t3 :-mesure-de-l’humidité-de-la-salle-irm) |  |
| T4 | Mesure de la variation de l’humidité de la salle IRM | [Section 3.4](#objectifs-du-test-3) |  |
| T5 | Mesure de la température de l’eau du chiller (entrée et sortie) | [Section 3.5](#test-t5 :-mesure-de-la-température-de-l’eau-du-chiller-\(entrée-et-sortie\)) |  |
| T6 | Mesure de la variation de la température de l’eau du chiller (entrée et sortie) | [Section 3.6](#objectifs-du-test-5) |  |
| T7 | Mesure du débit de l’eau du chiller | [Section 3.7](#objectifs-du-test-6) |  |
| T8 | Envoi et réception d’alertes sur Slack | [Section 3.8](#objectifs-du-test-7) |  |
| T69 | Alertes et historique des alertes sur Grafana | [Section 3.9](#objectifs-du-test-8) |  |
| T10 | Délai d’affichage de Grafana et historique des données | [Section 3.10](#test-t10 :-délai-d’affichage-de-grafana-et-historique-des-données) |  |
| T11 | Mesure du poids total du dispositif | [Section 3.11](#test-t11 :-mesure-du-poids-total-du-dispositif) |  |
| T12 | Mesure de la taille du dispositif | [Section 3.12](#test-t12 :-mesure-de-la-taille-du-dispositif) |  |
| T13 | Exigences physiques du boîtier | [Section 3.13](#test-t13 :-exigences-physiques-du-boîtier) |  |
| T14 | Manuel de l’usager | [Section 3.14](#test-t14 :-manuel-de-l’usager) |  |
| T15 | Formation | [Section 3.15](#test-t15 :-formation) |  |

**HISTORIQUE DES VERSIONS**

| Version | Date | Détails | Auteur(s) |
| :---- | :---- | :---- | :---- |
| 0.1 | 26 février 2025 | Première version complétée | William, Louis-Antoine, Charlotte, Héloïse, Emmy |
| 0.2 | 9 avril 2025 | Ajustement des procédures de tests par rapport aux résultats des tests | Héloïse, Emmy |

[image1]: <data:image/png;base64,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>

[image2]: <data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADwAAAAWCAYAAACcy/8iAAABTElEQVR4Xu2TMa5GQBDHlUoHUGhI1Dr3ETWJSiJRS9xCo3AAcQeNxhUUEi6wL7svNvuNZZf3ScTzS8TMf2Z2ZlYo6J+hQOHpvAs/nXfhq1GU/Zai+F+59vSDsMtetfhXTxUNCeOsr6oqeWdZRrUr2J9QEriIDFs1nudB6avwux5ga3AIzIM+RtM01DQNlAlBEECJe4aI4xUMRxru/Z/Ql+FMDeZUlahZFEWo6zrqw3yRD7XFruuaaoZhUPsI604CeMNhtvS2bT9iVVUx0V/6vofSCt/3URiGxF7OG4aBTZGCPyWHaZqgRMDNtx4YL8sSjeNI7DzPka7rHxcC32y94zjUtm17lSOLVObSyDRNGJIiSRJkWRax53nmDsheDMZ13c1LxhRFASUp1p0ZcPM0TaEsDf6ad2N34bPEccz9infgnlNdyLvw03kXfjo/2wi2WOGc3+0AAAAASUVORK5CYII=>

[image3]: <data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAD0AAAAcCAYAAADSkrd6AAACOklEQVR4Xu2XO68pURTHT+Oz+AY6rUKjEz4BNYmQEBHvaDziHYmIgkaDQkGhEI2EREGHSERBqAhhnezlzmRm38vd91ycEeeXTNZa/7XJ/CezH/MBb8gHLbwDP6bfhR/T78I/mw6HwzAcDkVaq9US1VKH2fT5fKall4XJdCgUoqWXhsm01FksFuBwOMBsNtOtP8JkOpfL0dK3kUwm+dzn8/F5Npvlc45ut0tLCJNpIb1eDzabDS0/nXK5zOdqtVrQuaDT6WiJh9n0er2mpW9nuVxijEQiIr1Wq4lqGmbTUmIymWCsVCoYt9utsP1Xnmo6kUhALBajZYRsiafTCTqdDt3isdlsolqj0UCpVMJXXaFQiHq3uGra5XLR0n8RjUZFcTwe46pLaDQaGFUq1WXwL6rVqqgmKzRHPp8Hg8GAD3E6nQpGXVbzW9vsVdPFYpGW7kIqlYL9fo/5fD7HyK3I7XYb6vU6P5ac/oQYjUaMxDDBZDIJ28xcNf0oyKLDLUDccXY0GvF98lCOxyPm/X6f15vNJjidTr4m0G8CK0ymB4MBWK1WsFgsEAwGb16BQAAvv9+P+6jX6wWPxwNutxvsdjvo9XqsyRilUom/IWPI/2u1WpDJZCCXy3H+z2YznAaHwwHvI5PJUHd2Ybfb0dJNmEw/G/KQ0+m0SFutVr9pX0WSpmkKhQLGeDxOdb6G5E1z859ApsI9kLzpR/Ayprlt7h5I0vS1r6N7IUnT5GhJIFvcI5Ck6UfzlqY/AbNOFrKtCIWkAAAAAElFTkSuQmCC>

[image4]: <data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAACwAAAAUCAYAAAD2rd/BAAABvUlEQVR4Xt2Vv4rCQBDGIwpiY2ws/AOClhbaqpWCYGdjYekD+BR2EkFBQZtgq62grWhjJfgAWglWYisiZO52ICuZrLnoeUHv13wz3xDyZTebSPBhSNR4d/5/4HA4jFoqlcjEGR4KfDweqWULt9sNiqJQ+ylsB+50OtSyhdfrhfF4TO2nsRWYrdAzuFwuOJ/P1P4VtgKLkCTrSyuVCrVegvVdv5lOp9SCRCJBLQOtVgv11avLsAy82+2oBZlMhtfz+fw2IMRiMWq9BMvAm83G0GuahtpoNKDdbhtmOtVqFXfF7/dj7/P5UFOpFHS7XaxlWUZlB/JR7gaORqO8zmazvK7X67wWEQgE4Hq9Yr3dblH1V6PX60EkEoHBYAChUIhfI2K9XgvPidmxYDgcwmw2ozYnnU7DcrnkvcfjQe33+9yj5PN5DEZ38x53AzebTdTFYgH7/R5r/YlzuRzWes9elUKhAIfDAfvRaIQqgn09gsEgtW0jDCzaislkAvF43DDTf9Nsq1erFVwuF0gmk3z+F5iTCVBVFbVWq5HJ7SA6hSmwfmB+olwuU8sRTIGtOJ1OUCwWqe0oDwV+Bz4u8BcLByaLctNh3QAAAABJRU5ErkJggg==>

[image5]: <data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAFkAAAAUCAYAAADmzZEdAAADSUlEQVR4Xu2WIYwVMRCGRyKRyJVIJHIVISEhSByVyJPIdeCQSCSSYECCO4kiyIMgkEhw0I/pn52dt+WOl3t3uWT/pNl22m3/mf/vvme2YcMBcC0HNpwfHtT2qrbfrd1dTl88btU2ptiPNL4qmMyLmh38OY0vFJCR2k9C/CoWmVy+13Y7T9glFpmiUlzhqLZ3rf8+xA8JbtF5AN7/MsaUA7YuhvA6B/bFz9puhDGHSnG5mtjQ+oB53PI8xDJw1Mcc7AAOwgvzYpyYi89ZiE1MjUJGzgChWN8rmrjCifdZG4vIGcThoj2i+fbGddtV96G5I4baivkaDpdDGEOI58sWE0SOOZI5DnOAwvBuvCF3zJPhzG+tz3uPrV8wfsxKilGwnosRANEAxnlW2715+q+wnAlveLxtcc6hHjz3xtp1gAzJFfN5FWRssaguhPRp4Ze8tL5IKTFAAaKzP5kLzFN7RD68y3ocmHkyjv8UWIPjS4hFPG1Pisi6sY3hhPAxJ9aKNybirL2LzIHxmmZwGPO6lkNtX2yZMCTl5mLuGIqtX3UcIlCw+Gtf2pMEcVfmQ6LEis0iCHyq4l68R6HzJwREDhiGPQGF4wycGs2Aoz+0PuvJadLkKcCcUwzghKhgBomNYTyYrxdJwPhm6xfzAlMAQMJD65NIxtieCAVITo7THoB5Eo3IYwpGQbLjJBSAD/uzt84E5CBjYJhis5FUH4rX+3TpnxlCU4uF0KVN9pBdPtT2K4y1OXEAQa7iURuP7Qmm0AcQkThKiPPum3+L2Xc0L0r8LIAsGDyKLfkSw8GPzAs4mpuGfUubF4hxyyi8xJUI5ARYz23LgBs5I+7aLdr5FkWwaS4y+GqzalxPnhyEi2jxao6hL7KCHIcj5RASBZMtnRyBICXFOB8xJAy8dCMieFfCgsG88BJZQBRyyYATBZ1an/MwxKmAUHYKgCQbZnD1KIqcwPscxrOYExR0pSVCvLYSMK4nYQDxXpGjiEKxWeAsdAQFhqsMAYc3tutQcltz5WBuDt7DNGt164LrfWJOQCSGuOCM6H2zBAiyP+IpiR5RBDo258YaRMzFEEbzxCXi/4Az9nlvwxkhZ284ILhN8V/Ghg0bNlwG/gAlteFqJGQDjQAAAABJRU5ErkJggg==>

[image6]: <data:image/png;base64,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>