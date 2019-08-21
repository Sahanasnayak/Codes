  // IF LDR=1 ROTATE MOTOR IN CLOCKWISE(360)
  //IF SWITCH=1 ROTATE MOTOR IN ANTI-CLOCKWISE(360)
  //IF LDR=1 AND SWITCH=1 MOTOR=OFF
  
  
  #define enA 9
  #define in1 6
  #define in2 7
  #define button 4
  #define ldrpin A0
  const int ledpin=8;
   const int ldrStatus;

   
  
  
 // int rotDirection = 0;
  int pressed = false;
  
  void setup() {
 pinMode(enA, OUTPUT);
 pinMode(in1, OUTPUT);
 pinMode(in2, OUTPUT);
  Serial.begin(9600);

  pinMode(ledpin,OUTPUT);

  pinMode(ldrpin,INPUT);

 }
 
 void loop() {
    analogWrite(enA, 255); // Send PWM signal to L298N Enable pin 
     int ldrStatus= analogRead(ldrpin);
    if((ldrStatus>=40)&&(digitalRead(button) == false)){
      int ldrStatus= analogRead(ldrpin);
    digitalWrite(ledpin,HIGH);
   Serial.print("LDR STATUS=");
  Serial.println(ldrStatus);      // print the value to the serial port
  delay(1000);// wait a little
    digitalWrite(in1,LOW);
 digitalWrite(in2, HIGH);
 //rotDirection = 0;
 delay(20);
  }
else if((digitalRead(button) == true)&&(ldrStatus<40)){
 digitalWrite(ledpin,LOW);
  Serial.print("LDR STATUS=");
  Serial.println(ldrStatus);      // print the value to the serial port
  delay(1000);
  digitalWrite(in1, HIGH);
 digitalWrite(in2, LOW);
 //rotDirection = 0;
 delay(20);
  } 
  
 
 /*// Read button - Debounce
 if (digitalRead(button) == true) {
    pressed = true;
 //}
 while (digitalRead(button) == true);
 delay(20);
 // If button is pressed - change rotation direction
 if (pressed == true){//rotDirection == 1) {
 digitalWrite(in1,HIGH);
 digitalWrite(in2, LOW);
 //rotDirection = 0;
 delay(20);
 }
 }*/
 else {//both are high
 
 // If button is pressed - change rotation direction
 // pressed = false;
 //}
 //while (digitalRead(button) == false);
// delay(20);
// if (pressed == false){ //& rotDirection == 1) {
 digitalWrite(in1, LOW);
 digitalWrite(in2, LOW);
 //rotDirection = 0;
 delay(20);
 digitalWrite(ledpin,LOW);
  Serial.print("LDR STATUS=");
  Serial.println(ldrStatus);      // print the value to the serial port
  delay(1000);
 }
 }
 
 
