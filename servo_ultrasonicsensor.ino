#include <Servo.h>
#define trigpin 7
#define echopin 6
#define LED 5
#define switchpin 3
int val;
int count=0;

Servo myservo;  // create servo object to control a servo


void setup() {
  myservo.attach(9);
  
pinMode(echopin,INPUT);
pinMode(trigpin,OUTPUT);
Serial.begin(9600);
pinMode(LED,OUTPUT);
}

void loop() {
  //val = map(val, 0, 1023, 0, 180); 
  //myservo.write(180);// sets the servo position according to the scaled value
  //delay(15);
 for(val=0;val<=180;val=val+10)
   {
   myservo.write(val); 
   delay(200); 
  }
  for(val=180;val>=0;val=val-10)
  {
   myservo.write(val); 
   delay(200);  
   }
  
   int B;
  B=digitalRead(switchpin);
  if(B==HIGH){
  // put your main code here, to run repeatedly:
long a;
long distance;
//a=digitalRead(echopin);
digitalWrite(trigpin,LOW);
delayMicroseconds(2);

digitalWrite(trigpin,HIGH);
delayMicroseconds(10);
digitalWrite(trigpin,LOW);
a=pulseIn(echopin,HIGH);
distance=(a*0.0321)/2;
if(distance<10)
{
  digitalWrite(LED,HIGH);
  }
  else
  {
    digitalWrite(LED,LOW);
    }
    
   
Serial.print(distance);
Serial.println("cm");
delay(500);
  }
}




























































  
