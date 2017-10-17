//Вывод данных из ком порта

#include <LiquidCrystal.h>

int RS = 13;
int E = 12;
int DB4 = 11;
int DB5 = 10;
int DB6 = 9;
int DB7 = 8;

int i=0;
char ch[64];
int j=0;

LiquidCrystal Lcd(RS,E,DB4,DB5,DB6,DB7);

void setup() {
  // put your setup code here, to run once:
  Lcd.begin(16,2);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  i=0;
  if (Serial.available())
  {
    while (Serial.available())
    {
      ch[i]=Serial.read();
      i++;
    }
  }
  if (i>0)
  {
    if (i<16)
    {
      Lcd.setCursor(0,0);
      Lcd.clear();
      for (j=0;j<i;j++)
      {
        Lcd.print(ch[j]);
      }
    }
    else if (i<32)
    {
      Lcd.setCursor(0,0);
      Lcd.clear();
      //int j=0;
      for (j=0;(j<i)&&(j<16);j++)
      {
        Lcd.print(ch[j]);
      }
      Lcd.setCursor(0,1);
      for (;j<i;j++)
      {
        Lcd.print(ch[j]);
      }
    }
    else //i>=33
    {
      Lcd.setCursor(0,0);
      Lcd.clear();
      j=0;
      while (j<i)
      {
        Lcd.clear();
        int k=0;
        Lcd.setCursor(0,0);
        for (;(j<i)&&(k<16);j++)
        {
          Lcd.print(ch[j]);
          k++;
        }
        Lcd.setCursor(0,1);
        for (;(j<i)&&(k<32);j++)
        {
          Lcd.print(ch[j]);
          k++;
        }
        delay(1000);
      }
    }
  }
  delay(1000);
}
