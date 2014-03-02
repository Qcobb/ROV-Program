
void receiveCharacters ()
{
  if (Serial.available() >  0 ) 
    {
      char recChar = Serial.read ();
      inputBuffer[inputID]= recChar;
      inputID++;
    }
    
    if (inputID >= 10) 
    {
       parseCommand();
       inputID = 0;
    }
}
