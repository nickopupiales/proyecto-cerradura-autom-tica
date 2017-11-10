#include <Servo.h>

Servo myservo; 

void setup() {
  pinMode(A2, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  myservo.attach(2,1000,2400); 
}

void loop() {
  int V = analogRead(A2);
  


if(V < 500){
  //CERRADURA ABIERTA
   digitalWrite(13,HIGH); 
   myservo.write(0);
  }

if(V > 500){
  //CERRADURA CERRADA
   digitalWrite(13,LOW);
   myservo.write(180);
  }

  
 }
