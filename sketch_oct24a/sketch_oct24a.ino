// Паламарчук Ярослав 16.12.2018

// Вихід для реле
int Relay = 13;
//датчик вологості землі
int rainPin = A0;
// вологість для поливу
int thresholdValue = 800;

//час поливу
int timeTo = 5000;

void setup() {                
  pinMode(Relay, OUTPUT);  
  pinMode(rainPin, INPUT);
  Serial.begin(9600);  
}

void loop() {
  
  int sensorValue = analogRead(rainPin);
  Serial.println(sensorValue);
  if(sensorValue < thresholdValue){
    Serial.println(" - не потрібно поливати");  
  }else {
      digitalWrite(Relay, HIGH);   // реле включено
      delay(timeTo);
      digitalWrite(Relay, LOW);   // реле виключено
      delay(timeTo);
  
  }
  delay(500);
              
}
