int led=12;
int but=13;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(but,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(but))
  {
    digitalWrite(led,!digitalRead(led));
  }
  delay(150);
}
