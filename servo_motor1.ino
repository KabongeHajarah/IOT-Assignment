Servo myservo;
int tempPin = A0;
int tempValue;
int servoPin = 9;

void setup() {
  myservo.attach(servoPin);
  Serial.begin(9600);
}

void loop() {
  tempValue = analogRead(tempPin);
  float voltage = tempValue * 5.0 / 1024.0;
  float temperatureC = (voltage - 0.5) * 100;
  Serial.println(temperatureC);
  
  if (temperatureC > 30) {
    myservo.write(90);
  }
  else {
    myservo.write(0);
  }
  
  delay(1000);
}


