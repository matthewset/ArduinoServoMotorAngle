#include <Servo.h>
int servoPin=9;
Servo myServo;
void setup() {
Serial.begin(9600);
myServo.attach(servoPin);
}
void loop() {
  Serial.println("Angle:");
  while(Serial.available()==0){
  }
  int servoPos=Serial.parseInt();
myServo.write(servoPos);
}
