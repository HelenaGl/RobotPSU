//Ультразвуковой дальномер

#include <Ultrasonic.h>
int trig=13;
int echo=12;
float m;

Ultrasonic ultr(trig,echo);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  m=ultr.Ranging(CM);
  Serial.println(m);
  delay(100);
}

