// Паламарчук Ярослав 18.12.2018

// Вихід для реле
int Relay = 8;
//датчик вологості землі
int rainPin = A0;
// вологість для поливу
int thresholdValue = 800;

int water;

//час поливу
int timeTo = 5000;

void setup() {                
  pinMode(Relay, OUTPUT);  
  pinMode(rainPin, INPUT);
  pinMode(A4, INPUT);
  Serial.begin(9600);  
}

void loop() {

  int water = analogRead(A4);
//
//  Serial.println(water);  
  
  int sensorValue = analogRead(rainPin);
//  Serial.println(sensorValue);
  if(sensorValue < thresholdValue){
//    Serial.println(" - не потрібно поливати");  
  }else if(water > 685) {
      digitalWrite(Relay, HIGH);
      delay(timeTo);
      digitalWrite(Relay, LOW);
  }
  delay(500);
              
}
