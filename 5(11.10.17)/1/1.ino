int p;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  p=analogRead(0);
  Serial.println(p);
  delay(50);
}
