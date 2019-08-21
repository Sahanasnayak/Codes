 const int ledpin=8;

#define ldrpin A0

void setup(){

  Serial.begin(9600);

  pinMode(ledpin,OUTPUT);

  pinMode(ldrpin,INPUT);

}

void loop(){

  int ldrStatus= analogRead(ldrpin);

  if(ldrStatus>=40){

    digitalWrite(ledpin,HIGH);

    Serial.print("It's dark,turn ON the led=");

    Serial.println(ldrStatus);

    delay(1000);

  }

  else{

    digitalWrite(ledpin,LOW);

    Serial.print("It's bright,turn off led=");

    Serial.println(ldrStatus);

    delay(1000);

  }

}
