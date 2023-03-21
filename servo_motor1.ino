

#include <Servo.h>

Servo myservo;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);
}

void loop() {
  int sensorValue = analogRead(A0);
  float temperature = sensorValue * 0.48828125;
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  if (temperature > 30) {
    myservo.write(90);
  } else {
    myservo.write(0);
  }
  delay(1000);
}




