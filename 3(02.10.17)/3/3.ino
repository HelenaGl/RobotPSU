int led=12;
int but=2;
bool stat=false;
int tm=0;

/*
void F1()
{
  delay(50);
  if (digitalRead(but))
  {
    stat=!stat;
  }
}
*/

void F2()
{
  tm=0;
  delay(50);
  if (digitalRead(but))
  {
    while (digitalRead(but))
    {
      tm++;
      delay(1);
    }
  }
}

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(but,INPUT);
  attachInterrupt(0,F2,RISING);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (tm>0)
  {
    digitalWrite(led,HIGH);
    delay(tm/2);
    digitalWrite(led,LOW);
    delay(tm/2);
  }
}
