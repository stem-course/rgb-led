/*
  Code by: 
  M. Hashir & Wardah Arshad

This is a code that shows mixing of Red, Green and Blue to make different colours using RGB led

Hardware:
  - Arduino
  - RGB Led
  - Resistor

Hold the led in your hand such that the longest pin of RGB LED is second pin from left.
Left most pin is pin 1 and right most pin is pin 4

  Connections:
  Connect pin 1 (red) of RGB LED to pin 3 of Arduino
  Connect pin 2 (VCC) of RGB LED to resistor and connect other end of resistor to pin 5V of Arduino
  Connect pin 3 (green) of RGB LED to pin 5 of Arduino
  Connect pin 4 (blue) of RGB LED to pin 6 of Arduino
*/

int redpin = 3;                       //pin 1 of RGB is connected to pin 3 of Arduino
int greenpin = 5;                     //pin 3 of RGB is connected to pin 5 of Arduino
int bluepin = 6;                      //pin 4 of RGB is connected to pin 6 of Arduino

//comment this line if not using a Common Anode LED
#define COMMON_ANODE

void setup()
{
  pinMode(redpin, OUTPUT);            //Donot edit this line
  pinMode(greenpin, OUTPUT);          //Donot edit this line
  pinMode(bluepin, OUTPUT);           //Donot edit this line
}

void loop()
{
  setColor(255, 0, 0);                // red
  delay(1000);
  setColor(0, 255, 0);                // green
  delay(1000);
  setColor(0, 0, 255);                // blue
  delay(1000);
  setColor(255, 255, 0);              // yellow
  delay(1000);
  setColor(80, 0, 80);                // purple
  delay(1000);
  setColor(0, 255, 255);              // aqua
  delay(1000);
}

void setColor(int red, int green, int blue)       //Donot edit this line
{
#ifdef COMMON_ANODE                               //Donot edit this line
  red = 255 - red;                                //Donot edit this line
  green = 255 - green;                            //Donot edit this line
  blue = 255 - blue;                              //Donot edit this line
#endif                                            //Donot edit this line
  analogWrite(redpin, red);                       //Donot edit this line
  analogWrite(greenpin, green);                   //Donot edit this line
  analogWrite(bluepin, blue);                     //Donot edit this line
}
