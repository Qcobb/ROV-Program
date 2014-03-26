
void parseCommand()

{
    motorID = 0;
    motorDirection = 0;
    boolean motorFunction = false;
    boolean controlMotors = false;
    
    switch(inputBuffer[1]){
      case 'M':
      motorFunction = true;
      switch(inputBuffer[2]){
        case 'C':
        controlMotors = true;
        switch(inputBuffer[3]){
          case 'L':
          motorID = 1; 
          break;
          case'R':
          motorID = 2;
          break;
          default:
          Serial.println("You forgot to enter,or entered an invalid motor ID ((L)eft or (R)ight are valid) in positon 4!");

        }
        
        switch(inputBuffer[4]){
          case 'F':
          motorDirection = 1;
          break;
          case'R':
          motorDirection = 2;
          break;
          case 'S':
          motorDirection = 3;
          default:
          Serial.println("You forgot to enter,or entered an invalid motor direction ((F)orward or (R)everse and (S)top are valid) in positon 5!"); 
        }
        break;
        
        default:
        Serial.println("You forgot to enter,or entered an invalid function definition ((C)ontrol is valid) in positon 3!");

      }
      break;
      
      default:
      Serial.println("You forgot to enter,or entered an invalid function introduction ((M)otor is valid) in positon 2!") ;

      
    }
    if (motorFunction == true && controlMotors == true){
      controlMotor();
      }
    }


