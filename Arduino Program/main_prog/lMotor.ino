void lMotorForward(){

  
digitalWrite(6, HIGH);
digitalWrite(7, LOW);
Serial.println("left  motor going forwards");

}
 
void lMotorReverse(){

  
digitalWrite(6, LOW);
digitalWrite(7, HIGH);
Serial.println("left  motor going backwards");

 }
 
 void lMotorStop(){

  
digitalWrite(6, LOW);
digitalWrite(7, LOW);
Serial.println("left  motor stopping");

 }
