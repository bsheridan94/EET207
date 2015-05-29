
int trigger = 2;
int echo = 3;

double getDistance(unsigned char triggerPin, unsigned char echoPin);

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(A0, OUTPUT);   
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  
  digitalWrite(A0, LOW); 
  digitalWrite(A1, LOW); 
  digitalWrite(A2, LOW); 
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  double targetDistance;
  targetDistance = getDistance(trigger,echo);
  Serial.println(targetDistance/25.4);
  targetDistance = targetDistance/25.4;
  
  
  if(targetDistance>12){
      digitalWrite(A1, LOW);
      digitalWrite(A0, HIGH);
      digitalWrite(A2, HIGH); 
  }
  else if(targetDistance < 12 && targetDistance > 8){
      digitalWrite(A0, LOW);
      digitalWrite(A1, LOW);  
      digitalWrite(A2, HIGH);
  }
  else{
      digitalWrite(A0, LOW);
      digitalWrite(A1, HIGH);
      digitalWrite(A2, HIGH);  
  }
  
  delay(500);
 
}

double getDistance(unsigned char triggerPin, unsigned char echoPin){
   unsigned long int startTime, endTime;
   double mm=-1;
  digitalWrite(triggerPin,HIGH);
  delayMicroseconds(20);
  digitalWrite(triggerPin,LOW);
  startTime = micros();
  
  while(digitalRead(echoPin)==LOW && micros()-startTime<100000){
    delayMicroseconds(20);    
  }
  
  while(digitalRead(echoPin)==HIGH && micros()-startTime<100000){
  delayMicroseconds(1); 
  }
  endTime = micros();
  
  if(endTime>startTime){
  mm = (endTime - startTime)/6.496;
  
  }
  
  delay(100);
  return(mm);

}
