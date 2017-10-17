#include <LiquidCrystal.h>

int RS = 13;
int E = 12;
int DB4 = 11;
int DB5 = 10;
int DB6 = 9;
int DB7 = 8;

int mil;

LiquidCrystal Lcd(RS,E,DB4,DB5,DB6,DB7);

void setup() {
  // put your setup code here, to run once:
  Lcd.begin(16,2);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Lcd.setCursor(0,0);
  Lcd.print("Hello world");
  Lcd.setCursor(0,1);
  mil=(millis()/1000)%20;
  Lcd.print(mil);
  delay(100);
  Lcd.clear();
}
