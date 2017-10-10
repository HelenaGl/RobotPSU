int led=12;
int led2=11;
int led3=10;
int but=2;
bool stat=false;
int tm=0;
unsigned long long time_=0;
unsigned long long time2_=0;
unsigned long long time3_=0;
bool stat2=false;
bool stat3=false;

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
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(but,INPUT);
  attachInterrupt(0,F2,RISING);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (time_+tm/2<=millis())
  {
    digitalWrite(led,stat);
    stat=!stat;
    time_=millis();
  }
  if (time2_+1000<=millis())
  {
    digitalWrite(led2,stat);
    stat2=!stat2;
    time2_=millis();
  }
  if (time3_+500<=millis())
  {
    digitalWrite(led3,stat);
    stat3=!stat3;
    time3_=millis();
  }
}
