
void receiveCharacters ()
{
  if (Serial.available() >  0 ) 
    {
      char recChar = Serial.read ();
          if (recChar =='#') {inputID=0;Serial.println("Beginning command");}
      inputBuffer[inputID]= recChar;
      inputID++;
      if (inputID >= 100)inputID=0;
      if (recChar ==13)
        {
         parseCommand();
         Serial.println("Command received");
         inputID=0;
        }
      
    }

    

}
