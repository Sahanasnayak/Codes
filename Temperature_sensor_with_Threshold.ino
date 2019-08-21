const int sensor=A0;
float tempc;
float tempf; 
float out;
int ledpin=5;
void setup() {
  // put your setup code here, to run once:
 pinMode(sensor,INPUT);
 pinMode(ledpin,OUTPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 out=analogRead(sensor);
 out=(out*500)/1023;
 tempc=out;//temperature in celsius
 tempf=(out*1.8)+32;//temperature in fahrenheit
 if(out>=29){
 digitalWrite(ledpin,HIGH);
 }
 else{
  digitalWrite(ledpin,LOW);
  }
 
 
 Serial.print("Temperature degree Celsius=");
 Serial.println(tempc);

 delay(500);
 Serial.print("Temperature degree Fahrenheit=");
 Serial.println(tempf);

  Serial.print("\n");
   delay(1000);
 
}
