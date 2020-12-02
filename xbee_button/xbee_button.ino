#include <SoftwareSerial.h>

short button1 = 2; 
short xBeeTx = 11; 
short xBeeRx = 12;

char buttonstate = 'L';

SoftwareSerial xBeeSerial(xBeeRx, xBeeTx);

void setup(){ 
  Serial.begin(9600); 
  xBeeSerial.begin(9600); 
  pinMode(button1 , INPUT); 
}

void loop(){
  if (digitalRead(button1) == HIGH) {
    buttonstate = 'H';
  } else {
    buttonstate = 'L';
  }
  
  xBeeSerial.println(buttonstate); 
  Serial.println(buttonstate);
}
