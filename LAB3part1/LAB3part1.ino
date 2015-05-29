// Sweep
// by BARRAGAN <http://barraganstudio.com> 
// This example code is in the public domain.


#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
 
int pos = 0;    // variable to store the servo position 
 
const int MINPULSE = 600;
const int MAXPULSE = 2400;
 
void setup() 
{ 
  myservo.attach(10, MINPULSE, MAXPULSE);  // attaches the servo on pin 9 to the servo object 
} 
 
 
void loop() 
{ 
  myservo.write(0);
  delay(2000);
  
  myservo.write(180);
  delay(2000);
} 
