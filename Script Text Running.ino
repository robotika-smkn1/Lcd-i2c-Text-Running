#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.begin();
  lcd.setCursor(5,0);
  lcd.print("J");delay(1000); lcd.print("A");delay(500);
  lcd.print("N");delay(500); lcd.print("G");delay(500);
  lcd.print("A");delay(500); lcd.print("N");delay(500);
  // lcd.print("N");delay(500); lcd.print("A");delay(500);

  lcd.setCursor(1,1);
  lcd.print("L");delay(200); lcd.print("U");delay(200);
  lcd.print("P");delay(200); lcd.print("A");delay(200);
  lcd.print(" ");delay(200);   
  lcd.print("F");delay(200); lcd.print("O");delay(200);
  lcd.print("L");delay(200); lcd.print("L");delay(200);
  lcd.print("O");delay(200); lcd.print("W");delay(200);
  lcd.print(" ");delay(200); lcd.print("I");delay(200);
  lcd.print("G");delay(200); lcd.print(" ");delay(200);
  lcd.print("K");delay(200);
  lcd.print("A");delay(200); lcd.print("M");delay(200);
  lcd.print("I");delay(200); lcd.print("!");delay(3000);  
  lcd.clear();
}

void loop() {
  int u;
  lcd.setCursor(1, 0);
  lcd.print("@ROBOTIKA.SMKN1KOTABEKASI");
  for (u = 0 ; u < 16; u++) {
    lcd.scrollDisplayLeft();
    //lcd.scrollDisplayRight();
    delay(500);
  }
}
