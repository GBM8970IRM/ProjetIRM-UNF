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

  //digitalWrite(D1, LOW);
  //digitalWrite(LED_D1, LOW);

  //delay(1000);
}
