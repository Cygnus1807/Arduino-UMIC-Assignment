// C++ code
//
/*
  Sweep

  by BARRAGAN <http://barraganstudio.com>
  This example code is in the public domain.

  modified 8 Nov 2013  by Scott Fitzgerald
  http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h> // Includes servo library

int pos = 0; // Initializing an integer called 'pos' to 0

Servo servo_9; // creates an object known as servo_9

void setup()
{
  servo_9.attach(9, 500, 2500); //  attaches the servo on pin 9 to the servo object

  // a pulse width of 500ms on the pin 9 corresponds to 0 degree rotation of the servo
  // a pulse width of 2500ms on the pin 9 corresponds to 180 degree rotation of the servo
}

void loop()
{
  servo_9.write(60); // Tell the servo to go to 60 degrees
  delay(10); // Delay a little bit to improve simulation performance
}
