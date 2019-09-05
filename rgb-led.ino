
/*
  Code by: www.munphurid.com
  M. Hasir

  This is a code that shows mixing of different colours using RGB led
  Hardware:
  - Arduino
  - RGB Led


  Connections:

  Connect redpin of RGB to pin 3 of Arduino
  Connect greenpin of RGB to pin 5 of Arduino
  Connect bluepin of RGB to pin 6 of Arduino
*/

int redPin = 3;                       //pin1 of RGB is connected to pin 3 of Arduino
int greenPin = 5;                     //pin2 of RGB is connected to pin 5 of Arduino
int bluePin = 6;                      //pin3 of RGB is connected to pin 6 of Arduino

//uncomment this line if using a Common Anode LED
//#define COMMON_ANODE

void setup()
{
  pinMode(redPin, OUTPUT);            //Donot edit this line
  pinMode(greenPin, OUTPUT);          //Donot edit this line
  pinMode(bluePin, OUTPUT);           //Donot edit this line
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
  analogWrite(redPin, red);                       //Donot edit this line
  analogWrite(greenPin, green);                   //Donot edit this line
  analogWrite(bluePin, blue);                     //Donot edit this line
}
