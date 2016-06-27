/*
 * Tutorial 1a: Motor Driver
 * 
 * Drives two motors forward.
 *
 * The circuit:
 *  - 6 pins connected to the L298 Motor Driver
 *
 * created 27 Sep 2013
 * by Blaise Jarrett
 *
 * This example code is in the public domain.
 *
 */

// include our motor code
#include "motor.h"

// The Right Front Motors Enable Pin
// Labelled on the motor driver as ENA
// Be carful of PWM Timers
const int motorRENPin = 4;
// The Right Motors IN1 Pin
// Labelled on the motor driver as IN1
const int motorRIN2Pin = 5;
// The Right Motors IN2 Pin
// Labelled on the motor driver as IN2
const int motorRIN1Pin = 6;

// The Left Motors Enable Pin
// Labelled on the motor driver as ENB
// Be carful of PWM Timers
const int motorLENPin = 8;
// The Left Motors IN1 Pin
// Labelled on the motor driver as IN3
const int motorLIN2Pin = 9;
// The Left Motors IN2 Pin
// Labelled on the motor driver as IN4
const int motorLIN1Pin = 10;


// Create two Motor objects (instances of our Motor class)
// to drive each motor.
Motor rightMotors(motorRIN1Pin, motorRIN2Pin, motorRENPin);
Motor leftMotors(motorLIN1Pin, motorLIN2Pin, motorLENPin);

void setup()
{
    // Let's just make them go forward to test the
    // motors and the Motor class.
    rightMotors.forward(255);
    leftMotors.forward(255);
}

void loop()  // THe test goes in a roughly 6' circle on rug with 2 LiPo batteries
{ 
  rightMotors.forward(200);
  leftMotors.forward(200);
  delay(1400);
  rightMotors.forward(100);
  leftMotors.forward(100);
  delay(1000);
  rightMotors.forward(200);
  leftMotors.backward(10);
  delay(1300);
}
