void lMotorForward(){

  
digitalWrite(2, HIGH);
digitalWrite(3, LOW);
if (debug == 1){
  Serial.println("left  motor going forwards");
}
}
 
void lMotorReverse(){

  
digitalWrite(2, LOW);
digitalWrite(3, HIGH);
if (debug == 1){
  Serial.println("left  motor going backwards");
}
 }
 
 void lMotorStop(){

  
digitalWrite(2, LOW);
digitalWrite(3, LOW);
if (debug == 1){
  Serial.println("left  motor stopping");
}
 }
