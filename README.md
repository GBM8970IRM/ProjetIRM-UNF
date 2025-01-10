# GBM8970 Projet de monitoring de la salle IRM de l'INF

## Context
The following design project aims to develop a real-time measurement and monitoring device for the MRI room of the Unité de Neuroimagerie de Montréal.
This project is carried out as part of the course GBM8970 - Projet intégrateur de Génie biomédical, by a group of five fourth-year students in Biomedical Engineering. The students are Louis-Antoine Delisle, Charlotte Pépin, William Sirois, Emmy Tran-Khanh, and Héloïse Warin, under the supervision of Professor Frédéric Lesage. The final product should centralize various measurements and display them on an interface that contains all the collected information, sending alerts when an abnormal measurement is detected.
Ultimately, this leads to the automation of measuring the inlet and outlet water temperatures of the cooling system of the MRI, its water flow rate, as well as the temperature and humidity of the MRI room. The collected measurements are all sent to a web server, from which they are subsequently displayed on a graphical interface accessible via a web page on computers. 

## Neccessary equipment and parts
The main parts that had to be aquired for this project are the following :
- Arduino Opta for data acquisition and processing
- Arduino Opta expansion (A0602) for reading current from flow meter
- Casing with DIN rails
- Fluid thermometer (x2)
- Humidity and temperature sensor
- Shield for the pre-existing flow meter

## PCB design
The PCB was designed using KiCad. The following images show the circuit as well as the design of the PCB
![PCB](https://github.com/user-attachments/assets/13883ed5-64b1-4ea5-8f7c-9cd0c883f697)

## How to use

## How to follow our work
Since this is a project with several components, an issue is generated for each aspect of the problem to be solved. This ensures that no information is lost by adding comments to a single issue. We invite you to consult these issues to follow the progress of the development of our solution. The list below allows you to easily access the issues corresponding to the key challenges of the project : 

[Temperature and humidity of the MRI room](/../../issues/1)

[Water temperature of the cooling system](/../../issues/2)

[Flow rate of the cooling system](/../../issues/3)

[Data storage](/../../issues/4)

[Monitoring interface](/../../issues/5)

[Alerts](/../../issues/6)
