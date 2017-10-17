int p;
int v;
int led=13;
char ch='0';
int mode=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available())
  {
    ch=Serial.read();
    if (ch=='1') mode=1;
    if (ch=='0') mode=0;
  }

  if (mode==0)
  {
    p=analogRead(0);
    v=p/4;
    //Serial.println(v);
    analogWrite(led,v);
    delay(50);
  }
  if (mode==1)
  {
    p=analogRead(0);
      v=p/4;
      v=255-v;
      //Serial.println(v);
      analogWrite(led,v);
      delay(50);
  }

}
