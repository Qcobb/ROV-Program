void rMotorForward(){

  
digitalWrite(8, HIGH);
digitalWrite(9, LOW);
Serial.println("right  motor going forward");

}
 
void rMotorReverse(){

  
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
Serial.println("right  motor going backwards");

 }
 void rMotorStop(){

  
digitalWrite(8, LOW);
digitalWrite(9, LOW);
Serial.println("right  motor stopping");

 }
