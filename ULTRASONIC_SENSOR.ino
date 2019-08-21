#define trigpin 9
#define echopin 10
#define LED 5
#define switchpin 3
//long a;
//int distance;

void setup() {
  // put your setup code here, to run once:
pinMode(echopin,INPUT);
pinMode(trigpin,OUTPUT);
Serial.begin(9600);
pinMode(LED,OUTPUT);
pinMode(switchpin,INPUT);
}

void loop() {
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
  
