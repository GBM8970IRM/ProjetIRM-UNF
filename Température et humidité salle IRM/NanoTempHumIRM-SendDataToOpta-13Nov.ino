#include <Wire.h>
#include <Adafruit_AHTX0.h>

Adafruit_AHTX0 aht;
int EnvoiHum = A2;
int EnvoiTemp = A3;

void setup() {
  Wire.begin();
  Serial.begin(19200);
  pinMode(EnvoiHum, OUTPUT);
  pinMode(EnvoiTemp, OUTPUT);
}
void loop() {
  sensors_event_t humidity, temp;
  aht.getEvent(&humidity, &temp);// populate temp and humidity objects with fresh data
  //analogWrite(EnvoiHum, map(humd,0,100,0,255));
  Serial.println(map(humidity.humidity,0,100,0,255));
  //analogWrite(EnvoiTemp,map(temp,0,40,0,255));
  Serial.println(map(temp,0,100,0,255));
  Serial.print("Time:");
  Serial.print(millis());
  Serial.print(" Temperature:");
  Serial.print(temp, 1);
  Serial.print("C");
  Serial.print(" Humidity:");
  Serial.print(humd, 1);
  Serial.print("%");
  Serial.println();
  delay(8000);
}
