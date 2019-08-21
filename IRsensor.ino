int IR=10;
int ledpin=8;
int a;
void setup() {
  // put your setup code here, to run once:
pinMode(IR,INPUT);
pinMode(ledpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
a=digitalRead(IR);
if(a==LOW){
  digitalWrite(ledpin,HIGH);
  Serial.println("object isdetected and led is ON");
 // delay(600);
}
else{
 digitalWrite(ledpin,LOW);
  Serial.println("object is not  detected and led is OFF");
}
delay(600);
}
