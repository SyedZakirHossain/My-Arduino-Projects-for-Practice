/* Hello World
 
 * How to Program LCD Display"

 */

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16,2);

void setup() 
{
  
}

void loop() 
{ 
 lcd.begin();
  lcd.backlight();
  lcd.print(" FARIHA FALAQ");
  lcd.setCursor(0,1);
  lcd.print(" CONGRATULATIONS");
  delay(10000);
 // lcd.noBacklight();
  lcd.clear();
  lcd.begin();
  lcd.backlight();
  lcd.print("Blessings to you");
  lcd.setCursor(0,1);
  lcd.print("for attending");
  delay(5000);
   //lcd.noBacklight();
  lcd.clear();
  lcd.begin();
  lcd.backlight();
  lcd.print("Teer little Chef");
  lcd.setCursor(0,1);
  lcd.print("Top 12 is Great");
    delay(5000);
 lcd.clear();
  lcd.begin();
  lcd.backlight();
  lcd.print("Goodluck to You");
  lcd.setCursor(0,1);
  lcd.print("Always");
    delay(5000);
    }
