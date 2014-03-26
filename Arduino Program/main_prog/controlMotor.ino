void controlMotor () {
  Serial.println("something");
     switch (motorID){
  //-------------------------------------- Controls left motor------------------------//
  
     case 1:
     switch(motorDirection){
       case 1:
       lMotorForward();
       break;
       
       case 2:
       lMotorReverse();
       break;
       
       case 3:
       lMotorStop();
       break;
     }
     break;
     
  //-------------------------------------- Controls right motor------------------------//
  
     case 2:
     switch(motorDirection){
       case 1:
       rMotorForward();
       break;
       
       case 2:
       rMotorReverse();
       break;
       
       case 3:
       rMotorStop();
       break;
     }
       break;
     
  }
}
