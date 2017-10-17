#include <LiquidCrystal.h>

int RS = 13;
int E = 12;
int DB4 = 11;
int DB5 = 10;
int DB6 = 9;
int DB7 = 8;

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
  Lcd.print("I love arduino");
}


//Дисплей 16*2

//1) VSS - GND
//2) VDD - 5V
//3 V0 - управление контрастом
//4 RS - pin (13)
//5 R/W - GND
//6 E - pin (12)
//7
//8
//9
//10
//11 * DB4 11
//12 * DB5 10 
//13 * DB6 9 
//14 * DB7 8
//15 - 5V
//16 - GND
