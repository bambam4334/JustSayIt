#include <SoftwareSerial.h>
 
SoftwareSerial BTSerial(10, 11);
 
#define CH1 7
 
#define CH2 6
 
#define CH3 5
 
#define CH4 4
 
char Value;
 
void setup() {
 
  pinMode(CH1, OUTPUT);
 
  pinMode(CH2, OUTPUT);
 
  pinMode(CH3, OUTPUT);
 
  pinMode(CH4, OUTPUT);
 
  digitalWrite(CH1, LOW);
 
  digitalWrite(CH2, LOW);
 
  digitalWrite(CH3, LOW);
 
  digitalWrite(CH4, LOW);
 
  BTSerial.begin(9600);
 
  Serial.begin(9600);
 
}
 
void loop() {
 
  if ( BTSerial.available() > 0 ) {
 
    Value = BTSerial.read();
 
    Serial.println(Value);
 
  }
 
 
  if ( Value == '1' ) {
 
    digitalWrite(CH1, HIGH);
  }
 
  else if ( Value == '2' ) {
 
    digitalWrite(CH2, HIGH);
  }
 
  else if ( Value == '3' ) {
 
    digitalWrite(CH3, HIGH);
  }
 
  else if ( Value == '4' ) {
 
    digitalWrite(CH4, HIGH);
  }
 
 
 
  else if ( Value == '9' ) {
 
    digitalWrite(CH1, HIGH);
 
    digitalWrite(CH2, HIGH);
 
    digitalWrite(CH3, HIGH);
 
    digitalWrite(CH4, HIGH);
 
  }
 
 
  else if ( Value == 'A' ) {
 
    digitalWrite(CH1, LOW);
  }
 
  else if ( Value == 'B' ) {
 
    digitalWrite(CH2, LOW);
  }
 
  else if ( Value == 'C' ) {
 
    digitalWrite(CH3, LOW);
  }
 
  else if ( Value == 'D' ) {
 
    digitalWrite(CH4, LOW);
  }
 
 
 
  else if ( Value == 'I' ) {
 
    digitalWrite(CH1, LOW);
 
    digitalWrite(CH2, LOW);
 
    digitalWrite(CH3, LOW);
 
    digitalWrite(CH4, LOW);
 
  }
 
}
