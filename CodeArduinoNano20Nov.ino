#include <Adafruit_AHTX0.h>
Adafruit_AHTX0 aht;
float tempIRM;
float humIRM;
int envoiTemp = 5;
int envoiHum = 6;
void setup() {
  // Initialisation du capteur AM2315C
  Wire.begin();
  Serial.begin(9600);
  pinMode(envoiHum, OUTPUT);
  pinMode(envoiTemp, OUTPUT);
  if (! aht.begin()) {
    Serial.println("Could not find AHT? Check wiring");
    while (1) delay(10);
  }
  Serial.println("AHT10 or AHT20 found");

}

void loop() {
  // Prendre les valeurs de température et d'humidité avec le capteur AM2315C
  sensors_event_t hum, temp;
  aht.getEvent(&hum, &temp);// populate temp and humidity objects with fresh data
  tempIRM = temp.temperature;
  delay(500);
  humIRM = hum.relative_humidity;
  delay(500);
  Serial.print("Temperature de l'IRM: "); Serial.print(tempIRM); Serial.println(" degrees C");
  Serial.print("Humidite de l'IRM: "); Serial.print(humIRM); Serial.println("% rH");
  analogWrite(envoiTemp, mapfloat(tempIRM,15,25,0,255));
  delay(500);
  analogWrite(envoiHum, mapfloat(humIRM,0,100,0,255));
  delay(500);
  Serial.println(mapfloat(tempIRM,15,25,0,255));
  Serial.println(mapfloat(humIRM,0,100,0,255));

  delay(2000);
}

float mapfloat(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (float)(x - in_min) * (out_max - out_min) / (float)(in_max - in_min) + out_min;
}