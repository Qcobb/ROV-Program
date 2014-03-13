void parseCommand()

{
    if((inputBuffer[1] == 'm' || inputBuffer[1]=='M')  && (inputBuffer[2] == 'c' || inputBuffer[2] == 'C')){
     controlMotor();
    }

}
