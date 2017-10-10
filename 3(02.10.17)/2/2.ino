int led=12;
int but=13;
bool stat=false;

void F1()
{
  delay(50);
  if (digitalRead(but))
  {
    stat=!stat;
  }
}

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(but,INPUT);
  attachInterrupt(0,F1,RISING);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,stat);
}
