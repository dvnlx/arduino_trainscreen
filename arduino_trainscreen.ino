#include <LiquidCrystal.h>

#define linenum "{line}" // change the number to your likings
#define dest "{dest}" // change the destination to your likings
#define ns "{nextstop}" // change the next station to your likings

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);

}

void loop() {
  lcd.print(linenum);
  lcd.setCursor(0, 1);
  lcd.print(dest);
  delay(5000);
  lcd.setCursor(0, 0);
  lcd.clear();
  lcd.print("next station");
  lcd.setCursor(0, 1);
  lcd.print(ns);
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
}

