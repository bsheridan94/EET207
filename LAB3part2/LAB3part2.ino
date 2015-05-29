// Sweep
// by BARRAGAN <http://barraganstudio.com> 
// This example code is in the public domain.


#include <Servo.h> 
 
const int NUMFLOORS = 5;
int delayTimes[NUMFLOORS+1];

int currentFloor = 1;

void setup() 
{ 
  pinMode(10, OUTPUT);
  delayTimes[1] = 2000;
  delayTimes[2] = 1800;
  delayTimes[3] = 1600;
  delayTimes[4] = 1400;
  delayTimes[5] = 1200;
  
  Serial.begin(9600);
} 
 
 
void loop() 
{ 
  char myChar;
  unsigned long int highTime = 1500;
  unsigned long int lowTime = 18500;

  while(1){
    if(Serial.available()>0){
      myChar = Serial.read();
    }
    
    if(myChar>='1' && myChar <= '0' + NUMFLOORS){
      currentFloor =  myChar - '0';
    }
   highTime = delayTimes[currentFloor];
   lowTime = 20000 - highTime;
   
   digitalWrite(10, HIGH);
   delayMicroseconds(highTime);
   
   digitalWrite(10, LOW);
   delayMicroseconds(lowTime);
  
  }  
  
  
} 
