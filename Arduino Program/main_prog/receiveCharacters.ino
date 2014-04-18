String input = "!" ;
void receiveCharacters ()
{
  if (Serial.available() >  0 ) 
    {
      char recChar = Serial.read ();
          if (recChar =='#') {
            if (debug == 1){
              inputID=0;Serial.println("Beginning command");
            }
          }
      inputBuffer[inputID]= (toupper(recChar));
      inputID++;
      if (inputID >= 100)inputID=0;
      if (recChar ==13)
        {
          if (debug == 1){
         Serial.println("Command received");
          }
         for (int i = 1; i <inputID; i++)  {
            (input += inputBuffer [i]);
          } 
         Serial.println(input);
         input = "!";
         parseCommand();
         if (debug == 1){
           Serial.println("Command executed");
         }
         inputID=0;
        }
      
    }

    

}
