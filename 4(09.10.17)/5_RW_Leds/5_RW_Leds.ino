int led=13;
int led2=12;
int led3=11;
int led4=10;
char ch[]="1 0";
int i=0;

//ch[0] - номер диода (1-4)
//ch[2] - "1" - включить, "0" - выключить

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available())
  {
    delay(50);
    i=0;
    while (Serial.available()>0)
    {
      ch[i]=Serial.read();
      i++;
    }
    switch (ch[0])
    {
      case '1':
      {
        if (ch[2]=='1')
          digitalWrite(led,HIGH);
        if (ch[2]=='0')
          digitalWrite(led,LOW);
        break;
      }
      case '2':
      {
        if (ch[2]=='1')
          digitalWrite(led2,HIGH);
        if (ch[2]=='0')
          digitalWrite(led2,LOW);
        break;
      }
      case '3':
      {
        if (ch[2]=='1')
          digitalWrite(led3,HIGH);
        if (ch[2]=='0')
          digitalWrite(led3,LOW);
        break;
      }
      case '4':
      {
        if (ch[2]=='1')
          digitalWrite(led4,HIGH);
        if (ch[2]=='0')
          digitalWrite(led4,LOW);
        break;
      }
      default:
        break;
    }
  }
}

