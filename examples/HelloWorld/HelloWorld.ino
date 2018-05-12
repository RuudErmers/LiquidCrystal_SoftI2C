//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include "LC_SoftI2C.h"

LC_SoftI2C lcd(0x27,2,3,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display, sda =pin 2, scl=pin 3

void setup()
{
  lcd.init();                      // initialize the lcd 
//  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(3,0);
  lcd.print("Hello, world!");
  lcd.setCursor(2,1);
  lcd.print("Ruud Arduino!");
}


void loop()
{
}
