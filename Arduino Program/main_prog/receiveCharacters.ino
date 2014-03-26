
void receiveCharacters ()
{
  if (Serial.available() >  0 ) 
    {
      char recChar = Serial.read ();
          if (recChar =='#') {inputID=0;Serial.println("Beginning command");}
      inputBuffer[inputID]= (toupper(recChar));
      inputID++;
      if (inputID >= 100)inputID=0;
      if (recChar ==13)
        {
          
         Serial.println("Command received");
         for (int i = 0; i <inputID; i++)  {
            Serial.println(inputBuffer [i]);
          } 
         parseCommand();
         Serial.println("Command executed");
         inputID=0;
        }
      
    }

    

}
