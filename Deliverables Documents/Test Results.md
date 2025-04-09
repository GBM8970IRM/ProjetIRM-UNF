Monitoring de salle d’IRM  
**RÉSULTATS DES TESTS**  
**GBM8970.004 v 0.1**  
**9 avril 2025**

	

| Nom | Matricule | Signature |
| :---- | :---- | ----- |
| William Sirois | 2129771 | **![][image1]** |
| Louis-Antoine Delisle  | 2148039 | ![][image2] |
| Emmy Tran-Khanh | 2141807 | **![][image3]** |
| Héloïse Warin | 2128566 | **![][image4]** |
| Charlotte Pépin | 2147949 | **![][image5]** |

**TABLE DES MATIÈRES**

[**1 INTRODUCTION	5**](#introduction)

[**2 DÉVELOPPEMENT DURABLE	5**](#développement-durable)

[**3 LES RÉSULTATS	5**](#les-résultats)

[**3.1 Test T1 : Mesure de la température de la salle IRM	5**](#test-t1 :-mesure-de-la-température-de-la-salle-irm)

[3.1.1 Sommaire du test	5](#sommaire-du-test)

[3.1.2 Résultats obtenus par rapport aux résultats attendus	5](#résultats-obtenus-par-rapport-aux-résultats-attendus)

[3.1.3 Incidents	6](#incidents)

[3.1.4 Explications	6](#explications)

[3.1.5 Correctifs	6](#correctifs)

[**3.2 Test T2 : Mesure de la variation de la température de la salle IRM	6**](#test-t2 :-mesure-de-la-variation-de-la-température-de-la-salle-irm)

[3.2.1 Sommaire du test	6](#sommaire-du-test-1)

[3.2.2 Résultats obtenus par rapport aux résultats attendus	6](#résultats-obtenus-par-rapport-aux-résultats-attendus-1)

[3.2.3 Incidents	7](#incidents-1)

[3.2.4 Explications	7](#explications-1)

[3.2.5 Correctifs	7](#correctifs-1)

[**3.3 Test T3 : Mesure de l’humidité de la salle IRM	7**](#test-t3 :-mesure-de-l’humidité-de-la-salle-irm)

[3.3.1 Sommaire du test	7](#sommaire-du-test-2)

[3.3.2 Résultats obtenus par rapport aux résultats attendu	7](#résultats-obtenus-par-rapport-aux-résultats-attendu)

[3.3.3 Incidents	7](#incidents-2)

[3.3.4 Explications	7](#explications-2)

[3.3.5 Correctifs	7](#correctifs-2)

[**3.4 Test T4 : Mesure de la variation de l’humidité de la salle IRM	7**](#test-t4 :-mesure-de-la-variation-de-l’humidité-de-la-salle-irm)

[3.4.1 Sommaire du test	8](#sommaire-du-test-3)

[3.4.2 Résultats obtenus par rapport aux résultats attendu	8](#résultats-obtenus-par-rapport-aux-résultats-attendu-1)

[3.4.3 Incidents	8](#incidents-3)

[3.4.4 Explications	8](#explications-3)

[3.4.5 Correctifs	8](#correctifs-3)

[**3.5 Test T5 : Mesure de la température de l’eau du chiller (entrée et sortie)	8**](#test-t5 :-mesure-de-la-température-de-l’eau-du-chiller-\(entrée-et-sortie\))

[3.5.1 Sommaire du test	8](#sommaire-du-test-4)

[3.5.2 Résultats obtenus par rapport aux résultats attendus	8](#résultats-obtenus-par-rapport-aux-résultats-attendus-2)

[3.5.3 Incidents	9](#incidents-4)

[3.5.4 Explications	9](#explications-4)

[3.5.5 Correctifs	9](#correctifs-4)

[**3.6 Test T6 : Mesure de la variation de la température de l’eau du chiller (entrée et sortie)	9**](#test-t6 :-mesure-de-la-variation-de-la-température-de-l’eau-du-chiller-\(entrée-et-sortie\))

[3.6.1 Sommaire du test	9](#sommaire-du-test-5)

[3.6.2 Résultats obtenus par rapport aux résultats attendus	10](#résultats-obtenus-par-rapport-aux-résultats-attendus-3)

[3.6.3 Incidents	10](#incidents-5)

[3.6.4 Explications	10](#explications-5)

[3.6.5 Correctifs	10](#correctifs-5)

[**3.7 Test T7.1 :  Mesure du débit de l’eau du chiller	10**](#test-t7.1 :-mesure-du-débit-de-l’eau-du-chiller)

[3.7.1 Sommaire du test	10](#sommaire-du-test-6)

[3.7.2 Résultats obtenus par rapport aux résultats attendus	10](#résultats-obtenus-par-rapport-aux-résultats-attendus-4)

[3.7.3 Incidents	11](#incidents-6)

[3.7.4 Explications	11](#explications-6)

[3.7.5 Correctifs	11](#correctifs-6)

[**3.8 Test T7.2 :  Mesure du débit de l’eau du chiller simulé par une source de courant	11**](#test-t7.2 :-mesure-du-débit-de-l’eau-du-chiller-simulé-par-une-source-de-courant)

[3.8.1 Sommaire du test	11](#sommaire-du-test-7)

[3.8.2 Résultats obtenus par rapport aux résultats attendus	11](#résultats-obtenus-par-rapport-aux-résultats-attendus-5)

[3.8.3 Incidents	11](#incidents-7)

[3.8.4 Explications	11](#explications-7)

[3.8.5 Correctifs	11](#correctifs-7)

[**3.9 Test T8 : Envoi et réception d’alertes sur Slack	12**](#test-t8 :-envoi-et-réception-d’alertes-sur-slack)

[3.9.1 Sommaire du test	12](#sommaire-du-test-8)

[3.9.2 Résultats obtenus par rapport aux résultats attendus	12](#résultats-obtenus-par-rapport-aux-résultats-attendus-6)

[3.9.3 Incidents	13](#incidents-8)

[3.9.4 Explications	13](#explications-8)

[3.9.5 Correctifs	13](#correctifs-8)

[**3.10 Test T9 : Alertes et historiques des alertes sur Grafana	13**](#test-t9 :-alertes-et-historiques-des-alertes-sur-grafana)

[3.10.1 Sommaire du test	13](#sommaire-du-test-9)

[3.10.2 Résultats obtenus par rapport aux résultats attendus	13](#résultats-obtenus-par-rapport-aux-résultats-attendus-7)

[3.10.3 Incidents	15](#incidents-9)

[3.10.4 Explications	15](#explications-9)

[3.10.5 Correctifs	15](#correctifs-9)

[**3.11 Test T10 : Délai d’affichage de Grafana et historique des données	15**](#test-t10 :-délai-d’affichage-de-grafana-et-historique-des-données)

[3.11.1 Sommaire du test	15](#sommaire-du-test-10)

[3.11.2 Résultats obtenus par rapport aux résultats attendus	15](#résultats-obtenus-par-rapport-aux-résultats-attendus-8)

[3.11.3 Incidents	16](#incidents-10)

[3.11.4 Explications	16](#explications-10)

[3.11.5 Correctifs	16](#correctifs-10)

[**3.12 Test T11 : Mesure du poids total du dispositif	16**](#test-t11 :-mesure-du-poids-total-du-dispositif)

[3.12.1 Sommaire du test	16](#sommaire-du-test-11)

[3.12.2 Résultats obtenus par rapport aux résultats attendus	16](#résultats-obtenus-par-rapport-aux-résultats-attendus-9)

[3.12.3 Incidents	17](#incidents-11)

[3.12.4 Explications	17](#explications-11)

[3.12.5 Correctifs	17](#correctifs-11)

[**3.13 Test T12 : Mesure de la taille du dispositif	17**](#test-t12 :-mesure-de-la-taille-du-dispositif)

[3.13.1 Sommaire du test	17](#sommaire-du-test-12)

[3.13.2 Résultats obtenus par rapport aux résultats attendus	17](#résultats-obtenus-par-rapport-aux-résultats-attendus-10)

[3.13.3 Incidents	17](#incidents-12)

[3.13.4 Explications	17](#explications-12)

[3.13.5 Correctifs	17](#correctifs-12)

[**3.14 Test T13 : Exigences physiques du boîtier	17**](#test-t13 :-exigences-physiques-du-boîtier)

[3.14.1 Sommaire du test	17](#sommaire-du-test-13)

[3.14.2 Résultats obtenus par rapport aux résultats attendus	17](#résultats-obtenus-par-rapport-aux-résultats-attendus-11)

[3.14.3 Incidents	18](#incidents-13)

[3.14.4 Explications	18](#explications-13)

[3.14.5 Correctifs	18](#correctifs-13)

[**3.15 Test T14 : Manuel de l’usager	18**](#test-t14 :-manuel-de-l’usager)

[3.15.1 Sommaire du test	18](#sommaire-du-test-14)

[3.15.2 Résultats obtenus par rapport aux résultats attendus	18](#résultats-obtenus-par-rapport-aux-résultats-attendus-12)

[3.15.3 Incidents	18](#incidents-14)

[3.15.4 Explications	19](#explications-14)

[3.15.5 Correctifs	19](#correctifs-14)

[**3.16 Test T15 : Formation	19**](#test-t15 :-formation)

[3.16.1 Sommaire du test	19](#sommaire-du-test-15)

[3.16.2 Résultats obtenus par rapport aux résultats attendus	19](#résultats-obtenus-par-rapport-aux-résultats-attendus-13)

[3.16.3 Incidents	19](#incidents-15)

[3.16.4 Explications	19](#explications-15)

[3.16.5 Correctifs	19](#correctifs-15)

[**4 RÉSUMÉ DES TESTS	19**](#résumé-des-tests)

[**5 CONCLUSION	21**](#conclusion)

[**ANNEXES	24**](#annexes)

[**Annexe A : Tableaux complets avec données des tests	24**](#annexe-a-:-tableaux-complets-avec-données-des-tests)

[A1. Test T1 : Mesure de la température de la salle IRM	24](#test-t1-:-mesure-de-la-température-de-la-salle-irm)

[A2. Test T2 : Mesure de la variation de la température de la salle IRM	27](#test-t2-:-mesure-de-la-variation-de-la-température-de-la-salle-irm)

[A3. Test T3 : Mesure de l’humidité de la salle IRM	28](#test-t3-:-mesure-de-l’humidité-de-la-salle-irm)

[A4. Test T4 : Mesure de la variation de l’humidité de la salle IRM	32](#test-t4-:-mesure-de-la-variation-de-l’humidité-de-la-salle-irm)

[A5. Test T5 : Mesure de la température de l’eau du chiller (entrée et sortie)	33](#test-t5-:-mesure-de-la-température-de-l’eau-du-chiller-\(entrée-et-sortie\))

[A6. Test T6 : Mesure de la variation de la température de l’eau du chiller (entrée et sortie)	39](#test-t6-:-mesure-de-la-variation-de-la-température-de-l’eau-du-chiller-\(entrée-et-sortie\))

[A7. Test T7.2 : Mesure du débit de l’eau du chiller simulé par une source de courant	41](#test-t7.2-:-mesure-du-débit-de-l’eau-du-chiller-simulé-par-une-source-de-courant)

[A8. Test T10 : Délai d’affichage de Grafana et historique des données	41](#test-t10-:-délai-d’affichage-de-grafana-et-historique-des-données)

1. # **INTRODUCTION** {#introduction}

Ce projet consiste en la création d’un prototype fonctionnel permettant de lire la température à l’entrée et à la sortie du système de refroidissement (chiller) d’une machine IRM (Imagerie par Résonance magnétique), le débit de l’eau entrant dans le chiller, ainsi que la température et l’humidité de la salle contenant la machine IRM à l’Unité de Neuroimagerie Fonctionnelle (UNF) de l’Institut Universitaire de Gériatrie de Montréal. Ces données doivent être captées par un Arduino Opta, puis transmises à une interface web afin de pouvoir envoyer des alertes au personnel concerné lorsque les valeurs sortent des intervalles de sécurité prédéfinies. Le présent document décrit les résultats obtenus des tests selon les résultats attendus en suivant les instructions selon le document de procédures de tests. Il décrit également les correctifs à apporter selon les incidents rencontrés.

2. # **DÉVELOPPEMENT DURABLE** {#développement-durable}

Tout d’abord, pour ce qui est de l’aspect social du développement durable, notre solution permet aux employés de l’UNF de monitorer l’IRM à distance, ce qui leur évite un déplacement inutile. Ceci améliore donc leur qualité et leur quantité de travail, ce qui aide par le fait même à la performance de l’équipe. De plus, pour ce qui est de l’aspect économique, notre produit assure une bonne qualité d’images lors des scans IRM, ce qui évite aux opérateurs et aux sujets tests de reprendre plusieurs fois leurs données et sauve donc de l’argent à l’UNF. Ceci diminue également la quantité de travail des employés. Pour finir, pour ce qui est de l’aspect environnemental du développement durable, l’équipe a tenté de réduire au maximum le nombre de commandes Digikey (seulement trois commandes ont été passées au cours des deux sessions) afin de diminuer les déplacements internationaux polluants. D’ailleurs, une commande a même été mixée avec celle d’une autre équipe pour la même raison. L’équipe s’est également efforcée d’aller chercher les différentes composantes chez un fournisseur local (tel que Abra Electronics) le plus souvent possible par souci environnemental.

3. # **LES RÉSULTATS** {#les-résultats}

   1. ## **Test T1 : Mesure de la température de la salle IRM** {#test-t1 :-mesure-de-la-température-de-la-salle-irm}

   **Exigence(s) touchée(s) par ce test :**   
      4.2.1.4, 4.2.2.1, 7.1.1, 7.2.1, 7.2.3 

      1. ### **Sommaire du test** {#sommaire-du-test}

Le test prend en entrée la température de la salle IRM en celsius, et vérifie que le dispositif est en mesure de détecter la température avec une précision de ± 0,3°C et une exactitude de ± 1°C (2 températures différentes avec 20 données) et que la fréquence d'échantillonnage des mesures est de maximum 1 minute.

2. ### **Résultats obtenus par rapport aux résultats attendus** {#résultats-obtenus-par-rapport-aux-résultats-attendus}

| Test ID | Heure | Résultat attendu | Résultat obtenu | Statut (Réussite/échec) | Commentaires |
| :---- | :---- | :---- | :---- | :---- | :---- |
| T1 | 14h19 | Fréquence d'échantillonnage : maximum 1 minute | Fréquence de 15 secondes sur Grafana | Réussite |  |
|  | 14h19 | Précision : ± 0,3°C | 0,01°C | Réussite | Donnée du fournisseur |
|  | 14h20 | Exactitude : ± 1°C  | Exactitude=120i=120Tcapteur,i-Tcomm,i Exactitude=0,495°C | Réussite |  |
|  |  |  |  |  |  |
|  | 16h15 | Exactitude : ± 1°C  | Exactitude=120i=120Tcapteur,i-Tcomm,i Exactitude=1,755°C | Échec |  |
|  |  |  |  |  |  |

   3. ### **Incidents** {#incidents}

Lors de la deuxième prise de données, l'exactitude ne respecte pas la spécification de maximum  ± 1°C, puisqu’elle est de 1,755°C, ce qui échoue au test T1.

4. ### **Explications** {#explications}

Pour cette deuxième prise de valeurs, les capteurs ont été déposés dans une boîte de styromousse remplie de glaçons afin d’avoir une température plus froide. Bien que les capteurs étaient placés à côté, la température des capteurs aurait pu être affectée par la disposition des glaçons, ce qui pourrait augmenter ou diminuer la température.

5. ### **Correctifs** {#correctifs}

Aucun correctif ne sera apporté, puisque le test échoue probablement dû à la disposition des glaçons.

2. ## **Test T2 : Mesure de la variation de la température de la salle IRM** {#test-t2 :-mesure-de-la-variation-de-la-température-de-la-salle-irm}

   **Exigence(s) touchée(s) par ce test :**   
   4.2.1.4, 4.2.2.1

   1. ### **Sommaire du test** {#sommaire-du-test-1}

Le test prend en entrée la température de la salle IRM en celsius, et vérifie que le dispositif est en mesure de détecter la variation de la température de la salle IRM dans un délai raisonnable (en-dessous de 2 minutes), en refroidissant et en réchauffant la salle. Le capteur est d’abord placé dans une boîte de styromousse refroidie pour les 10 premières minutes, puis le capteur est sorti pour le réchauffer.

2. ### **Résultats obtenus par rapport aux résultats attendus** {#résultats-obtenus-par-rapport-aux-résultats-attendus-1}

| Test ID | Heure | Résultat attendu | Résultat obtenu  | Statut (Réussite/échec) | Commentaires |
| :---- | :---- | :---- | :---- | :---- | :---- |
| T2 | 12h15 | Diminution de la température pour les 10 premières valeurs | Présence d’une variation (baisse de la température) entre chaque prise de donnée dû à la baisse de température lorsque le capteur est placé dans la boîte de styromousse refroidie par les glaçons | Réussite |  |
|  |  |  |  |  |  |
|  | 12h25 | Augmentation de la température pour les 20 dernières valeurs | Présence d’une variation (augmentation de la température) entre chaque prise de donnée dû à une augmentation de température lorsque le capteur est sorti de la boîte, à température pièce | Réussite |  |
|  |  |  |  |  |  |

   3. ### **Incidents** {#incidents-1}

Aucun incident ne s’est produit durant le test.

4. ### **Explications** {#explications-1}

N/A

5. ### **Correctifs** {#correctifs-1}

N/A

3. ## **Test T3 : Mesure de l’humidité de la salle IRM** {#test-t3 :-mesure-de-l’humidité-de-la-salle-irm}

   **Exigence(s) touchée(s) par ce test :**   
   4.2.1.5, 4.2.2.1, 7.1.1

   1. ### **Sommaire du test** {#sommaire-du-test-2}

Le test prend en entrée l’humidité de la salle IRM et vérifie que le dispositif est en mesure de détecter le niveau d’humidité avec une exactitude de ± 3% RH et une fréquence d’échantillonnage de maximum 1 minute. 

2. ### **Résultats obtenus par rapport aux résultats attendu** {#résultats-obtenus-par-rapport-aux-résultats-attendu}

| Test ID | Heure | Résultat attendu | Résultat obtenu | Statut (Réussite/échec) | Commentaires |
| :---- | :---- | :---- | :---- | :---- | :---- |
| T3 | 14h25 | Fréquence d'échantillonnage : maximum 1 minute | Fréquence de 15 secondes sur Grafana | Réussite |  |
|  | 12h20 | Exactitude : ± 3% RH  | Exactitude=120i=120Hcapteur,i-Hcomm,i Exactitude=2,595% | Réussite |  |
|  | 16h15 | Exactitude : ± 3% RH | Exactitude=120i=120Hcapteur,i-Hcomm,i Exactitude=2,955% | Réussite |  |

   3. ### **Incidents** {#incidents-2}

Aucun incident ne s’est produit durant le test.

4. ### **Explications** {#explications-2}

N/A

5. ### **Correctifs** {#correctifs-2}

N/A

4. ## **Test T4 : Mesure de la variation de l’humidité de la salle IRM** {#test-t4 :-mesure-de-la-variation-de-l’humidité-de-la-salle-irm}

   **Exigence(s) touchée(s) par ce test :**   
   4.2.1.5, 4.2.2.1

   1. ### **Sommaire du test** {#sommaire-du-test-3}

Le test prend en entrée l’humidité de la salle IRM en pourcentage, et vérifie que le dispositif est en mesure de détecter la variation de l’humidité de la salle IRM dans un délai raisonnable (en-dessous de 2 minutes), en refroidissant et en réchauffant la salle. Le capteur est d’abord placé dans une boîte de styromousse refroidie pour les 10 premières minutes, puis le capteur est sorti pour le réchauffer.

2. ### **Résultats obtenus par rapport aux résultats attendu** {#résultats-obtenus-par-rapport-aux-résultats-attendu-1}

| Test ID | Heure | Résultat attendu | Résultat obtenu | Statut (Réussite/échec) | Commentaires |
| :---- | :---- | :---- | :---- | :---- | :---- |
| T4 | 12h15 | Variation de l’humidité pour les 10 premières valeurs | Présence d’une variation de l’humidité entre chaque prise de donnée dû à la baisse de température lorsque le capteur est placé dans la boîte de styromousse refroidie par les glaçons | Réussite |  |
|  |  |  |  |  |  |
|  | 12h25 | Variation de l’humidité pour les 20 dernières valeurs | Présence d’une variation de l’humidité entre chaque prise de donnée dû à une augmentation de température lorsque le capteur est sorti de la boîte, à température pièce. On remarque que l’humidité diminue lorsque le capteur est placé dans la température de la pièce, pour une humidité d’air normale/sec. | Réussite |  |
|  |  |  |  |  |  |

   3. ### **Incidents** {#incidents-3}

Aucun incident ne s’est produit durant le test.

4. ### **Explications** {#explications-3}

N/A

5. ### **Correctifs** {#correctifs-3}

N/A

5. ## **Test T5 : Mesure de la température de l’eau du chiller (entrée et sortie)** {#test-t5 :-mesure-de-la-température-de-l’eau-du-chiller-(entrée-et-sortie)}

   **Exigence(s) touchée(s) par ce test :**   
   4.2.1.1, 4.2.1.2, 4.2.2.1, 7.1.2, 7.2.2, 7.2.4 

   1. ### **Sommaire du test** {#sommaire-du-test-4}

Le test prend en entrée la température de l’eau à l’entrée et à la sortie du chiller et vérifie que le dispositif est en mesure de détecter les températures à une précision de ± 0,3°C et une exactitude de ± 1°C et que la fréquence d’échantillonnage des mesures températures est de 5 secondes.

2. ### **Résultats obtenus par rapport aux résultats attendus** {#résultats-obtenus-par-rapport-aux-résultats-attendus-2}

| Test ID | Heure | Résultat attendu | Résultat obtenu | Statut (Réussite/échec) | Commentaires |
| :---- | :---- | :---- | :---- | :---- | :---- |
| T5 | 12h14 | Fréquence d'échantillonnage : 5 secondes | Fréquence de 15 secondes sur Grafana | Échec |  |
|  | 12h14 | Précision :  ± 0,3°C | ± 0,34°C | Échec | Donnée du fournisseur |
|  | 16h15 | Exactitude : ± 1°C | Thermomètre 1 :  Exactitude=120i=120Tdigital 1,i-Hmercure,i Exactitude=1,5475°C Thermomètre 2 :  Exactitude=120i=120Tdigital2,i-Hmercure,i Exactitude=1,542°C | Échec |  |

### 

   3. ### **Incidents** {#incidents-4}

Tous les tests échouent T5, soient les paramètres suivants : 

- Fréquence d'échantillonnage, pour une fréquence de 15 secondes sur Grafana, au lieu de 5 secondes  
- Précision de la température, pour une précision de ± 0,34°C, selon les données du fournisseur, au lieu de ± 0,3°C  
- Exactitude de la température, avec seulement un thermomètre sur deux qui a passé le test, pour 1 prise de données

  4. ### **Explications** {#explications-4}

- Pour ce qui est de la fréquence d’échantillonnage, le test échoue sur Grafana avec une fréquence de 15 secondes. Cependant, ceci vient du fait que les données sont envoyées aux 15 secondes à Grafana, et non qu’elles sont échantillonnées aux 15 secondes.  
- Puisque la précision du capteur est celle fournie par le fournisseur, et que le dépassement est seulement de ± 0,04°C, la précision de ± 0,34°C est jugée acceptable  
- Pour l’exactitude du capteur, il a été remarqué que les résistances dans le code étaient mal calibrées, ce qui a créé un écart entre la valeur réelle et la valeur obtenue. 

  5. ### **Correctifs** {#correctifs-4}

- Une correction sera apportée au push gateway, afin que le code du prometheus soit modifié pour envoyer les données aux 5 secondes.  
- Aucune correction ne sera apportée concernant la précision  
- Le code sera ajusté avec la bonne calibration des résistances.

  6. ## **Test T6 : Mesure de la variation de la température de l’eau du chiller (entrée et sortie)** {#test-t6 :-mesure-de-la-variation-de-la-température-de-l’eau-du-chiller-(entrée-et-sortie)}

  **Exigence(s) touchée(s) par ce test :**   
     4.2.1.1, 4.2.1.2, 4.2.2.1

     1. ### **Sommaire du test** {#sommaire-du-test-5}

Le test prend en entrée la température de l’eau en entrée et en sortie en celsius, et vérifie que le dispositif est en mesure de détecter la variation de la température de l’eau dans un délai raisonnable (en-dessous de 2 minutes), en refroidissant et en réchauffant l’eau. Le capteur est d’abord placé dans un bécher qui contient de l’eau refroidie par des glaçons, puis sur une plaque chauffante programmée à 25°C et 30°C.

2. ### **Résultats obtenus par rapport aux résultats attendus** {#résultats-obtenus-par-rapport-aux-résultats-attendus-3}

| Test ID | Heure | Résultat attendu | Résultat obtenu  | Statut (Réussite/échec) | Commentaires |
| :---- | :---- | :---- | :---- | :---- | :---- |
| T6 | 12h15 | Diminution de la température de l’eau pour les 10 premières valeurs | Présence d’une variation de température de l’eau entre chaque prise (1 minute) ou deux prises (2 minutes) de données pour les deux thermomètres, dû à l’eau refroidie, qui se réchauffe progressivement par la température de la pièce. | Réussite |  |
|  |  |  |  |  |  |
|  | 12h25 | Augmentation de la température de l’eau pour les 10 prochaines valeurs (plaque chauffante à 25°C) | Présence d’une variation de température de l’eau entre chaque prise (1 minute) ou deux prises (2 minutes) de données pour les deux thermomètres, dû à la plaque chauffante programmée pour 25°C. | Réussite |  |
|  |  |  |  |  |  |
|  | 12h35 | Augmentation de la température de l’eau pour les 10 dernières valeurs (plaque chauffante à 30°C) | Présence d’une variation de température de l’eau entre chaque prise (1 minute ) ou deux prises (2 minutes) de données pour les deux thermomètres, dû à la plaque chauffante programmée pour 30°C. | Réussite |  |

   3. ### **Incidents** {#incidents-5}

Aucun incident ne s’est produit durant le test.

4. ### **Explications** {#explications-5}

N/A

5. ### **Correctifs** {#correctifs-5}

N/A

7. ## **Test T7.1 :  Mesure du débit de l’eau du chiller** {#test-t7.1 :-mesure-du-débit-de-l’eau-du-chiller}

   **Exigence(s) touchée(s) par ce test :**   
   4.2.1.3, 4.2.2.1

   1. ### **Sommaire du test** {#sommaire-du-test-6}

Puisque notre système utilise un débitmètre préexistant, notre travail réside dans la transmission de la valeur de débit vers l’Arduino Opta. Le test prend en entrée la valeur de débit de l’eau à l’entrée du chiller provenant du débitmètre préexistant et vérifie que le «shield» lit et transmet l’information du débitmètre correctement, avec un écart de 0.5L/min maximum. 

2. ### **Résultats obtenus par rapport aux résultats attendus** {#résultats-obtenus-par-rapport-aux-résultats-attendus-4}

| Test ID | Heure | Résultat attendu | Résultat obtenu | Statut (Réussite/échec) | Commentaires |
| :---- | :---- | :---- | :---- | :---- | :---- |
| T7.1 | N/A | Écart : ± 0,5 L/min | N/A | Échec |  |

   3. ### **Incidents** {#incidents-6}

Nous n’avons pas été en mesure de prendre de données de débit à l’UNF. 

4. ### **Explications** {#explications-6}

À notre arrivée à l’UNF, l’extension qui permet de transmettre le débit en courant était bien installée mais n’avait pas été calibrée. Ainsi, il n’était pas possible de prendre de mesure, car la calibration nécessite d’identifier le débit 0, ce qui n’était pas possible avec les examens en cours. 

5. ### **Correctifs** {#correctifs-6}

Puisque nous n’avons pas été en mesure de prendre des mesures de débit réelles, nous avons décidé de procéder à un test de mesure de courant. Comme le débit sera fourni à la solution par un courant entre 4 et 20 mA. Nous nous assurons donc de pouvoir le mesurer dans le test suivant.

8. ## **Test T7.2 :  Mesure du débit de l’eau du chiller simulé par une source de courant** {#test-t7.2 :-mesure-du-débit-de-l’eau-du-chiller-simulé-par-une-source-de-courant}

   **Exigence(s) touchée(s) par ce test :**   
   4.2.1.3, 4.2.2.1

   1. ### **Sommaire du test** {#sommaire-du-test-7}

Puisque le débitmètre n’a pu être utilisé pour effectuer le test précédent (T7.1), une source de courant a été utilisée afin de simuler des fluctuations de courant en laboratoire, tel que fournirait le «shield» du débitmètre de l’UNF. Les valeurs obtenues par notre système (données captées) ont été comparées avec les valeurs obtenues par un multimètre placé en série dans le circuit (données affichées). Un écart de ± 0,1 mA est attendu.

2. ### **Résultats obtenus par rapport aux résultats attendus** {#résultats-obtenus-par-rapport-aux-résultats-attendus-5}

| Test ID | Heure | Résultat attendu | Résultat obtenu | Statut (Réussite/échec) | Commentaires |
| :---- | :---- | :---- | :---- | :---- | :---- |
| T7.2 | 15h37 | Écart : ± 0,1 mA | Écart : 0,01 mA | Réussite |  |
|  | 15h38 | Écart : ± 0,1 mA | Écart : 0,01 mA | Réussite |  |
|  | 15h39 | Écart : ± 0,1 mA | Écart : 0,04 mA | Réussite |  |
|  | 15h40 | Écart : ± 0,1 mA | Écart : 0,03 mA | Réussite |  |

   3. ### **Incidents** {#incidents-7}

Aucun incident ne s’est produit durant le test.

4. ### **Explications** {#explications-7}

N/A

5. ### **Correctifs** {#correctifs-7}

N/A

9. ## **Test T8 : Envoi et réception d’alertes sur Slack** {#test-t8 :-envoi-et-réception-d’alertes-sur-slack}

   **Exigence(s) touchée(s) par ce test :**   
   4.2.1.8, 4.2.2.3, 4.2.2.4,, 6.1.2, 6.4.3

   1. ### **Sommaire du test** {#sommaire-du-test-8}

Le test prend en entrée la température de la salle IRM et de l’eau du chiller et vérifie que le dispositif est en mesure d’envoyer des alertes sur Slack lorsque la température de la salle IRM sort de l’intervalle de 18 °C à 22 °C et lorsque la température de l’eau à l’entrée et à la sortie du chiller sort de l’intervalle de 6 °C à 12 °C. Les données recueillies sont moyennées sur une heure et les alarmes sont envoyées si cette moyenne ne respecte pas les intervalles mentionnées ci-haut. Les alertes doivent afficher la métrique qui l’a déclenchée, sa valeur dangereuse, ainsi que l’heure de détection de cette valeur, et elles doivent être accessibles à tous les membres de la conversation Slack.

2. ### **Résultats obtenus par rapport aux résultats attendus** {#résultats-obtenus-par-rapport-aux-résultats-attendus-6}

| Test ID | Heure | Contexte | Résultat attendu | Résultat obtenu | Statut (Réussite/échec) | Commentaires |
| :---- | :---- | :---- | :---- | :---- | :---- | ----- |
| T8 |  | T. eau \> 12°C | Alerte Slack indique métrique, valeur, heure et est accessible à tous les membres Slack | Métrique : Maximal Chiller Temperature Valeur : 12,02°C Heure : 5h06 PM Accessible à tous : Oui | Réussite | 1\) Délai de 2 minutes entre la résolution de l’alerte sur Grafana et l’envoi de l’alerte sur Slack 2\) Revoir la formulation des alertes : “which is under” au lieu de juste “under” |
|  |  |  | Alerte Slack résolue est accessible à tous les membres Slack | Métrique : Maximal Chiller Temperature Valeur : Acceptable parameters Heure : 5h16 PM Accessible à tous : Oui | Réussite |  |
|  |  | T. eau \< 6°C | Alerte Slack indique métrique, valeur, heure et est accessible à tous les membres Slack | Métrique : Minimal Chiller Temperature Valeur : 5,85°C Heure : 6h02 PM Accessible à tous : Oui | Réussite |  |
|  |  |  | Alerte Slack résolue est accessible à tous les membres Slack | Métrique : Minimal Chiller Temperature Valeur : Acceptable parameters Heure : 6h12 PM Accessible à tous : Oui | Réussite |  |
|  |  | T. pièce \> 22°C | Alerte Slack indique métrique, valeur, heure et est accessible à tous les membres Slack | Métrique : Maximal MRI Temperature Valeur : 22,23°C Heure : 5h23 PM Accessible à tous : Oui | Réussite |  |
|  |  |  | Alerte Slack résolue est accessible à tous les membres Slack | Métrique : Maximal MRI Temperature Valeur : Acceptable parameters Heure : 5h43 PM Accessible à tous : Oui | Réussite |  |
|  |  | T. pièce \< 18°C | Alerte Slack indique métrique, valeur, heure et est accessible à tous les membres Slack | Métrique : Minimal MRI Temperature Valeur : 14,08°C Heure : 4h55 PM Accessible à tous : Oui | Réussite |  |
|  |  |  | Alerte Slack résolue est accessible à tous les membres Slack | Métrique : Minimal MRI Temperature Valeur : Acceptable parameters Heure : 5h15 PM Accessible à tous : Oui | Réussite |  |

   3. ### **Incidents** {#incidents-8}

Aucun incident ne s’est produit durant le test.

4. ### **Explications** {#explications-8}

N/A

5. ### **Correctifs** {#correctifs-8}

N/A

10. ## **Test T9 : Alertes et historiques des alertes sur Grafana** {#test-t9 :-alertes-et-historiques-des-alertes-sur-grafana}

    **Exigence(s) touchée(s) par ce test :**   
    6.1.3, 6.1.4

    1. ### **Sommaire du test** {#sommaire-du-test-9}

Le test prend en entrée la température de la salle IRM et de l’eau du chiller et vérifie que les alertes affichées sur l’interface web Grafana indique la métrique qui l’a déclenché, sa valeur dangereuse et son heure de détection, et que l’historique des alertes indique l’état actuel de l’alerte.

2. ### **Résultats obtenus par rapport aux résultats attendus** {#résultats-obtenus-par-rapport-aux-résultats-attendus-7}

| Test ID | Heure | Contexte | Résultat attendu | Résultat obtenu | Statut (Réussite/échec) | Commentaires |
| :---- | :---- | :---- | :---- | :---- | :---- | :---- |
| T9 |  | T. eau \> 12°C | Alerte Grafana indique métrique, valeur, heure | Métrique : Maximal Chiller Temperature Valeur : 12,02°C Heure : 17:06:00 | Réussite |  |
|  |  |  | Historique des alertes indique l'état actuel de l’alerte (firing et normal) | Alerte affichée dans le panel ‘“Active Alerts” et indique le temps depuis qu’elle est en mode “firing” Graphique “Alert History Water Temperature” affiche coeur rouge qui indique qu’une alerte est en mode “firing” Alert State History affiche la métrique, sa valeur, son heure de déclenchement et son mode (firing ou normal)  | Réussite |  |
|  |  | T. eau \< 6°C | Alerte Grafana indique métrique, valeur, heure | Métrique : Minimal Chiller Temperature Valeur : 5,85°C Heure : 18:02:00 | Réussite |  |
|  |  |  | Historique des alertes indique l'état actuel de l’alerte (firing et normal) | Alerte affichée dans le panel ‘“Active Alerts” et indique le temps depuis qu’elle est en mode “firing” Graphique “Alert History Water Temperature” affiche coeur rouge qui indique qu’une alerte est en mode “firing” Alert State History affiche la métrique, sa valeur, son heure de déclenchement et son mode (firing ou normal)  | Réussite |  |
|  |  | T. pièce \> 22°C | Alerte Grafana indique métrique, valeur, heure | Métrique : Maximal MRI Temperature Valeur : 22,23°C Heure : 17:22:50 | Réussite |  |
|  |  |  | Historique des alertes indique l'état actuel de l’alerte (firing et normal) | Alerte affichée dans le panel ‘“Active Alerts” et indique le temps depuis qu’elle est en mode “firing” Graphique “Alert History Water Temperature” affiche coeur rouge qui indique qu’une alerte est en mode “firing” Alert State History affiche la métrique, sa valeur, son heure de déclenchement et son mode (firing ou normal)  | Réussite |  |
|  |  | T. pièce \< 18°C | Alerte Grafana indique métrique, valeur, heure | Métrique : Minimal MRI Temperature Valeur : 14,08°C Heure : 16:54:50 | Réussite |  |
|  |  |  | Historique des alertes indique l'état actuel de l’alerte (firing et normal) | Alerte affichée dans le panel ‘“Active Alerts” et indique le temps depuis qu’elle est en mode “firing” Graphique “Alert History Water Temperature” affiche coeur rouge qui indique qu’une alerte est en mode “firing” Alert State History affiche la métrique, sa valeur, son heure de déclenchement et son mode (firing ou normal)  | Réussite |  |

   3. ### **Incidents** {#incidents-9}

Aucun incident ne s’est produit durant le test.

4. ### **Explications** {#explications-9}

N/A

5. ### **Correctifs** {#correctifs-9}

N/A

11. ## **Test T10 : Délai d’affichage de Grafana et historique des données** {#test-t10 :-délai-d’affichage-de-grafana-et-historique-des-données}

    **Exigence(s) touchée(s) par ce test :**   
    4.2.1.7, 4.2.2.2, 6.1.1, 6.4.1, 6.4.2 

    1. ### **Sommaire du test** {#sommaire-du-test-10}

Le test vérifie que le tableau de bord Grafana a une version adaptée à l’ordinateur et le téléphone cellulaire, que les données sont affichées en temps réel et mises à jour toutes les 15 secondes sans clic requis, que les données des 6 derniers mois sont stockées dans l’interface et récupérables en moins de 3 clics et que si un fil est déconnecté, la courbe est coupée dans l’historique pour la période ou aucune valeur n’est lue. 

2. ### **Résultats obtenus par rapport aux résultats attendus** {#résultats-obtenus-par-rapport-aux-résultats-attendus-8}

| Test ID | Heure | Résultat attendu | Résultat obtenu | Statut (Réussite/échec) | Commentaires |
| :---- | :---- | :---- | :---- | :---- | :---- |
| T10 | 12h15 | Tableau de bord Grafana a une version adaptée à l’ordinateur | Les mesures sont visibles sur un écran d’ordinateur | Réussite |  |
|  | 12h15 | Tableau de bord Grafana a une version adaptée au téléphone cellulaire | Les mesures sont visibles sur un écran de téléphone cellulaire | Réussite |  |
|  | 12h15 | Données des 6 derniers mois stockés dans l’interface et récupérables en \< 3 clics | Le graphique des 6 derniers mois est obtenu en cliquant en haut à droite, puis en sélectionnant “Last 6 months” | Réussite | Seuls les résultats du dernier mois existent pour l’instant, puisque ce canal Grafana a été créé dans le dernier mois. |
|  | 13h59 | Données de la température de la salle affichées en temps réel mises à jour aux 15 secondes, sans clic requis | Données mises à jour aux 15 secondes | Réussite |  |
|  | 13h59 | Données de l’humidité affichées en temps réel mises à jour aux 15 secondes, sans clic requis | Données mises à jour aux 15 secondes | Réussite |  |
|  | 14h02 | Données de la température de l’eau (entrée) affichées en temps réel mises à jour aux 15 secondes, sans clic requis | Données mises à jour aux 15 secondes | Réussite |  |
|  |  | Données de la température de l’eau (sortie) affichées en temps réel mises à jour aux 15 secondes, sans clic requis | Données mises à jour aux 15 secondes | Réussite |  |
|  |  | Courbe coupée dans historique et aucune lecture de valeur si un fil est déconnecté | Une ligne plane apparaît lorsqu’il n’y a aucune donnée provenant du Prometheus ou si un capteur est déconnecté | Réussite |  |

   3. ### **Incidents** {#incidents-10}

Aucun incident ne s’est produit durant le test.

4. ### **Explications** {#explications-10}

N/A

5. ### **Correctifs** {#correctifs-10}

N/A

12. ## **Test T11 : Mesure du poids total du dispositif** {#test-t11 :-mesure-du-poids-total-du-dispositif}

    **Exigence(s) touchée(s) par ce test :**   
    5.2.2 

    1. ### **Sommaire du test** {#sommaire-du-test-11}

Le test vérifie que le poids de la solution (boîtier et la solution) ne soit pas plus lourd que 5 kg.

2. ### **Résultats obtenus par rapport aux résultats attendus** {#résultats-obtenus-par-rapport-aux-résultats-attendus-9}

| Test ID | Heure | Résultat attendu | Résultat obtenu | Statut (Réussite/échec) | Commentaires |
| :---- | :---- | :---- | :---- | :---- | :---- |
| T11 | 10h58 | Poids \< 5 kg | 3,683 kg | Réussite |  |

   3. ### **Incidents** {#incidents-11}

Aucun incident ne s’est produit durant le test.

4. ### **Explications** {#explications-11}

N/A

5. ### **Correctifs** {#correctifs-11}

N/A

13. ## **Test T12 : Mesure de la taille du dispositif** {#test-t12 :-mesure-de-la-taille-du-dispositif}

    **Exigence(s) touchée(s) par ce test :**   
    5.1.1

    1. ### **Sommaire du test** {#sommaire-du-test-12}

Le test vérifie que la taille du boîtier final est inférieure à 20x20x30 cm.

2. ### **Résultats obtenus par rapport aux résultats attendus** {#résultats-obtenus-par-rapport-aux-résultats-attendus-10}

| Test ID | Heure | Résultat attendu | Résultat obtenu | Statut (Réussite/échec) | Commentaires |
| :---- | :---- | :---- | :---- | :---- | :---- |
| T12 | 10h30 | Taille \< 20x20x30 cm | 25,4x20,3x15,2 cm | Échec |  |

   3. ### **Incidents** {#incidents-12}

La boîte est légèrement plus grande que les dimensions spécifiées dans les exigences. Elle dépasse de 5,4 cm et de 0,3 cm pour deux côtés.

4. ### **Explications** {#explications-12}

Le client préfère une boîte plus grande avec de l’espace pour la possibilité d’ajouter des extensions avec différentes fonctionnalités. Il n'est donc pas nécessaire de minimiser la taille de la boîte.

5. ### **Correctifs** {#correctifs-12}

En vue de la préférence du client, aucune correction ne sera apportée. Nous fournirons au client les instructions afin de lui permettre de changer de boîte facilement dans le guide d’utilisation.

14. ## **Test T13 : Exigences physiques du boîtier** {#test-t13 :-exigences-physiques-du-boîtier}

    **Exigence(s) touchée(s) par ce test :**   
    5.1.2, 5.2.1, 5.2.3, 5.2.4

    1. ### **Sommaire du test** {#sommaire-du-test-13}

Le test vérifie que les exigences physiques du dispositif, soient la couleur neutre, la présence d’ouverture pour chaque câble de capteurs, la présence d’une ouverture sécurisée pour les mouvements et la présence de 4 pattes antidérapantes.

2. ### **Résultats obtenus par rapport aux résultats attendus** {#résultats-obtenus-par-rapport-aux-résultats-attendus-11}

| Test ID | Heure | Résultat attendu | Résultat obtenu | Statut (Réussite/échec) | Commentaires |
| :---- | :---- | :---- | :---- | :---- | :---- |
| T13 | 10h25 | Couleur neutre (noir, gris ou blanc) | Couleur grise | Réussite |  |
|  |  | Ouverture sur le boîtier pour tous les câbles de capteurs | Présence de 4 ouvertures pour les capteurs | Réussite |  |
|  |  | Ouverture sécurisée | Présence de loquet pour sécuriser la boîte | Réussite |  |
|  |  | 4 pattes antidérapantes | Présence de 4 pattes antidérapantes | Réussite |  |

   3. ### **Incidents** {#incidents-13}

Aucun incident ne s’est produit durant le test.

4. ### **Explications** {#explications-13}

La boîte acquise pour le projet respecte l’ensemble des contraintes établies préalablement. 

5. ### **Correctifs** {#correctifs-13}

N/A

15. ## **Test T14 : Manuel de l’usager** {#test-t14 :-manuel-de-l’usager}

    **Exigence(s) touchée(s) par ce test :**   
    6.2.1, 6.2.2, 6.2.3, 6.2.4, 6.2.5, 6.2.6, 6.2.7

    1. ### **Sommaire du test** {#sommaire-du-test-14}

Le test vérifie que le manuel de l’usager est sous format PDF et qu’il contient toutes les informations nécessaires (pièces, schémas de montage, fonctionnalités, instructions d’entretien, avertissements de sécurité et spécifications des composantes).

2. ### **Résultats obtenus par rapport aux résultats attendus** {#résultats-obtenus-par-rapport-aux-résultats-attendus-12}

| Test ID | Heure | Résultat attendu | Résultat obtenu | Statut (Réussite/échec) | Commentaires |
| :---- | :---- | :---- | :---- | :---- | :---- |
| T14 | 16h00 | Format PDF | Le document est disponible en PDF sur Github | Réussite |  |
|  |  | Présence liste de pièces du système | Présence liste de pièces du système | Réussite |  |
|  |  | Présence des schémas de montage des composantes électroniques  | Présence des schémas de montage des composantes électroniques  | Réussite |  |
|  |  | Présence des fonctionnalités des menus du tableau de bord Grafana | Présence des fonctionnalités des menus du tableau de bord Grafana | Réussite |  |
|  |  | Présence des instructions d’entretien | Présence des instructions d’entretien | Réussite |  |
|  |  | Présence avertissements nécessaires de sécurité | Présence avertissements nécessaires de sécurité | Réussite |  |

   3. ### **Incidents** {#incidents-14}

Aucun incident ne s’est produit durant le test.

4. ### **Explications** {#explications-14}

N/A

5. ### **Correctifs** {#correctifs-14}

N/A

16. ## **Test T15 : Formation** {#test-t15 :-formation}

    **Exigence(s) touchée(s) par ce test :**   
    6.3.1, 6.3.2, 6.3.3, 6.3.4, 6.3.5 

    1. ### **Sommaire du test** {#sommaire-du-test-15}

Le test vérifie que les clients sont suffisamment formés pour pouvoir utiliser la solution de manière indépendante et former d’autres utilisateurs à leur tour.

2. ### **Résultats obtenus par rapport aux résultats attendus** {#résultats-obtenus-par-rapport-aux-résultats-attendus-13}

| Test ID | Heure | Résultat attendu | Résultat obtenu | Statut (Réussite/échec) | Commentaires |
| :---- | :---- | :---- | :---- | :---- | :---- |
| T15 |  | Formation intégrée (gestion des alarmes, interpréter notifications, lecture interface, naviguer tableau de bord, explication générale du système) |  | À tester |  |
|  |  | Démonstration des fonctionnalités par chaque usager jugée par concepteurs |  | À tester |  |
|  |  | Formation d’une tierce personne par les usagers devant supervision des concepteurs |  | À tester |  |

   3. ### **Incidents** {#incidents-15}

Ces tests n’ont pas été effectués.

4. ### **Explications** {#explications-15}

Il n’y avait pas assez de personnel présent à l’UNF lorsque l’équipe y est allée pour régler les derniers détails du système et le manuel d’utilisateur n’était pas terminé.

5. ### **Correctifs** {#correctifs-15}

Il s’agit d’un test primordial qui devra être mené avant l’implantation finale du système dans les installations de l’UNF, afin de s’assurer qu’il sera utilisé de manière conforme à sa conception et que les réparations et l’entretien pourront être effectués si besoin.

4. # **RÉSUMÉ DES TESTS** {#résumé-des-tests}

| Test ID | Caractéristique testée | Critère de réussite | Réussite/échec |
| :---- | :---- | :---- | :---- |
| T1 | Température de la salle IRM | Précision de ± 0,3°C | Réussite |
|  |  | Exactitude de ± 1°C | Échec |
|  |  | Fréquence d'échantillonnage de 1 minute | Réussite |
| T2 | Variation de la température de la salle IRM | Variation de la température lors d’un changement | Réussite |
| T3 | Humidité de la salle IRM | Exactitude de ± 3% RH | Réussite |
|  |  | Fréquence d'échantillonnage de 1 minute | Réussite |
| T4 | Variation de l’humidité de la salle IRM | Variation de l’humidité lors d’un changement | Réussite |
| T5 | Température de l’eau du chiller | Précision de ± 0,3°C | Échec |
|  |  | Exactitude de ± 1°C | Échec |
|  |  | Fréquence d'échantillonnage de 5 secondes | Échec |
| T6 | Variation de la température de l’eau | Variation de la température de l’eau lors d’un changement | Réussite |
| T7.1 | Débit de l’eau du chiller | Écart maximal de 0.5 L/min avec le débitmètre | Échec |
| T7.2 | Débit de l’eau du chiller simulé par une source de courant | Écart maximal de 0.5 mA avec le multimètre | Réussite |
| T8 | Alertes sur Slack | Alerte envoyée sur Slack si les valeurs de température sont hors de l’intervalle acceptée et alerte résolue envoyée lors du retour à la normale | Réussite |
|  |  | Affichage de la métrique qui a déclenchée l’alerte, la valeur dangereuse, l’heure de détection | Réussite |
|  |  | Accessibilité de l’alerte à tous les membres de la conversation Slack | Réussite |
| T9 | Alertes et historique des alertes sur Grafana | État de l’alerte | Réussite |
|  |  | Alerte indique la métrique qui l’a déclenchée, la valeur dangereuse et l’heure de détection | Réussite |
| T10 | Interface Grafana et historique des données | Données mises à jour toutes les 15 secondes avec 0 clics | Réussite |
|  |  | Affichage de l’historique des 6 derniers mois en moins de 3 clics | Réussite |
|  |  | Affichage du texte « No data » si le fil est déconnecté | Réussite |
|  |  | Adapté à l’ordinateur et le téléphone cellulaire | Réussite |
| T11 | Poids total du dispositif | Poids inférieur à 5 kg | Réussite |
| T12 | Taille du dispositif | Dimensions inférieures à 20x20x30 cm | Échec |
| T13 | Exigences physiques du boîtier | Couleur neutre | Réussite |
|  |  | Présence d’ouverture pour chaque câble de capteurs | Réussite |
|  |  | Ouverture sécurisée | Réussite |
|  |  | Présence de 4 pattes antidérapantes | Réussite |
| T14 | Manuel de l’usager | Pièces dans le système | Réussite |
|  |  | Schémas de montage des composantes électroniques | Réussite |
|  |  | Fonctionnalités des menus du tableau de bord | Réussite |
|  |  | Format PDF lisible par tout ordinateur | Réussite |
|  |  | Instructions d’entretien | Réussite |
|  |  | Avertissements de sécurité | Réussite |
| T15 | Formation | À quoi ressemble l’alarme et comment elle est transmise | À tester |
|  |  | Comment confirmer que l’alarme est traitée | À tester |
|  |  | Comment lire l’interface | À tester |
|  |  | Comment naviguer dans les menus du tableau de bord | À tester |
|  |  | Comment utiliser le système | À tester |

5. # **CONCLUSION** {#conclusion}

En conclusion, la solution est fonctionnelle et les objectifs de conception sont atteints. Effectivement, le système permet de monitorer en temps réel la température et l’humidité de la salle d’IRM, ainsi que le débit et la température d’entrée et de sortie de l’eau du système de refroidissement. La conformité de la solution a été vérifiée dans les installations de l’UNF, mais d’autres tests devront être réalisés sur place avec le débitmètre dans les prochaines semaines, après sa calibration sur le chiller. La majorité des tests sont une réussite, sauf la taille de la boîte qui est plus grosse que prévu. Toutefois, le client a mentionné un potentiel d’amélioration en ajoutant des extensions, et il aura même besoin d’une boîte de plus en plus grosse, donc cette spécification entre dans les opportunités de développement pour les prochaines itérations du produit. Également, l’exactitude n’est pas tout le temps satisfaite, mais suite aux résultats de tests des améliorations ont été apportées telles que l’ajustement des valeurs de résistance. Enfin, les tests sur la formation restent à être effectués, et cette étape primordiale sera transmise au client lors de l’implantation dans leurs leurs installations. Il est important de mentionner également qu’un guide d’utilisation a été préparé afin que des améliorations futures ou de l’entretien soient facilement réalisables à la fois sur le circuit électrique, la programmation de la prise de données, de l’interface et des alertes, etc.

**HISTORIQUE DES VERSIONS**

| Version | Date | Détails | Auteur(s) |
| :---- | :---- | :---- | :---- |
| 0.1 | 9 avril 2025 | Première version complétée | William, Louis-Antoine, Charlotte, Héloïse, Emmy |

# **ANNEXES** {#annexes}

## **Annexe A : Tableaux complets avec données des tests** {#annexe-a-:-tableaux-complets-avec-données-des-tests}

1. ### **Test T1 : Mesure de la température de la salle IRM** {#test-t1-:-mesure-de-la-température-de-la-salle-irm}

| Test ID | Heure | Résultat attendu | Données (°C) | Résultat obtenu | Statut (Réussite/échec) | Commentaires |
| :---- | :---- | :---- | :---- | :---- | :---- | :---- |
| T1 | 14h19 | Fréquence d'échantillonnage : maximum 1 minute | N/A | Fréquence de 15 secondes sur Grafana | Réussite |  |
|  | 14h19 | Précision : ± 0,3°C | N/A | 0,01°C | Réussite | Donnée du fournisseur |
|  | 14h20 | Exactitude : ± 1°C  | T. capteur : 22,0°C T commercial : 21,4°C Différence : 0,6°C | Exactitude=120i=120Tcapteur,i-Tcomm,i Exactitude=0,495°C | Réussite |  |
|  |  |  |  |  |  |  |
|  | 14h21 |  | T. capteur : 22,0°C T commercial : 21,4°C Différence : 0,6°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 14h22 |  | T. capteur : 22,0°C T commercial : 21,4°C Différence : 0,6°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 14h23 |  | T. capteur : 22,0°C T commercial : 21,4°C Différence : 0,6°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 14h24 |  | T. capteur : 21,9°C T commercial : 21,4°C Différence : 0,5°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 14h25 |  | T. capteur : 21,9°C T commercial : 21,4°C Différence : 0,5°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 14h26 |  | T. capteur : 21,9°C T commercial : 21,4°C Différence : 0,5°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 14h27 |  | T. capteur : 21,9°C T commercial : 21,4°C Différence : 0,5°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 14h28 |  | T. capteur : 21,9°C T commercial : 21,4°C Différence : 0,5°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 14h29 |  | T. capteur : 21,9°C T commercial : 21,4°C Différence : 0,5°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 14h30 |  | T. capteur : 21,9°C T commercial : 21,5°C Différence : 0,4°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 14h31 |  | T. capteur : 21,9°C T commercial : 21,4°C Différence : 0,5°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 14h32 |  | T. capteur : 21,9°C T commercial : 21,5°C Différence : 0,4°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 14h33 |  | T. capteur : 21,9°C T commercial : 21,4°C Différence : 0,5°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 14h34 |  | T. capteur : 21,9°C T commercial : 21,5°C Différence : 0,4°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 14h35 |  | T. capteur : 21,9°C T commercial : 21,5°C Différence : 0,4°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 14h36 |  | T. capteur : 21,9°C T commercial : 21,5°C Différence : 0,4°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 14h37 |  | T. capteur : 21,9°C T commercial : 21,4°C Différence : 0,5°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 14h38 |  | T. capteur : 21,9°C T commercial : 21,4°C Différence : 0,5°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 14h39 |  | T. capteur :  21,9°C T commercial : 21,4°C Différence : 0,5°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 16h15 | Exactitude : ± 1°C  | T. capteur : 11,4°C T commercial : 9,8°C Différence : 1,6°C | Exactitude=120i=120Tcapteur,i-Tcomm,i Exactitude=1,755°C | Échec |  |
|  |  |  |  |  |  |  |
|  | 16h16 |  | T. capteur : 11,4°C T commercial : 9,8°C Différence : 1,6°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 16h17 |  | T. capteur : 11,5°C T commercial : 9,9°C Différence : 1,6°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 16h18 |  | T. capteur : 11,5°C T commercial : 10,0°C Différence : 1,5°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 16h19 |  | T. capteur : 11,6°C T commercial : 10,1°C Différence : 1,5°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 16h20 |  | T. capteur : 11,7°C T commercial : 10,1°C Différence : 1,6°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 16h21 |  | T. capteur : 11,8°C T commercial : 10,1°C Différence : 1,7°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 16h22 |  | T. capteur : 11,8°C T commercial : 10,1°C Différence : 1,7°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 16h23 |  | T. capteur : 11,8°C T commercial : 10,1°C Différence : 1,7°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 16h24 |  | T. capteur : 11,9°C T commercial : 10,1°C Différence : 1,8°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 16h25 |  | T. capteur : 11,9°C T commercial : 10,1°C Différence : 1,8°C |  |  |  |
|  | 16h26 |  | T. capteur : 11,9°C T commercial : 10,1°C Différence : 1,8°C |  |  |  |
|  | 16h27 |  | T. capteur : 11,9°C T commercial : 10,1°C Différence : 1,8°C |  |  |  |
|  | 16h28 |  | T. capteur : 11,9°C T commercial : 10,1°C Différence : 1,8°C |  |  |  |
|  | 16h29 |  | T. capteur : 11,9°C T commercial : 10,0°C Différence : 1,9°C |  |  |  |
|  | 16h30 |  | T. capteur : 11,9°C T commercial : 10,0°C Différence : 1,9°C |  |  |  |
|  | 16h31 |  | T. capteur : 11,9°C T commercial : 9,9°C Différence : 2,0°C |  |  |  |
|  | 16h32 |  | T. capteur : 11,9°C T commercial : 10,0°C Différence : 1,9°C |  |  |  |
|  | 16h33 |  | T. capteur : 11,9°C T commercial : 10,0°C Différence : 1,9°C |  |  |  |
|  | 16h34 |  | T. capteur : 11,9°C T commercial : 9,9°C Différence : 2,0°C |  |  |  |

   ### 

2. ### **Test T2 : Mesure de la variation de la température de la salle IRM** {#test-t2-:-mesure-de-la-variation-de-la-température-de-la-salle-irm}

| Test ID | Heure | Résultat attendu | Données (°C) | Résultat obtenu  | Statut (Réussite/échec) | Commentaires |
| :---- | :---- | :---- | :---- | :---- | :---- | :---- |
| T2 | 12h15 | Diminution de la température pour les 10 premières valeurs | 6,98°C | Présence d’une variation (baisse de la température) entre chaque prise de donnée dû à la baisse de température lorsque le capteur est placé dans la boîte de styromousse refroidie par les glaçons | Réussite |  |
|  |  |  |  |  |  |  |
|  | 12h16 |  | 6,74°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h17 |  | 6,58°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h18 |  | 6,44°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h19 |  | 6,33°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h20 |  | 6,27°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h21 |  | 6,14°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h22 |  | 6,15°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h23 |  | 6,16°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h24 |  | 6,02°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h25 | Augmentation de la température pour les 20 dernières valeurs | 6,27°C | Présence d’une variation (augmentation de la température) entre chaque prise de donnée dû à une augmentation de température lorsque le capteur est sorti de la boîte, à température pièce | Réussite |  |
|  |  |  |  |  |  |  |
|  | 12h26 |  | 8,24°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h27 |  | 10,9°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h28 |  | 13,0°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h29 |  | 14,6°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h30 |  | 15,9°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h31 |  | 16,8°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h32 |  | 17,7°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h33 |  | 18,4°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h34 |  | 18,9 °C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h35 |  | 19,4°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h36 |  | 19,7°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h37 |  | 20,0°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h38 |  | 20,3°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h39 |  | 20,4°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h40 |  | 20,6°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h41 |  | 20,8°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h42 |  | 20,9°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h43 |  | 21,0°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h44 |  | 21,1°C |  |  |  |
|  |  |  |  |  |  |  |

3. ### **Test T3 : Mesure de l’humidité de la salle IRM** {#test-t3-:-mesure-de-l’humidité-de-la-salle-irm}

| Test ID | Heure | Résultat attendu | Données (%) | Résultat obtenu | Statut (Réussite/échec) | Commentaires |
| :---- | :---- | :---- | :---- | :---- | :---- | :---- |
| T3 | 14h25 | Fréquence d'échantillonnage : maximum 1 minute | N/A | Fréquence de 15 secondes sur Grafana | Réussite |  |
|  | 12h20 | Exactitude : ± 3% RH  | H. capteur : 22,4% H commercial : 20% Différence : 2,4% | Exactitude=120i=120Hcapteur,i-Hcomm,i Exactitude=2,595% | Réussite |  |
|  | 12h21 |  | H. capteur : 22,4% H commercial : 20% Différence : 2,4% |  |  |  |
|  | 12h22 |  | H. capteur : 23,4% H commercial : 20% Différence : 3,4% |  |  |  |
|  | 12h23 |  | H. capteur : 22,3% H commercial : 20% Différence : 2,3% |  |  |  |
|  | 12h24 |  | H. capteur : 22,5% H commercial : 20% Différence : 2,5% |  |  |  |
|  | 12h25 |  | H. capteur : 22,7% H commercial : 20% Différence : 2,7% |  |  |  |
|  | 12h26 |  | H. capteur : 22,5% H commercial : 20% Différence : 2,5% |  |  |  |
|  | 12h27 |  | H. capteur : 23,3% H commercial : 20% Différence : 3,3% |  |  |  |
|  | 12h28 |  | H. capteur : 22,6% H commercial : 20% Différence : 2,6% |  |  |  |
|  | 12h29 |  | H. capteur : 22,5% H commercial : 20% Différence : 2,5% |  |  |  |
|  | 12h30 |  | H. capteur : 22,9% H commercial : 20% Différence : 2,9% |  |  |  |
|  | 12h31 |  | H. capteur : 22,6% H commercial : 20% Différence : 2,6% |  |  |  |
|  | 12h32 |  | H. capteur : 22,5% H commercial : 20% Différence : 2,5% |  |  |  |
|  | 12h33 |  | H. capteur : 22,2% H commercial : 20% Différence : 2,2% |  |  |  |
|  | 12h34 |  | H. capteur : 22,4% H commercial : 20% Différence : 2,4% |  |  |  |
|  | 12h35 |  | H. capteur : 22,5% H commercial : 20% Différence : 2,5% |  |  |  |
|  | 12h36 |  | H. capteur : 22,4% H commercial : 20% Différence : 2,4% |  |  |  |
|  | 12h37 |  | H. capteur : 22,4% H commercial : 20% Différence : 2,4% |  |  |  |
|  | 12h38 |  | H. capteur : 22,4% H commercial : 20% Différence : 2,4% |  |  |  |
|  | 12h39 |  | H. capteur : 23,0% H commercial : 20% Différence : 3,0% |  |  |  |
|  | 16h15 | Exactitude : ± 3% RH | H. capteur : 48,0% H commercial : 45% Différence : 4,0% | Exactitude=120i=120Hcapteur,i-Hcomm,i Exactitude=2,955% | Réussite |  |
|  | 16h16 |  | H. capteur : 47,6% H commercial : 45% Différence : 2,6% |  |  |  |
|  | 16h17 |  | H. capteur : 46,3% H commercial : 44% Différence : 2,3% |  |  |  |
|  | 16h18 |  | H. capteur : 47,9% H commercial : 44% Différence : 3,9% |  |  |  |
|  | 16h19 |  | H. capteur :45,5 % H commercial : 44% Différence : 1,5% |  |  |  |
|  | 16h20 |  | H. capteur : 47,1% H commercial : 43% Différence : 4,1% |  |  |  |
|  | 16h21 |  | H. capteur : 44,9% H commercial : 43% Différence : 1,9% |  |  |  |
|  | 16h22 |  | H. capteur : 44,9% H commercial : 42% Différence : 2,9% |  |  |  |
|  | 16h23 |  | H. capteur : 45,4% H commercial : 42% Différence : 3,4 % |  |  |  |
|  | 16h24 |  | H. capteur : 45,1% H commercial : 42% Différence : 3,1% |  |  |  |
|  | 16h25 |  | H. capteur : 45,0% H commercial : 42% Différence : 3,0% |  |  |  |
|  | 16h26 |  | H. capteur : 45,8% H commercial : 42% Différence : 3,8% |  |  |  |
|  | 16h27 |  | H. capteur : 45,7% H commercial : 42% Différence : 3,7% |  |  |  |
|  | 16h28 |  | H. capteur : 45,1% H commercial : 42% Différence : 3,1% |  |  |  |
|  | 16h29 |  | H. capteur : 45,0% H commercial : 42% Différence : 3,0% |  |  |  |
|  | 16h30 |  | H. capteur : 44,8% H commercial : 42% Différence : 2,8% |  |  |  |
|  | 16h31 |  | H. capteur : 44,8% H commercial : 42% Différence : 2,8% |  |  |  |
|  | 16h32 |  | H. capteur : 44,6% H commercial : 42% Différence : 2,6% |  |  |  |
|  | 16h33 |  | H. capteur : 44,8% H commercial : 42% Différence : 2,8% |  |  |  |
|  | 16h34 |  | H. capteur : 44,8% H commercial : 42% Différence : 2,8% |  |  |  |

   ### 

4. ### **Test T4 : Mesure de la variation de l’humidité de la salle IRM** {#test-t4-:-mesure-de-la-variation-de-l’humidité-de-la-salle-irm}

| Test ID | Heure | Résultat attendu | Données (°C) | Résultat obtenu | Statut (Réussite/échec) | Commentaires |
| :---- | :---- | :---- | :---- | :---- | :---- | :---- |
| T4 | 12h15 | Variation de l’humidité pour les 10 premières valeurs | 64,5°C | Présence d’une variation de l’humidité entre chaque prise de donnée dû à la baisse de température lorsque le capteur est placé dans la boîte de styromousse refroidie par les glaçons | Réussite |  |
|  |  |  |  |  |  |  |
|  | 12h16 |  | 64,4°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h17 |  | 63,1°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h18 |  | 61,3°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h19 |  | 60,2°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h20 |  | 60,4°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h21 |  | 60,6°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h22 |  | 70,8°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h23 |  | 65,6°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h24 |  | 64,1°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h25 | Variation de l’humidité pour les 20 dernières valeurs | 77,7°C | Présence d’une variation de l’humidité entre chaque prise de donnée dû à une augmentation de température lorsque le capteur est sorti de la boîte, à température pièce. On remarque que l’humidité diminue lorsque le capteur est placé dans la température de la pièce, pour une humidité d’air normale/sec. | Réussite |  |
|  |  |  |  |  |  |  |
|  | 12h26 |  | 51,1°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h27 |  | 44,5°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h28 |  | 37,7°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h29 |  | 34,3°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h30 |  | 31,8°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h31 |  | 30,5°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h32 |  | 28,9°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h33 |  | 27,5°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h34 |  | 26,8°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h35 |  | 26,5°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h36 |  | 25,9°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h37 |  | 25,8°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h38 |  | 25,3°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h39 |  | 25,1°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h40 |  | 25,1°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h41 |  | 24,5°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h42 |  | 24,6°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h43 |  | 24,6°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h44 |  | 24,3°C |  |  |  |
|  |  |  |  |  |  |  |

### 

5. ### **Test T5 : Mesure de la température de l’eau du chiller (entrée et sortie)** {#test-t5-:-mesure-de-la-température-de-l’eau-du-chiller-(entrée-et-sortie)}

| Test ID | Heure | Résultat attendu | Données (°C) | Résultat obtenu | Statut (Réussite/échec) | Commentaires |
| :---- | :---- | :---- | :---- | :---- | :---- | :---- |
| T5 | 12h14 | Fréquence d'échantillonnage : 5 secondes | N/A | Fréquence de 15 secondes sur Grafana | Échec |  |
|  | 12h14 | Précision :  ± 0,3°C | N/S | ± 0,34°C | Échec | Donnée du fournisseur |
|  | 14h20 | Exactitude : ± 1°C | T. digital 1 : 22,1°C T. digital 2 : 22,8°C T mercure : 21,3°C Différence 1 : 0,8°C Différence 2 : 1,5°C | Thermomètre 1 :  Exactitude=120i=120Tdigital 1,i-Hmercure,i Exactitude=0,89°C Thermomètre 2 :  Exactitude=120i=120Tdigital2,i-Hmercure,i Exactitude=1,585°C | Échec | Thermomètre 1 passe le test Thermomètre 2 échoue le test |
|  | 14h21 |  | T. digital 1 : 22,1°C T. digital 2 : 22,7°C T mercure : 21,2°C Différence 1 : 0,9°C Différence 2 : 1,5°C |  |  |  |
|  | 14h22 |  | T. digital 1 : 22,2°C T. digital 2 : 22,9°C T mercure : 21,4°C Différence 1 : 0,8°C Différence 2 : 1,5°C |  |  |  |
|  | 14h23 |  | T. digital 1 : 22,1°C T. digital 2 : 22,7°C T mercure : 21,3°C Différence 1 : 0,8°C Différence 2 : 1,4°C |  |  |  |
|  | 14h24 |  | T. digital 1 : 22,1°C T. digital 2 : 22,8°C T mercure : 21,2°C Différence 1 : 0,9°C Différence 2 : 1,6°C |  |  |  |
|  | 14h25 |  | T. digital 1 : 22,1°C T. digital 2 : 22,9°C T mercure : 21,1°C Différence 1 : 1,0°C Différence 2 : 1,8°C |  |  |  |
|  | 14h26 |  | T. digital 1 : 21,9°C T. digital 2 : 22,8°C T mercure : 21,2°C Différence 1 : 0,7°C Différence 2 : 1,6°C |  |  |  |
|  | 14h27 |  | T. digital 1 : 22,0°C T. digital 2 : 22,8°C T mercure : 21,1°C Différence 1 : 0,9°C Différence 2 : 1,7°C |  |  |  |
|  | 14h28 |  | T. digital 1 : 22,1°C T. digital 2 : 22,8°C T mercure : 21,2°C Différence 1 : 0,9°C Différence 2 : 1,6°C |  |  |  |
|  | 14h29 |  | T. digital 1 : 22,1°C T. digital 2 : 22,9°C T mercure : 21,1°C Différence 1 : 1,0°C Différence 2 : 1,8°C |  |  |  |
|  | 14h30 |  | T. digital 1 : 22,0°C T. digital 2 : 22,7°C T mercure : 21,1°C Différence 1 : 0,9°C Différence 2 : 1,6°C |  |  |  |
|  | 14h31 |  | T. digital 1 : 22,2°C T. digital 2 : 22,8°C T mercure : 21,1°C Différence 1 : 1,1°C Différence 2 : 1,7°C |  |  |  |
|  | 14h32 |  | T. digital 1 : 22,0°C T. digital 2 : 22,6°C T mercure : 21,1°C Différence 1 : 0,9°C Différence 2 : 1,5°C |  |  |  |
|  | 14h33 |  | T. digital 1 : 22,0°C T. digital 2 : 22,7°C T mercure : 21,2°C Différence 1 : 0,8°C Différence 2 : 1,5°C |  |  |  |
|  | 14h34 |  | T. digital 1 : 22,3°C T. digital 2 : 22,7°C T mercure : 21,2°C Différence 1 : 1,1°C Différence 2 : 1,5°C |  |  |  |
|  | 14h35 |  | T. digital 1 : 22,0°C T. digital 2 : 22,6°C T mercure : 21,1°C Différence 1 : 0,9°C Différence 2 : 1,5°C |  |  |  |
|  | 14h36 |  | T. digital 1 : 22,1°C T. digital 2 : 22,7°C T mercure : 21,2°C Différence 1 : 0,9°C Différence 2 : 1,5°C |  |  |  |
|  | 14h37 |  | T. digital 1 : 22,0°C T. digital 2 : 22,8°C T mercure : 21,1°C Différence 1 : 0,9°C Différence 2 : 1,7°C |  |  |  |
|  | 14h38 |  | T. digital 1 : 22,0°C T. digital 2 : 22,7°C T mercure : 21,1°C Différence 1 : 0,9°C Différence 2 : 1,6°C |  |  |  |
|  | 14h39 |  | T. digital 1 : 22,0°C T. digital 2 : 22,9°C T mercure : 21,1°C Différence 1 : 0,9°C Différence 2 : 1,6°C |  |  |  |
|  | 16h15 | Exactitude : ± 1°C | T. digital 1 : 9,42°C T. digital 2 : 9,51°C T mercure : 8,8°C Différence 1 : 0,62°C Différence 2 : 0,71°C | Thermomètre 1 :  Exactitude=120i=120Tdigital 1,i-Hmercure,i Exactitude=1,5475°C Thermomètre 2 :  Exactitude=120i=120Tdigital2,i-Hmercure,i Exactitude=1,542°C | Échec |  |
|  | 16h16 |  | T. digital 1 : 9,33°C T. digital 2 : 9,28°C T mercure : 8,0°C Différence 1 : 1,33°C Différence 2 : 1,28°C |  |  |  |
|  | 16h17 |  | T. digital 1 : 9,19°C T. digital 2 : 9,33°C T mercure : 7,9°C Différence 1 : 1,29°C Différence 2 : 1,43°C |  |  |  |
|  | 16h18 |  | T. digital 1 : 9,46°C T. digital 2 : 9,28°C T mercure : 7,8°C Différence 1 : 1,66°C Différence 2 : 1,48°C |  |  |  |
|  | 16h19 |  | T. digital 1 : 9,28°C T. digital 2 : 8,96°C T mercure : 7,8°C Différence 1 : 1,48°C Différence 2 : 1,16°C |  |  |  |
|  | 16h20 |  | T. digital 1 : 9,14°C T. digital 2 : 9,14°C T mercure : 8,0°C Différence 1 : 1,14°C Différence 2 : 1,14°C |  |  |  |
|  | 16h21 |  | T. digital 1 : 9,24°C T. digital 2 : 9,14°C T mercure : 7,9°C Différence 1 : 1,34°C Différence 2 : 1,24°C |  |  |  |
|  | 16h22 |  | T. digital 1 : 9,28°C T. digital 2 : 8,91°C T mercure : 7,5°C Différence 1 : 1,78°C Différence 2 : 1,41°C |  |  |  |
|  | 16h23 |  | T. digital 1 : 9,14°C T. digital 2 : 8,96°C T mercure : 7,2°C Différence 1 : 1,94°C Différence 2 : 1,76°C |  |  |  |
|  | 16h24 |  | T. digital 1 : 8,87°C T. digital 2 : 9,05°C T mercure : 7,5°C Différence 1 : 1,37°C Différence 2 : 1,55°C |  |  |  |
|  | 16h25 |  | T. digital 1 : 8,87°C T. digital 2 : 8,96°C T mercure : 7,1°C Différence 1 : 1,77°C Différence 2 : 1,86°C |  |  |  |
|  | 16h26 |  | T. digital 1 : 8,68°C T. digital 2 : 8,91°C T mercure : 7,0°C Différence 1 :1,68 °C Différence 2 : 1,91°C |  |  |  |
|  | 16h27 |  | T. digital 1 : 8,87°C T. digital 2 : 8,59°C T mercure : 6,9°C Différence 1 :1,97 °C Différence 2 : 1,69°C |  |  |  |
|  | 16h28 |  | T. digital 1 : 8,41°C T. digital 2 : 8,87°C T mercure : 6,9°C Différence 1 : 1,51°C Différence 2 : 1,97°C |  |  |  |
|  | 16h29 |  | T. digital 1 : 8,5°C T. digital 2 : 8,55°C T mercure : 7,0°C Différence 1 : 1,5°C Différence 2 : 1,55°C |  |  |  |
|  | 16h30 |  | T. digital 1 : 8,32°C T. digital 2 : 8,59°C T mercure : 6,9°C Différence 1 : 1,42°C Différence 2 : 1,69°C |  |  |  |
|  | 16h31 |  | T. digital 1 : 8,22°C T. digital 2 : 8,50°C T mercure : 6,8°C Différence 1 : 1,42°C Différence 2 : 1,70°C |  |  |  |
|  | 16h32 |  | T. digital 1 : 8,64°C T. digital 2 : 8,50°C T mercure : 6,8°C Différence 1 : 1,84°C Différence 2 : 1,70°C |  |  |  |
|  | 16h33 |  | T. digital 1 : 8,18°C T. digital 2 : 8,18°C T mercure : 6,5°C Différence 1 : 1,68°C Différence 2 : 1,68°C |  |  |  |
|  | 16h34 |  | T. digital 1 : 8,41°C T. digital 2 : 8,13°C T mercure : 6,2°C Différence 1 : 2,21°C Différence 2 : 1,93°C |  |  |  |

### 

6. ### **Test T6 : Mesure de la variation de la température de l’eau du chiller (entrée et sortie)** {#test-t6-:-mesure-de-la-variation-de-la-température-de-l’eau-du-chiller-(entrée-et-sortie)}

| Test ID | Heure | Résultat attendu | Données (°C) | Résultat obtenu  | Statut (Réussite/échec) | Commentaires |
| :---- | :---- | :---- | :---- | :---- | :---- | :---- |
| T6 | 12h15 | Diminution de la température de l’eau pour les 10 premières valeurs | T. digital 1 : 13,0°C T. digital 2 : 14,0°C | Présence d’une variation de température de l’eau entre chaque prise (1 minute) ou deux prises (2 minutes) de données pour les deux thermomètres, dû à l’eau refroidie, qui se réchauffe progressivement par la température de la pièce. | Réussite |  |
|  |  |  |  |  |  |  |
|  | 12h16 |  | T. digital 1 : 13,2°C T. digital 2 : 14,2°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h17 |  | T. digital 1 : 13,5°C T. digital 2 : 14,4°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h18 |  | T. digital 1: 13,6°C T. digital 2 : 14,6°C  |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h19 |  | T. digital 1: 14,1°C T. digital 2: 14,9°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h20 |  | T. digital 1: 14,3°C T. digital 2: 14,9°C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h21 |  | T. digital 1: 14.5 °C T. digital 2: 15.1 °C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h22 |  | T. digital 1: 14.6 °C T. digital 2: 15.3 °C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h23 |  | T. digital 1: 14.8 °C T. digital 2: 15.7 °C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h24 |  | T. digital 1: 15.2 °C T. digital 2: 15.9 °C |  |  |  |
|  |  |  |  |  |  |  |
|  | 12h25 | Augmentation de la température de l’eau pour les 10 prochaines valeurs (plaque chauffante à 25°C) | T. digital 1: 15.4 °C T. digital 2: 16.1 °C | Présence d’une variation de température de l’eau entre chaque prise (1 minute) ou deux prises (2 minutes) de données pour les deux thermomètres, dû à la plaque chauffante programmée pour 25°C. | Réussite |  |
|  |  |  |  |  |  |  |
|  | 12h26 |  | T. digital 1: 15.4 °C T. digital 2: 16.2 °C  |  |  |  |
|  | 12h27 |  | T. digital 1: 15.8 °C T. digital 2: 16.7 °C |  |  |  |
|  | 12h28 |  | T. digital 1: 16.2 °C T. digital 2: 16.8 °C |  |  |  |
|  | 12h29 |  | T. digital 1: 16.3 °C T. digital 2: 17.2 °C |  |  |  |
|  | 12h30 |  | T. digital 1: 16.8 °C T. digital 2: 17.3 °C |  |  |  |
|  | 12h31 |  | T. digital 1: 16.7 °C T. digital 2: 17.5 °C |  |  |  |
|  | 12h32 |  | T. digital 1: 17.1 °C T. digital 2: 17.7 °C |  |  |  |
|  | 12h33 |  | T. digital 1: 17.2 °C T. digital 2: 18.1 °C |  |  |  |
|  | 12h34 |  | T. digital 1: 17.5 °C T. digital 2: 18.1 °C |  |  |  |
|  | 12h35 | Augmentation de la température de l’eau pour les 10 dernières valeurs (plaque chauffante à 30°C) | T. digital 1: 17.4 °C T. digital 2: 18.2 °C | Présence d’une variation de température de l’eau entre chaque prise (1 minute ) ou deux prises (2 minutes) de données pour les deux thermomètres, dû à la plaque chauffante programmée pour 30°C. | Réussite |  |
|  | 12h36 |  | T. digital 1: 17.9 °C T. digital 2: 18.8 °C |  |  |  |
|  | 12h37 |  | T. digital 1: 18.1 °C T. digital 2: 19.0 °C |  |  |  |
|  | 12h38 |  | T. digital 1: 18.6 °C T. digital 2: 19.3 °C |  |  |  |
|  | 12h39 |  | T. digital 1: 18.9 °C T. digital 2: 19.7 °C |  |  |  |
|  | 12h40 |  | T. digital 1: 19.3 °C T. digital 2: 20.0 °C |  |  |  |
|  | 12h41 |  | T. digital 1: 19.4 °C T. digital 2: 20.2 °C |  |  |  |
|  | 12h42 |  | T. digital 1: 19.6 °C T. digital 2: 20.4 °C |  |  |  |
|  | 12h43 |  | T. digital 1: 19.9 °C T. digital 2: 20.7 °C |  |  |  |
|  | 12h44 |  | T. digital 1: 20.2 °C T. digital 2: 20.7 °C |  |  |  |

   ### 

7. ### **Test T7.2 : Mesure du débit de l’eau du chiller simulé par une source de courant** {#test-t7.2-:-mesure-du-débit-de-l’eau-du-chiller-simulé-par-une-source-de-courant}

| Test ID | Heure | Résultat attendu | Données | Résultat obtenu | Statut (Réussite/échec) | Commentaires |
| :---- | :---- | :---- | :---- | :---- | :---- | :---- |
| T7.2 | 15h37 | Écart : ± 0,1 mA | D. captée : 9.52 mA D affichée : 9.53 mA | Écart : 0,01 mA | Réussite |  |
|  | 15h38 | Écart : ± 0,1 mA | D. captée : 9.57 mA D affichée : 9.58 mA | Écart : 0,01 mA | Réussite |  |
|  | 15h39 | Écart : ± 0,1 mA | D. captée : 19.61 mA D affichée :19.57 mA | Écart : 0,04 mA | Réussite |  |
|  | 15h40 | Écart : ± 0,1 mA | D. captée : 19.60 mA D affichée :19.57 mA | Écart : 0,03 mA | Réussite |  |

   ### 

8. ### **Test T10 : Délai d’affichage de Grafana et historique des données** {#test-t10-:-délai-d’affichage-de-grafana-et-historique-des-données}

| Test ID | Heure | Résultat attendu | Résultat obtenu | Statut (Réussite/échec) | Commentaires |
| :---- | :---- | :---- | :---- | :---- | :---- |
| T10 | 12h15 | Tableau de bord Grafana a une version adaptée à l’ordinateur | Les mesures sont visibles sur un écran d’ordinateur | Réussite |  |
|  | 12h15 | Tableau de bord Grafana a une version adaptée au téléphone cellulaire | Les mesures sont visibles sur un écran de téléphone cellulaire | Réussite |  |
|  | 12h15 | Données des 6 derniers mois stockés dans l’interface et récupérables en \< 3 clics | Le graphique des 6 derniers mois est obtenu en cliquant en haut à droite, puis en sélectionnant “Last 6 months” | Réussite | Seuls les résultats du dernier mois existent pour l’instant, puisque ce canal Grafana a été créé dans le dernier mois. |
|  | 13h59 | Données de la température de la salle affichées en temps réel mises à jour aux 15 secondes, sans clic requis | Valeurs température salle IRM 1 : 21,7°C 2 : 21,7°C 3 : 21,8°C 4 : 21,8°C 5 : 22,0°C 6 : 22,0°C 7 : 22,1°C 8 : 22,2°C 9 : 22,2°C 10 : 22,3°C | Réussite |  |
|  | 13h59 | Données de l’humidité affichées en temps réel mises à jour aux 15 secondes, sans clic requis | Valeurs humidité 1 : 22,8% 2 : 22,8% 3 : 28,8% 4 : 24,2% 5 : 24,8% 6 : 23,7% 7 : 26,2% 8 : 25,0% 9 : 28,1% 10 : 25,0% | Réussite |  |
|  | 14h02 | Données de la température de l’eau (entrée) affichées en temps réel mises à jour aux 15 secondes, sans clic requis | Valeurs température eau (entrée) 1 : 22,3°C 2 : 22,2°C 3 : 22,3°C 4 : 22,0°C 5 : 22,2°C 6 : 22,2°C 7 : 22,1°C 8 : 22,2°C 9 : 22,1°C 10 : 22,2°C | Réussite |  |
|  |  | Données de la température de l’eau (sortie) affichées en temps réel mises à jour aux 15 secondes, sans clic requis | Valeurs température eau (sortie) 1 : 22,8°C 2 : 22,8°C 3 : 22,8°C 4 : 22,9°C 5 : 23,1°C 6 : 22,9°C 7 : 22,9°C 8 : 22,9°C 9 : 23,0°C 10 : 22,9°C | Réussite |  |
|  |  | Courbe coupée dans historique et aucune lecture de valeur si un fil est déconnecté | Une ligne plane apparaît lorsqu’il n’y a aucune donnée provenant du Prometheus ou si un capteur est déconnecté | Réussite |  |

### 

[image1]: <data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAHsAAAAUCAYAAACtZULwAAAHLklEQVR4Xu2ZZahVSxTHr93d2C12YmEnKBYqKuoHu0VRsEBFVBRFFBsLUVHEbsEPNnZ3N2J3ux6/JbOZmXPOvU+5Pg/P+4fD3Xvt2bNnVvzXWnNj5Dfi/fv3vigBfxAxviA+UbBgQV+UgD+I32rsYcOG+aKw+Pbtm1SsWFGSJEniyD99+iRr1qyRVKlSOfJoB4z25csX/UUTfpuxL126JBcvXvTFIfj8+bMa+fnz55InT55A/ubNG0mTJo2sXLlSsmfPbr0RHcARHz16JH379pXSpUtL8uTJJV26dNK0aVMZPny49O/fXypXrizJkiWTLl26+K//EcRq7Ldv3/6yd3bq1MkXyYULFzRSbWTIkEH/EtkoziB16tQa8R8/fpTp06cHcpAiRQrn/r/Eu3fvJCYmRtq0aSMzZ870H4dF2rRpfZGiSJEivuiXYdgxNsRq7Hbt2snVq1d9cZx4+PChZMuWzRfLzp07Zdy4ccH9wYMHZcSIEXrN+AcPHgTyOXPm6PWWLVvkw4cPwTsgceLEzv1/iZcvX0qmTJk0midMmOA/dkCwdO/eXdauXes/ku/fvysTxBfQUcaMGX2xg4jG3r59u9StW9cXy44dOyRHjhy+2EGNGjWcKA2H9u3bS758+fT62LFjcvnyZb2GSfLmzavXW7dulfTp0wfvRBNQ7oEDB7QIbd26dYhDghcvXmiaihZENHakoihp0qSSNWtWXxzg1atXmrdio//r169Ljx49VBFfv36VAgUKBM9Spkypf4kKaIn5oh3kb5wbun78+LH/OGoQ1thVq1aVO3fu+GLZtGmTFk03btzwHwWgUIkLtnHJzQbjx4+X+/fv6/XPRPTNmzelQoUKvlgaNmwoR44c8cUOSDnxiSFDhsiiRYt8cUSQa2MDjrR3715fHCfCBVuIscnR0FI4ZM6cWZ49e+aLA9SrV08Vb8PP3bVq1dIiZ+7cuZoOzGbJgR07dtSqHIeysW7dOlm2bJkjYzMlS5bUvLdw4ULp1q1byAZth0FptWvXlvLlyyuj8OM7hQsXtt6IHwwePDioP2ywP/vsYc+ePVrs0XGEw9ixY7VT6dmzpzRo0MB/rPr2wb74BkXs8ePHnWchxu7du3fYaGCSRIkS+eIAT58+DSk4tm3bFhKhuXPn1rFsYujQoYEcw9++fVtKlSolI0eOtN74Ef1Hjx51ZKNHj5Zy5crJvn379B4j+kCRBii6evXqOj+Gb968ueTMmVP3G9/AmVu0aOHIKOzQH+swIBCQde3a1Rr5A3QtrH/SpEmq+1y5cmmNYEDQhStUW7VqpUFJcU0RaMMx9u7duyMaFOOEK9gA+T1LliyO7OTJkyFzTZkyRRYsWOD004A+dPny5bp5m1YPHz6sc69YscIa/aOtIyoMyJV+S0dx1LhxYxkzZozWGabt69Wrlxp88+bN2gNTM9i4deuWc/+rsNtD2AvDvX79OpA1a9ZMNm7cKC1btgw5TMJIjGcO/qJH6iST4urUqaNye+04MPOsXr1a9+UbGjjGHjhwoFKdDSgJuuOAZP369c4zKJeCigMQG1WqVHG8DiOjcBZoqm4DIgv53bt3HTmRweKJYEDBZuZYvHixyqDtmjVrOn3svXv3dE4UxFhYwiiZ+fhNnDhRrly5In369AneAygUhw8HIgaH3r9/v0ZpXLBZjjqGdRlUq1ZN2rZtq3tCT7NmzQqecerIu+fOndN72jbOIsz/GWbMmKHpywQFnQx7JSjoCCZPniyzZ88O5kNHsAnfcoxdvHjxoA/GG9kcRRlecurUKVm6dGkwlgnpN/0Cg/4YioSqiSS8bNSoUVq02Bsm4tgEJ012ruU9Fs4GoKonT56oJ7M2HCB//vzBOBjCRAURWbRoUalUqZIazFCgAf06c5pWiHm4vnbtmhQrVkznOXPmTDDex6BBg0Lqj0iAUdAVay9UqJB++/Tp05o22BvnDYDWk1M4gKEoXGEdw5I4LYUn8wDGonMMB3PSV/MOKRCWoE4g5W3YsEGZg5NHDm5MW+gYG3pECXgXm+f0ygYeamjFL5gMYAaeswCbCVgMC+jQoYM+X7VqlToKTtC5c+eg7zYFDGPIU4yHQQDKpodHIU2aNNHNly1bVqODe9aLg3BMSc6ywX7sFEEvzzcoRv9te0cXgg5IO36hyhy7du1S9jHG5KyC7+LwU6dODQkMCktYk/WbHNuvXz9dF7/58+c740k9yOmWpk2bFsiJdlgJ28C0AwYM0GDw4Rj70KFDGm14h50TDaAvii765EjAMHix/+9NckqJEiWkTJkyjhMwJwbGaES58cITJ06EHFTMmzdPI5z2xgAF2cwAPTdq1ChwEANTyBnwXdb5szh//rzSMEZnP/Xr11fmwaikkyVLljjjz549q4VnbLDXz56J2nDtlmHYcMCRcDJfZzZCqvEE/H+RYOy/CAnG/ouQYOy/CP8ADF+2gs+sJAQAAAAASUVORK5CYII=>

[image2]: <data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAE4AAAAcCAYAAADP7InhAAACNklEQVR4Xu2Wr8oyQRTGLRYvQPQGBJvBZDFYDBbBYBNB0SYIIhajxeqViEEsmkQFwaTYDdoUBG3zcRZmvpmz/2ZmfWWF+cEyZ56ZczzzuOxuhBi0iGDBIIcxThNjnCbGOE2McZr8vHHH4xFLXyF0xiWTSSw5UiwWsfRVQmdcJOLf0ng8xhLJ5/NY+lP8uwwIGCFjBuC0z0mj8AZ67XNDJ4einykBNDafz7HsitNBsMbPy+Wyoy6D6n5MsGwPgjYG+NUYDocsLpVK3Mp/Ho8Hlj6Cd2cawGEnkwmWfcEmbTYbQatUKtYcrn6/b2mv14ut43w3DXDTVQhegUO3oW63SzKZjKA51XLSKHgNzyluuiofqbLdbqUaondMLBaz6XjearUEjeqyrNdrFtO8xWJBRqMR04Mg34kLKodxgprJE4/HWTwYDFjcbDZZ/H6/WVyr1VgM4HoUN10H7Ur3+50UCgUsM6gh7XabxXDBwxqeURBXq1WbcTiGD11+5NcOhwNJJBIkm80KOh57vZ4tlwfPZVDPIPYfut1uzAD+Op1OJJfLWfFsNrPl0X2NRoPsdjtbPr14ns8nOZ/P7DMH1umLZLVaCXnT6ZTF8Abm68GdjGuroJR5vV6Fxi6XC96iDG0+lUpZY6fTEXQM6NFoVDCB6l7s93trTKfTLA6C969xQGP1eh3LyiyXS2ukB/U7cFjx7Rr/s59A5U4JK1/vGhuF57/Cb3YdAoxxmhjjNDHGaWKM08QYp8k/AT9vkr+E9mkAAAAASUVORK5CYII=>

[image3]: <data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAD0AAAAcCAYAAADSkrd6AAACOklEQVR4Xu2XO68pURTHT+Oz+AY6rUKjEz4BNYmQEBHvaDziHYmIgkaDQkGhEI2EREGHSERBqAhhnezlzmRm38vd91ycEeeXTNZa/7XJ/CezH/MBb8gHLbwDP6bfhR/T78I/mw6HwzAcDkVaq9US1VKH2fT5fKall4XJdCgUoqWXhsm01FksFuBwOMBsNtOtP8JkOpfL0dK3kUwm+dzn8/F5Npvlc45ut0tLCJNpIb1eDzabDS0/nXK5zOdqtVrQuaDT6WiJh9n0er2mpW9nuVxijEQiIr1Wq4lqGmbTUmIymWCsVCoYt9utsP1Xnmo6kUhALBajZYRsiafTCTqdDt3isdlsolqj0UCpVMJXXaFQiHq3uGra5XLR0n8RjUZFcTwe46pLaDQaGFUq1WXwL6rVqqgmKzRHPp8Hg8GAD3E6nQpGXVbzW9vsVdPFYpGW7kIqlYL9fo/5fD7HyK3I7XYb6vU6P5ac/oQYjUaMxDDBZDIJ28xcNf0oyKLDLUDccXY0GvF98lCOxyPm/X6f15vNJjidTr4m0G8CK0ymB4MBWK1WsFgsEAwGb16BQAAvv9+P+6jX6wWPxwNutxvsdjvo9XqsyRilUom/IWPI/2u1WpDJZCCXy3H+z2YznAaHwwHvI5PJUHd2Ybfb0dJNmEw/G/KQ0+m0SFutVr9pX0WSpmkKhQLGeDxOdb6G5E1z859ApsI9kLzpR/Ayprlt7h5I0vS1r6N7IUnT5GhJIFvcI5Ck6UfzlqY/AbNOFrKtCIWkAAAAAElFTkSuQmCC>

[image4]: <data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADoAAAAaCAYAAADmF08eAAACq0lEQVR4Xu2WzUs6QRjHjYIIhRTEDgkSRKAXMcFrnTtIip6KQNCzN0HwYP+A+EcE6sWLBBHeOndJQlDxBaFD4Qto+IrzYx6YYfdx15dVQ/r1geWZ5/vM7s53dnd2VOQ/QYWF38qf0d/Gykaj0Sg5Pj4ml5eXuLRVrGS0VquJ8qenJ1G+DPl8HktrRZHR7+9vksvlsKyIh4cHiOfn56iyXhQZ7Xa7WFJEqVSCeHZ2hirrZ2mju7u7WOK0220szeX09BRLG2Epox8fH1gSodPpsCRJvV4n8Xic9Pt9XNoYSxnNZDJY4hiNRizJMhgM4PhJFjaqUsl3nVXDaDQaMplMiN1u51ogEBD02AyLj1CG+/t7UX50dCTKhezv70P8+vrimtVqJePxmOebYiGjUk+sWq3C4kO/20ajAdrt7S3qNY1eryfBYJDnTqdTUCVErVZD1Gq1In1Vph1IIJxx2rZYLDwPhULk5uaGXF9fc00Kuntiv5F0Og1RuILv7e2RQqFA3t7eyPv7O5/cYrEIT31V5hp1uVxY4oxGIywBh4eHMFghZrMZIjXEeH19hfj8/Ayx0+lIvj1y0P5XV1dwjtfrxWURc69KZ5kitUpKrbS9Xo+3K5UKxIODA4hsi0h3VoxFjEUiEejn8/lkJ3ceM+/CfuYvLy/8+6P/QEaz2eRtCv2PsoHf3d1BpHk4HOZ9kskkbxsMBt4W4vF44LxUKoVLiplplN6MvVbMQLlchphIJGAjTjf2JycnoidjMpngu6W43W6u46dHczY59GDX3gQzjWazWd6mCxAbKIs2m43XmU73r8PhEF4zCt0XUzOfn5+ivj+NrFGlK53f78fSViBrNBaLYUnExcWFKH98fCQOh0OkbROyRuexs7MDsdVqTX1728j2j3BN/Bn9bfwD92+LCHqbBWoAAAAASUVORK5CYII=>

[image5]: <data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAFkAAAAUCAYAAADmzZEdAAADSUlEQVR4Xu2WIYwVMRCGRyKRyJVIJHIVISEhSByVyJPIdeCQSCSSYECCO4kiyIMgkEhw0I/pn52dt+WOl3t3uWT/pNl22m3/mf/vvme2YcMBcC0HNpwfHtT2qrbfrd1dTl88btU2ptiPNL4qmMyLmh38OY0vFJCR2k9C/CoWmVy+13Y7T9glFpmiUlzhqLZ3rf8+xA8JbtF5AN7/MsaUA7YuhvA6B/bFz9puhDGHSnG5mtjQ+oB53PI8xDJw1Mcc7AAOwgvzYpyYi89ZiE1MjUJGzgChWN8rmrjCifdZG4vIGcThoj2i+fbGddtV96G5I4baivkaDpdDGEOI58sWE0SOOZI5DnOAwvBuvCF3zJPhzG+tz3uPrV8wfsxKilGwnosRANEAxnlW2715+q+wnAlveLxtcc6hHjz3xtp1gAzJFfN5FWRssaguhPRp4Ze8tL5IKTFAAaKzP5kLzFN7RD68y3ocmHkyjv8UWIPjS4hFPG1Pisi6sY3hhPAxJ9aKNybirL2LzIHxmmZwGPO6lkNtX2yZMCTl5mLuGIqtX3UcIlCw+Gtf2pMEcVfmQ6LEis0iCHyq4l68R6HzJwREDhiGPQGF4wycGs2Aoz+0PuvJadLkKcCcUwzghKhgBomNYTyYrxdJwPhm6xfzAlMAQMJD65NIxtieCAVITo7THoB5Eo3IYwpGQbLjJBSAD/uzt84E5CBjYJhis5FUH4rX+3TpnxlCU4uF0KVN9pBdPtT2K4y1OXEAQa7iURuP7Qmm0AcQkThKiPPum3+L2Xc0L0r8LIAsGDyKLfkSw8GPzAs4mpuGfUubF4hxyyi8xJUI5ARYz23LgBs5I+7aLdr5FkWwaS4y+GqzalxPnhyEi2jxao6hL7KCHIcj5RASBZMtnRyBICXFOB8xJAy8dCMieFfCgsG88BJZQBRyyYATBZ1an/MwxKmAUHYKgCQbZnD1KIqcwPscxrOYExR0pSVCvLYSMK4nYQDxXpGjiEKxWeAsdAQFhqsMAYc3tutQcltz5WBuDt7DNGt164LrfWJOQCSGuOCM6H2zBAiyP+IpiR5RBDo258YaRMzFEEbzxCXi/4Az9nlvwxkhZ284ILhN8V/Ghg0bNlwG/gAlteFqJGQDjQAAAABJRU5ErkJggg==>