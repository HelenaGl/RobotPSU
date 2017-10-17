int p;
float v;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  p=analogRead(0);
  v=5*p/1023.0;
  Serial.println(v);
  delay(50);
}

