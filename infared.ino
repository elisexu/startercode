/*
 * Displays 1 if the robot doesn't detect an object,
 * or 0 if it does. Moves the robot accordingly.
 */
#include <Servo.h>

Servo servoRight;
Servo servoLeft;

void setup()                                 // Set-up conditions, runs once
{                          
  pinMode(10, INPUT);  pinMode(9, OUTPUT);   // Set up infared detectors
  servoLeft.attach(13);
  servoRight.attach(12);
}  
 
void loop()                                  // Main loops, runs forever
{
  int irLeft = irDetect(9, 10, 38000);       // Check for object: 1 if no detect, 0 if detect
  //FILL THIS IN WITH LOGIC TO MOVE YOUR ROBOT WHEN IT DETECTS AN OBJECT VS. WHEN IT DOESN'T
}

int irDetect(int irLedPin, int irReceiverPin, long frequency) // Object detection function
{
  int ir = digitalRead(irReceiverPin);
  delay(1);                                  // Wait before checking again
  return ir;                                 // Return 1 for no detect, 0 detect
}  

void stopnow()                               // Stop function
{
//FILL THIS IN
}

void forward(int time)                       // Forward function
{
//FILL THIS IN
}

void turnLeft(int time)                      // Left turn function
{
//FILL THIS IN
}

void turnRight(int time)                     // Right turn function
{
//FILL THIS IN
}

void backward(int time)                      // Backward function
{
//FILL THIS IN
}
