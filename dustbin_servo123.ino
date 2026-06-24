#include<Servo.h>
#define IR 6
#define servopin 5
Servo S;
void setup() {
  Serial.begin(115200);
  pinMode(IR,INPUT);
  S.attach(servopin);
}
void loop() {
  int l=digitalRead(IR);
  if(l==0)
  {
    S.write(90);
  }
  else
  {
    S.write(0);
  }
delay(1000);
}
