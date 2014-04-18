void rMotorForward(){

    
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  if (debug == 1){
    Serial.println("right  motor going forward");
  }
}
   
void rMotorReverse(){
  
    
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  if (debug == 1){
    Serial.println("right  motor going backwards");
  }
}
void rMotorStop(){
  
    
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  if (debug == 1){
    Serial.println("right  motor stopping");
  }
}
