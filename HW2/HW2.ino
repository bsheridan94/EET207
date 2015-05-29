/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;
int tOn = 29;


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(A0, OUTPUT);   
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  Serial.begin(9600);
  digitalWrite(A0, LOW); 
  digitalWrite(A1, LOW); 
  digitalWrite(A2, LOW); 
}
 

// the loop routine runs over and over again forever:
void loop() {
  //digitalWrite(A0, HIGH);
  //digitalWrite(A1, HIGH);
  digitalWrite(A2, HIGH);
  delay(tOn);

  digitalWrite(A2, LOW);
  delay((30-tOn));

}
