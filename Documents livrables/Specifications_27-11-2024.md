

Monitoring de salle d’IRM  
**SPÉCIFICATION DES EXIGENCES**  
***(REQUIREMENTS SPECIFICATION)***  
**GBM8970.001 v 0.3**  
**8 novembre 2024**

	

| Nom | Matricule | Signature |
| :---- | :---- | ----- |
| William Sirois | 2129771 | **![][image1]** |
| Louis-Antoine Delisle  | 2148039 | ![][image2] |
| Emmy Tran-Khanh | 2141807 | **![][image3]** |
| Héloïse Warin | 2128566 | **![][image4]** |
| Charlotte Pépin | 2147949 | **![][image5]** |

**TABLE DES MATIÈRES**

[**1 INTRODUCTION	4**](#heading=)

[**2 LES INTERVENANTS	4**](#heading=)

[**2.1 L’équipe de travail	4**](#heading=)

[**2.2 Le client	4**](#heading=)

[**2.3 Les usagers du produit	4**](#heading=)

[**3 LES CONTRAINTES DU PROJET	4**](#heading=)

[**3.1 Les contraintes du produit final	4**](#heading=)

[**3.2 L’environnement d’implémentation du dispositif	5**](#heading=)

[**3.3 Les contraintes temporelles	5**](#heading=)

[**3.4 Les contraintes budgétaires	5**](#heading=)

[**3.5 Les faits	5**](#heading=)

[**3.6 Les lois et les réglementations	6**](#heading=)

[**4 LES EXIGENCES FONCTIONNELLES	6**](#heading=)

[**4.1 Le travail	6**](#heading=)

[4.1.1 Environnement de travail	6](#environnement-de-travail)

[**4.1.2 La division des tâches	6**](#heading=)

[**4.2 Le produit	7**](#heading=)

[4.2.1 Le mandat	7](#le-mandat)

[**4.2.2 Les usages	7**](#heading=)

[**4.2.3 Les frontières	7**](#heading=)

[**4.3 L’examen du produit final	7**](#heading=)

[**5 LES EXIGENCES PHYSIQUES ET VISUELLES	8**](#heading=)

[5.1 Style	8](#style)

[**5.2 Ergonomie	8**](#heading=)

[**5.3 Matériaux	8**](#heading=)

[**6 LES EXIGENCES LIÉES À L’UTILISATION	8**](#heading=)

[**6.1 Facilité d’utilisation	8**](#heading=)

[**6.2 Manuel de l’usager	9**](#heading=)

[**6.3 Formation à donner	9**](#heading=)

[**6.4 Accessibilité	10**](#heading=)

[**7 LES EXIGENCES DE PERFORMANCE	10**](#heading=)

[**7.1 Fréquence d'échantillonnage	10**](#heading=)

[**7.2 Précision	10**](#heading=)

[**7.3 Fiabilité / disponibilité	11**](#heading=)

[**7.4 Nombre/durée d’utilisation	11**](#heading=)

[**8 LES EXIGENCES DE SÉCURITÉ	11**](#heading=)

[8.1 Clientèle cible	11](#clientèle-cible)

[**8.2 Dangers	11**](#heading=)

[**9 LES NUMÉROS D’IDENTIFICATION DES EXIGENCES	12**](#heading=)

1. # **INTRODUCTION**

Le projet de conception suivant a comme objectif de développer un appareil de mesure et de monitoring en temps réel pour la salle IRM de l’Unité de Neuroimagerie de Montréal. Ce document de spécification des exigences précise les intervenants impliqués dans le projet, présente les contraintes budgétaires, temporelles et réglementaires, puis détaille les exigences liées aux fonctions du produit, à l’esthétique, à l’utilisation, à la performance et à la sécurité.

2. # **LES INTERVENANTS**

   1. ## **L’équipe de travail**

Le projet est réalisé dans le cadre du cours GBM8970 \- Projet intégrateur de Génie biomédical, par un groupe de cinq étudiants de quatrième année de baccalauréat en Génie biomédical. Les étudiants sont Louis-Antoine Delisle, Charlotte Pépin, William Sirois, Emmy Tran-Khanh et Héloïse Warin, sous la supervision du professeur Frédéric Lesage.

2. ## **Le client**

Le projet est réalisé pour les clients André Cyr, ingénieur, et Julien Cohen-Adad, professeur, dans le cadre des activités de l’Unité de Neuroimagerie Fonctionnelle (UNF) de l’Institut Universitaire de Gériatrie de Montréal (IUGM).

3. ## **Les usagers du produit**

Le produit est destiné aux chercheurs et ingénieurs de l’UNF qui emploient le système d’Imagerie par Résonance Magnétique (IRM).

3. # **LES CONTRAINTES DU PROJET**

   1. ## **Les contraintes du produit final**

Le produit final a pour but d’améliorer la façon actuelle de surveiller les variables qui peuvent influencer la qualité des images prises par la machine IRM. La solution doit également permettre de centraliser les différentes mesures afin de les afficher sur une interface qui contient toutes les informations récoltées et qui envoie des alertes lorsqu’une mesure anormale est détectée. 

Ultimement, cela se traduit en l’automatisation de la prise de mesure des températures d’entrée et de sortie de l’eau du système de refroidissement, du débit de cette eau, ainsi que de la température et de l'humidité de la salle IRM. Les mesures collectées sont toutes envoyées dans un serveur web, à partir duquel elles sont par la suite affichées sur une interface graphique accessible par page web sur téléphones et ordinateurs. 

2. ## **L’environnement d’implémentation du dispositif**

L’installation du dispositif se fait principalement dans une salle d'équipement adjacente à la salle contenant l’appareil IRM. Cette salle d’équipement contient les tuyaux d’entrée et de sortie de l’eau qui refroidissent cet imageur, sur lesquels le dispositif s'implante en partie. La salle est assez spacieuse et contient également un modem, facilitant l’accès aux serveurs pour la transmission des données. Finalement il existe un trou de service reliant la salle d’équipement et la salle IRM. 

Une autre salle accueille également une partie de la solution. Cette dernière est la salle de l’imageur par résonance magnétique. Des mesures de sécurité supplémentaires doivent donc être mises en place pour cette section de l’installation : les éléments ferromagnétiques doivent être limités et positionnés de sorte que les dangers d'interaction avec la machine IRM soient minimisés et contrôlés. En effet, comme la température et l’humidité de la salle doivent être mesurées, il est nécessaire d'installer une partie du dispositif dans cette salle. L’émission d’onde pouvant interférer avec la qualité des images est aussi à proscrire. 

3. ## **Les contraintes temporelles**

Le projet comporte 4 livrables et 2 prototypes qui doivent être remis en suivant un certain échéancier. 

Le document de spécifications doit être remis une première fois le 9 octobre 2024\.

Le document de design doit être remis une première fois le 27 novembre 2024\.

Un prototype intermédiaire doit être présenté le 27 novembre 2024\.

Le document de procédure de tests doit être remis une première fois le 16 février 2025\.

Le document de résultats des tests doit être remis une première fois le 9 avril 2025\.

Le produit final doit être remis au client le 17 avril 2025\.

L’ensemble des documents peuvent être modifiés au cours du projet, même après la remise initiale, et seront remis en version finale en même temps que le produit final le 17 avril 2025\.

4. ## **Les contraintes budgétaires**

L’ensemble du produit final doit respecter le budget proposé dans l’énoncé du projet qui se situe entre 2000$ et 3000$. Un premier calcul estimatoire propose un budget idéal de 1726,09$ pour l’achat de l’ensemble des composantes nécessaire au développement de la solution. 

5. ## **Les faits**

Les différentes données à collecter (températures d’entrée et de sortie de l’eau, débit de l’eau, température de la salle IRM, humidité de la salle IRM) se font déjà mesurer d’une certaine façon : le produit final doit améliorer ces fonctions existantes. 

Les mesures du chiller ne sont pas automatisées, et se font manuellement, seulement en cas de problème. Il y a des thermomètres classiques installés sur les tuyaux d’entrée et de sortie de l’eau qui peuvent être lus manuellement. Ces thermomètres sont en contact avec l’eau des tuyaux, et sont scellés : ils seront toujours présents après l’installation du produit final. Le débit est mesuré grâce à un débitmètre électronique Flomec Q9 Display imbriqué dans le tuyau d’entrée de l’eau. Les mesures sur ce dernier sont aussi lues par le personnel sur place lorsqu’il est nécessaire. Ce débitmètre n’est pas enlevé lors de l’installation du produit final : un adaptateur est ajouté à ce débitmètre pour le rendre compatible à notre système.

Les mesures de la salle d’IRM prises actuellement sont automatisées et transmises à une interface web connectée à un canal Slack qui envoie des alertes lorsque les valeurs de températures sortent de l’intervalle acceptable entre 18 et 22℃. Le thermomètre et le capteur d’humidité sont situés à l’intérieur de la salle dans un petit boîtier alimenté par pile. Ce boîtier est connecté au serveur par fibre optique. Cette partie sera révisée et réitérée complètement dans le produit final. 

6. ## **Les lois et les réglementations**

La solution doit respecter quelques normes afin d’être sécuritaire à l’utilisation, notamment en ce qui concerne la sécurité électrique. En effet, comme le système sera alimenté par une prise électrique de 120 volts et de 15 ampères, il est nécessaire de s’assurer qu’il n’y ait pas de fuite de courant possible qui pourrait être un danger pour un utilisateur. Des normes sont associées à ce danger par le groupe CSA (Canadian Standards Association). Des tests seront effectués pour s’assurer que les parties accessibles soient sans danger et que l’entièreté des composantes, pour lesquelles il est pertinent, auront le marquage de l’accréditation CSA.

4. # **LES EXIGENCES FONCTIONNELLES**

   1. ## **Le travail**

      1. ### **Environnement de travail** {#environnement-de-travail}

| Réf. | Exigence | Test | Notes |
| :---- | :---- | ----- | :---- |
| 1 | Au moins une rencontre d’équipe par semaine doit être faite en présentiel puisque l’on travaille sur un prototype physique.  | M |  |
| 2 | L’équipe doit aller à l’UNF au moins une fois par session afin de se familiariser avec les lieux, procéder à l’installation, faire des tests et discuter avec les clients. | M |  |

      2. ### **La division des tâches**

| Réf. | Exigence | Test | Notes |
| :---- | :---- | ----- | :---- |
| 1 | Les tâches doivent être séparées équitablement entre tous les coéquipiers. | O |  |
| 2 | Tous les coéquipiers doivent connaître les grandes lignes de chaque partie du projet, et ce, même si celles-ci ne faisaient pas partie de leur liste de tâches assignées. Ils doivent ainsi être en mesure de répondre à toute question de leurs coéquipiers et de les aider si besoin. | O |  |

   2. ## **Le produit**

      1. ### **Le mandat** {#le-mandat}

| Réf. | Exigence | Test | Notes |
| :---- | :---- | ----- | :---- |
| 1 | Le produit doit mesurer la température de l’eau entrante du système de refroidissement de façon automatique.  | O |  |
| 2 | Le produit doit mesurer la température de l’eau sortante du système de refroidissement de façon automatique.  | O |  |
| 3 | Le produit doit mesurer le débit de l’eau du système de refroidissement de façon automatique.  | O |  |
| 4 | Le produit doit mesurer la température de la salle IRM de façon automatique.  | O |  |
| 5 | Le produit doit mesurer l’humidité de la salle IRM de façon automatique.  | O |  |
| 6 | Le produit doit collecter toutes les données dans un Arduino Opta et les envoyer dans le serveur de l’UNF. | O |  |
| 7 | Le produit doit comporter une interface web pour la visualisation des données. | O |  |
| 8 | Le produit doit pouvoir envoyer des alertes lorsque certaines données sortent des intervalles cibles (voir 4.2.2 ref-3 à 5). | O |  |

      2. ### **Les usages**

| Réf. | Exigence | Test | Notes |
| :---- | :---- | ----- | :---- |
| 1 | Le produit doit mesurer en temps réel le débit et la température de l’eau en entrée et sortie du chiller ainsi que la température et l’humidité de la salle IRM. | M |  |
| 2 | Le produit doit afficher sur une interface Web les données en temps réel. | M |  |
| 3 | Le produit doit détecter émettre une alerte lorsque la température de la salle d’IRM se trouve hors de l’intervalle cible entre 18 et 22℃.  | M |  |
| 4 | Le produit doit détecter et émettre une alerte lorsque la température de l’eau du système de refroidissement se trouve hors de l’intervalle acceptable entre 6 et 12℃. | M |  |
| 5 | Le produit doit détecter et émettre une alerte lorsque le débit de l’eau du système de refroidissement se trouve sous un seuil de 90 L/min. | M |  |

      3. ### **Les frontières**

| Réf. | Exigence | Test | Notes |
| :---- | :---- | ----- | :---- |
| 1 | Le prototype physique prenant les mesures de température et d’humidité de la salle de l’IRM doit s’inspirer de la première version datant de 2013\. | O |  |
| 2 | L’interface créée par l’équipe doit offrir les mêmes fonctionnalités que l’interface déjà existante utilisée par le personnel. | O |  |

5. # **LES EXIGENCES PHYSIQUES ET VISUELLES**

   1. ## **Style** {#style}

| Réf. | Exigence | Test | Notes |
| :---- | :---- | ----- | :---- |
| 1 | Le système central du produit (Arduino Opta et circuits électriques) doit être contenu dans un boîtier respectant des dimensions de 30x20x20cm.   | M |  |
| 2 | Le boîtier doit être fabriqué par impression 3D. | O |  |
| 3 | Le matériel utilisé pour la fabrication du boîtier doit être de couleur neutre, soit noir, gris ou blanc. | O |  |

   2. ## **Ergonomie**

| Réf. | Exigence | Test | Notes |
| :---- | :---- | ----- | :---- |
| 1 | Le boîtier doit contenir une ouverture pour chaque câble de capteurs pour permettre la connexion au système central. | O |  |
| 2 | Le boîtier et l’ensemble de composantes intérieures doivent peser en dessous 3 kg.  | M |  |
| 3 | Le boîtier doit avoir une ouverture qui peut être sécurisée lors des mouvements afin d’éviter qu’elle ne s’ouvre. | O |  |
| 4 | Le boîtier doit avoir au moins un des ses côtés qui contient des trous pour l’aération du système. Les trous doivent occuper au moins 60% de la surface de ce côté. | M | Il faudra valider que la poussière ne sera pas un problème avec un aussi gros pourcentage de la surface. |

   3. ## **Matériaux**

| Réf. | Exigence | Test | Notes |
| :---- | :---- | ----- | :---- |
| 1 | Le boîtier doit être fabriqué avec un polymère résistant au températures de 50℃.  | M |  |

6. # **LES EXIGENCES LIÉES À L’UTILISATION**

   1. ## **Facilité d’utilisation**

| Réf. | Exigence | Test | Notes |
| :---- | :---- | ----- | :---- |
| 1 | Les différentes mesures affichées sur l’interface web doivent être indiquées en dessous d’un titre qui indique de quelle métrique il s’agit.  | O |  |
| 2 | Les alertes envoyées sur Slack doivent indiquer dans la notification quelle métrique l’a déclenchée (Température IRM, Température eau chiller ou débit eau chiller),  la valeur dangereuse qui a été détectée et l’heure de détection de cette valeur.  | O |  |
| 3 | Les alertes affichées directement sur l’interface web doivent indiquer quelle métrique l’a déclenchée, la valeur dangereuse qui a été détectée et l’heure de détection de cette valeur  | O |  |
| 4 | Dans l’historique des alertes, l’état actuel de l’alerte (résolu ou non-résolue) doit être indiqué.  | O |  |
| 5 | Dans l’historique des alertes, le suivi des actions réalisées doit être indiqué pour les alertes résolues.  | O |  |

   2. ## **Manuel de l’usager**

| Réf. | Exigence | Test | Notes |
| :---- | :---- | ----- | :---- |
| 1 | Le manuel doit contenir la liste des pièces présentes dans le système pour en permettre le remplacement. | O |  |
| 2 | Le manuel doit présenter les schémas de montage identifiant les différentes composantes électroniques.  | O |  |
| 3 | Le manuel doit présenter les fonctionnalités de chacun des menus du tableau de bord. | O |  |
| 4 | Un manuel au format PDF doit être fourni au client à la remise de la solution de monitoring de l’IRM. | O |  |
| 5 | Le manuel doit contenir les instructions d’entretien requises pour maintenir le bon fonctionnement du système.  | O |  |
| 6 | Le manuel doit contenir les avertissements de sécurité nécessaires à l’utilisation sécuritaire de la solution.  | O |  |
| 7 | Le manuel doit présenter les spécifications des différentes composantes pour en permettre le remplacement si besoin.  | O |  |

3. ## **Formation à donner**

| Réf. | Exigence | Test | Notes |
| :---- | :---- | ----- | :---- |
| 1 | La formation doit présenter à quoi ressemble l’envoie d’une alarme et comment elle sera transmise. | O |  |
| 2 | La formation doit expliquer comment confirmer qu’une alarme est traitée.  | O |  |
| 3 | La formation doit expliquer comment lire l’interface.  | O |  |
| 4 | La formation doit expliquer la manière de naviguer dans les différents menus du tableau de bord. | O |  |
| 5 | La formation doit expliquer comment utiliser le système.  | O |  |

   4. ## **Accessibilité**

| Réf. | Exigence | Test | Notes |
| :---- | :---- | ----- | :---- |
| 1 | Le tableau de bord doit avoir une version adaptée à l’écran d’un ordinateur. | O |  |
| 2 | Le tableau de bord doit avoir une version adaptée à l’écran d’un téléphone cellulaire. | O |  |
| 3 | Les alertes doivent être accessibles à tous les membres d’une conversation slack. | O |  |
| 4 | L’affichage des données doit être dans la police d’écriture Roboto et la taille 11\.  | O |  |
| 5 | La page web doit être accessible tant que le serveur et le système fonctionnent  via slack afin de permettre le suivi des données.  | O |  |

7. # **LES EXIGENCES DE PERFORMANCE**

   1. ## **Fréquence d'échantillonnage**

| Réf. | Exigence | Test | Notes |
| :---- | :---- | ----- | :---- |
| 1 | Les mesures de température et d’humidité dans la salle IRM doivent être prises à intervalle d’une minute. | M |  |
| 2 | Les mesures de température d’entrée et de sortie de l’eau du système refroidissant doivent être prises à intervalles de 5 secondes. | M |  |
| 3 | La mesure du débit de l’eau du système refroidissant doit être prise à intervalles de 5 secondes. | M |  |

   2. ## **Précision**

| Réf. | Exigence | Test | Notes |
| :---- | :---- | ----- | :---- |
| 1 | La mesure de la température de la salle IRM doit être précise au demi-degré Celsius. | M |  |
| 2 | Les mesures de température d’entrée et de sortie de l’eau du système refroidissant doivent être précises au demi-degré Celsius. | M |  |

   3. ## **Fiabilité / disponibilité**

| Réf. | Exigence | Test | Notes |
| :---- | :---- | ----- | :---- |
| 1 | L’interface web  doit être disponible/accessible en tout temps, dans la mesure où l'appareil utilisé (ordinateur/téléphone) est connecté à internet. | O |  |

   4. ## **Nombre/durée d’utilisation**

| Réf. | Exigence | Test | Notes |
| :---- | :---- | ----- | :---- |
| 1 | Le dispositif de mesure de température et d’humidité de la salle IRM doit être fonctionnel pour une durée d’au moins un an avant quelconque changement dans l’alimentation. | O |  |
| 2 | L’installation n’a pas de nombre d’utilisations limité; elle fonctionne en continu. | O |  |

8. # **LES EXIGENCES DE SÉCURITÉ**

   1. ## **Clientèle cible** {#clientèle-cible}

| Réf. | Exigence | Test | Notes |
| :---- | :---- | ----- | :---- |
| 1 | L’installation, l’entretien et tous contacts directs avec le produit physique doivent être effectués par des membres du personnel concernés et formés. | O |  |
| 2 | La consultation de l’interface web et la réception des alertes doivent être limitées aux membres du personnel concernés.  | O |  |

   2. ## **Dangers**

| Réf. | Exigence | Test | Notes |
| :---- | :---- | :---- | :---- |
| 1 | Chaque personne entrant dans la salle d’équipements ou la salle d’IRM doit s’assurer de respecter les contraintes de sécurité liées au champ électromagnétique puissant de l’IRM : port de bijoux, de piercing, d’un pacemaker, etc. | O |  |

9. # **LES NUMÉROS D’IDENTIFICATION DES EXIGENCES**

Chaque exigence dans ce document est notée par un numéro d’identification distinct. Ce dernier correspond au numéro de section, suivi d’un trait d’union (-), suivi de la référence de l’exigence. Par exemple : 4.2.1-2b.

Dès qu’une première version finale de ce document est produite, aucune modification aux numéros d’identification des exigences ne devra survenir.

La suppression d’une exigence ne devra pas modifier les numéros identifications des autres exigences. 

La modification d’une exigence est une suppression de cette dernière et l’ajout d’une nouvelle exigence (avec une nouvelle référence). 

Il est possible d’ajouter un commentaire ou une note pour clarifier une modification ou une suppression.

**HISTORIQUE DES VERSIONS**

| Version | Date | Détails | Auteur(s) |
| :---- | :---- | :---- | :---- |
| 0.1 | 4 septembre 2024 | Création et mise en forme du document | William et Louis-Antoine |
| 0.2 | 2 octobre 2024 | Première version complétée | Louis-Antoine, Charlotte, William, Emmy et Héloïse |
| 0.3 | 8 novembre 2024 | Raffinement des exigences pour qu’elles soient mieux mesurables et plus objectives | Louis-Antoine |

[image1]: <data:image/png;base64,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>

[image2]: <data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADwAAAAWCAYAAACcy/8iAAABTElEQVR4Xu2TMa5GQBDHlUoHUGhI1Dr3ETWJSiJRS9xCo3AAcQeNxhUUEi6wL7svNvuNZZf3ScTzS8TMf2Z2ZlYo6J+hQOHpvAs/nXfhq1GU/Zai+F+59vSDsMtetfhXTxUNCeOsr6oqeWdZRrUr2J9QEriIDFs1nudB6avwux5ga3AIzIM+RtM01DQNlAlBEECJe4aI4xUMRxru/Z/Ql+FMDeZUlahZFEWo6zrqw3yRD7XFruuaaoZhUPsI604CeMNhtvS2bT9iVVUx0V/6vofSCt/3URiGxF7OG4aBTZGCPyWHaZqgRMDNtx4YL8sSjeNI7DzPka7rHxcC32y94zjUtm17lSOLVObSyDRNGJIiSRJkWRax53nmDsheDMZ13c1LxhRFASUp1p0ZcPM0TaEsDf6ad2N34bPEccz9infgnlNdyLvw03kXfjo/2wi2WOGc3+0AAAAASUVORK5CYII=>

[image3]: <data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAD0AAAAcCAYAAADSkrd6AAACOklEQVR4Xu2XO68pURTHT+Oz+AY6rUKjEz4BNYmQEBHvaDziHYmIgkaDQkGhEI2EREGHSERBqAhhnezlzmRm38vd91ycEeeXTNZa/7XJ/CezH/MBb8gHLbwDP6bfhR/T78I/mw6HwzAcDkVaq9US1VKH2fT5fKall4XJdCgUoqWXhsm01FksFuBwOMBsNtOtP8JkOpfL0dK3kUwm+dzn8/F5Npvlc45ut0tLCJNpIb1eDzabDS0/nXK5zOdqtVrQuaDT6WiJh9n0er2mpW9nuVxijEQiIr1Wq4lqGmbTUmIymWCsVCoYt9utsP1Xnmo6kUhALBajZYRsiafTCTqdDt3isdlsolqj0UCpVMJXXaFQiHq3uGra5XLR0n8RjUZFcTwe46pLaDQaGFUq1WXwL6rVqqgmKzRHPp8Hg8GAD3E6nQpGXVbzW9vsVdPFYpGW7kIqlYL9fo/5fD7HyK3I7XYb6vU6P5ac/oQYjUaMxDDBZDIJ28xcNf0oyKLDLUDccXY0GvF98lCOxyPm/X6f15vNJjidTr4m0G8CK0ymB4MBWK1WsFgsEAwGb16BQAAvv9+P+6jX6wWPxwNutxvsdjvo9XqsyRilUom/IWPI/2u1WpDJZCCXy3H+z2YznAaHwwHvI5PJUHd2Ybfb0dJNmEw/G/KQ0+m0SFutVr9pX0WSpmkKhQLGeDxOdb6G5E1z859ApsI9kLzpR/Ayprlt7h5I0vS1r6N7IUnT5GhJIFvcI5Ck6UfzlqY/AbNOFrKtCIWkAAAAAElFTkSuQmCC>

[image4]: <data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAACwAAAAUCAYAAAD2rd/BAAABvUlEQVR4Xt2Vv4rCQBDGIwpiY2ws/AOClhbaqpWCYGdjYekD+BR2EkFBQZtgq62grWhjJfgAWglWYisiZO52ICuZrLnoeUHv13wz3xDyZTebSPBhSNR4d/5/4HA4jFoqlcjEGR4KfDweqWULt9sNiqJQ+ylsB+50OtSyhdfrhfF4TO2nsRWYrdAzuFwuOJ/P1P4VtgKLkCTrSyuVCrVegvVdv5lOp9SCRCJBLQOtVgv11avLsAy82+2oBZlMhtfz+fw2IMRiMWq9BMvAm83G0GuahtpoNKDdbhtmOtVqFXfF7/dj7/P5UFOpFHS7XaxlWUZlB/JR7gaORqO8zmazvK7X67wWEQgE4Hq9Yr3dblH1V6PX60EkEoHBYAChUIhfI2K9XgvPidmxYDgcwmw2ozYnnU7DcrnkvcfjQe33+9yj5PN5DEZ38x53AzebTdTFYgH7/R5r/YlzuRzWes9elUKhAIfDAfvRaIQqgn09gsEgtW0jDCzaislkAvF43DDTf9Nsq1erFVwuF0gmk3z+F5iTCVBVFbVWq5HJ7SA6hSmwfmB+olwuU8sRTIGtOJ1OUCwWqe0oDwV+Bz4u8BcLByaLctNh3QAAAABJRU5ErkJggg==>

[image5]: <data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAFkAAAAUCAYAAADmzZEdAAADSUlEQVR4Xu2WIYwVMRCGRyKRyJVIJHIVISEhSByVyJPIdeCQSCSSYECCO4kiyIMgkEhw0I/pn52dt+WOl3t3uWT/pNl22m3/mf/vvme2YcMBcC0HNpwfHtT2qrbfrd1dTl88btU2ptiPNL4qmMyLmh38OY0vFJCR2k9C/CoWmVy+13Y7T9glFpmiUlzhqLZ3rf8+xA8JbtF5AN7/MsaUA7YuhvA6B/bFz9puhDGHSnG5mtjQ+oB53PI8xDJw1Mcc7AAOwgvzYpyYi89ZiE1MjUJGzgChWN8rmrjCifdZG4vIGcThoj2i+fbGddtV96G5I4baivkaDpdDGEOI58sWE0SOOZI5DnOAwvBuvCF3zJPhzG+tz3uPrV8wfsxKilGwnosRANEAxnlW2715+q+wnAlveLxtcc6hHjz3xtp1gAzJFfN5FWRssaguhPRp4Ze8tL5IKTFAAaKzP5kLzFN7RD68y3ocmHkyjv8UWIPjS4hFPG1Pisi6sY3hhPAxJ9aKNybirL2LzIHxmmZwGPO6lkNtX2yZMCTl5mLuGIqtX3UcIlCw+Gtf2pMEcVfmQ6LEis0iCHyq4l68R6HzJwREDhiGPQGF4wycGs2Aoz+0PuvJadLkKcCcUwzghKhgBomNYTyYrxdJwPhm6xfzAlMAQMJD65NIxtieCAVITo7THoB5Eo3IYwpGQbLjJBSAD/uzt84E5CBjYJhis5FUH4rX+3TpnxlCU4uF0KVN9pBdPtT2K4y1OXEAQa7iURuP7Qmm0AcQkThKiPPum3+L2Xc0L0r8LIAsGDyKLfkSw8GPzAs4mpuGfUubF4hxyyi8xJUI5ARYz23LgBs5I+7aLdr5FkWwaS4y+GqzalxPnhyEi2jxao6hL7KCHIcj5RASBZMtnRyBICXFOB8xJAy8dCMieFfCgsG88BJZQBRyyYATBZ1an/MwxKmAUHYKgCQbZnD1KIqcwPscxrOYExR0pSVCvLYSMK4nYQDxXpGjiEKxWeAsdAQFhqsMAYc3tutQcltz5WBuDt7DNGt164LrfWJOQCSGuOCM6H2zBAiyP+IpiR5RBDo258YaRMzFEEbzxCXi/4Az9nlvwxkhZ284ILhN8V/Ghg0bNlwG/gAlteFqJGQDjQAAAABJRU5ErkJggg==>