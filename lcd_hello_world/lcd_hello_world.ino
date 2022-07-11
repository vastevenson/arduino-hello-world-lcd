/*
 Goal: demo a Hello World example of the Liquid Crystal library for Arduino
 From: https://www.arduino.cc/en/Tutorial/LibraryExamples/HelloWorld 
 
 Circuit wiring: 
 VSS, RW, K, far left pin of 10 kohm (4x) potentiometer -> GND 
 VDD (aka: VCC) and far right pin of 10 kohm potentiometer -> 5V 
 V0 -> middle pin of 10 kohm potentiometer
 RS -> pin 12
 E -> pin 11 
 D4 -> pin 5
 D5 -> pin 4
 D6 -> pin 3
 D7 -> pin 2
 Note: D0, D1, D2, D3 are all unused as we are operating in 4-bit mode, not 8-bit mode.

 Background: 
 RS (register select) pin: define where on LCD's memory to read/write to
 RW (Read/Write) pin: tells LCD what you are going to do (read or write)
 E (En/Enable) pin: enables writing to register
 D0-D7 (data pins) - represent the bits that you write, HIGH volt == 1, LOW  == 0
 Other pins are for powering the backlight of the LCD display + controlling brightness
 
 Each of the 'cells' on the LCD is like a mini screen - LiquidCrystal library holds the image that 
 will be displayed to show a given character, like the letter `e` or the symbol `!`
 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe
 modified 7 Nov 2016
 by Arturo Guadalupi

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystalHelloWorld

*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Hello world!");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis() / 1000);
}
