#include "SoftwareSerial.h"
#include <Wire.h>
// RX: Arduino pin 2, XBee pin DOUT.  TX:  Arduino pin 3, XBee pin DIN
SoftwareSerial XBee(2, 3);



void setup()
{
  // Baud rate MUST match XBee settings (as set in XCTU)
  pinMode(BUTTON, INPUT);
  XBee.begin(9600);
}

void loop()
{
  if (digitalRead(BUTTON) == HIGH)
  {
    XBee.write('H');
    delay(50);
  }
}
