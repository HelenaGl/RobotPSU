int p;
int v;
int led=13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  p=analogRead(0);
  v=p/4;
  Serial.println(v);
  analogWrite(led,v);
  delay(500);
}
