#include <Arduino.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(A0, A1, A2, A3, A4, A5);


void setup() {
  lcd.begin(16, 2);
  lcd.print("Silvina,");
  lcd.setCursor(0, 1);
  lcd.print("I love you!");
}

void loop() {
   
}