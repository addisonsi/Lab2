/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/addisonsimon/Lab2/src/Lab2.ino"

void setup();
void loop();
#line 2 "/Users/addisonsimon/Lab2/src/Lab2.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);


void setup() {
  // Put initialization like pinMode and begin functions here.
  Serial.begin(9600);
  pinMode(D5, OUTPUT);
  //uint16_t value;
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  uint16_t value;
  value = analogRead(A5);
  Serial.println(value);
  digitalWrite(D5, HIGH);
  delay(value);
  digitalWrite(D5, LOW);
  delay(value);
  
}