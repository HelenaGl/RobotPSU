//Подключить 5 светодиодов
//Потенциометр
//Кнопка

//С потенциометра в ком порт

//Кнопка
//Прерывания
//С антидребезгом

//Инвертируется шкала

int but=2;
int led1=13;
int led2=12;
int led3=11;
int led4=10;
int led5=9;

int p;

bool mode=true;

void F1()
{
  delay(50);
  if (digitalRead(but))
  {
    mode=!mode;
  }
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(but,INPUT);
  attachInterrupt(0,F1,RISING);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  p=(float)analogRead(0);
  Serial.println(p);

  if (mode)
  {
  if (p==0)
  {
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
  }
  else
  if (p<204)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
  }
  else if (p<409)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
  }
  else if (p<614)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
  }
  else if (p<819)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,LOW);
  }
  else 
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
  }
  }
  else
  {
    if (p==0)
  {
    digitalWrite(led5,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led5,LOW);
  }
  else
  if (p<204)
  {
    digitalWrite(led5,HIGH);
    digitalWrite(led4,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led1,LOW);
  }
  else if (p<409)
  {
    digitalWrite(led5,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led3,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led1,LOW);
  }
  else if (p<614)
  {
    digitalWrite(led5,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led1,LOW);
  }
  else if (p<819)
  {
    digitalWrite(led5,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led1,LOW);
  }
  else 
  {
    digitalWrite(led5,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led1,HIGH);
  }
  }
  //delay(50);
}
