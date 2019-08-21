  //success 
  //when switch on speed decreased and when on normal speed
  #define enA 9
  #define in1 6
  #define in2 7
  #define button 4
 
  
  
  //int rotDirection = 0;
  int pressed = false;
  
  void setup() {
 pinMode(enA, OUTPUT);
 pinMode(in1, OUTPUT);
 pinMode(in2, OUTPUT);
 }
 
 void loop() {
     
  
 analogWrite(enA, 255); // Send PWM signal to L298N Enable pin 

 
 // Read button - Debounce
 if (digitalRead(button) == true) {
  analogWrite(enA, 127);//255 for one complete count for ON nad OFF
 pressed = !pressed;
 }
 while (digitalRead(button) == true);
 delay(20);
 // If button is pressed - change rotation direction
 if (pressed == true) {
  analogWrite(enA, 127);
 digitalWrite(in1, HIGH);
 digitalWrite(in2, LOW);
 //rotDirection = 1;
 delay(20);
 }
 // If button is pressed - change rotation direction
 if (pressed == false ) {
  analogWrite(enA, 127);
 digitalWrite(in1, HIGH);
 digitalWrite(in2, LOW);
 
 //rotDirection = 0;
 delay(20);
 }
 }
