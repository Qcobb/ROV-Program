//Initiate any variables that need exist in the code up here so that it dosent
//loop back to the preset value every loop or clutter code in setup

//-------------------------------------- array for buffer ------------------------//
char inputBuffer [100];
int inputID = 0;


//-------------------------------------- Leak Detector variable------------------------//


boolean leakStatus = false ; /* Used to indicate that there is not leak. It is assumed 
the arduino's box isnt leaking at initialisation. True indicates leak, false indicates
no leak*/
int leakDetectorVoltage ; /* This is set up to be the current voltage of the leak detector*/
int leakDetectorInterval ;
unsigned long previousLDCTime ;
int leakThreshold = 50 ;      // Number of volts at which it can definetly be descided that the leak detector is triggered by a leak
//-------------------------------------- Serial port variables------------------------//

unsigned long previousSPITime;
int SerialPortInterval=10;
char recChar;
char prevChar;
boolean charDifferent;

//-------------------------------------- Blinking Light------------------------//
unsigned long previousBLTime;
int BLInterval = 1000;
void loop ()
{
  
unsigned long currentTime = millis ();

  if (currentTime - previousLDCTime > leakDetectorInterval) 
    {
        CheckLeak();
        previousLDCTime = currentTime;
    }
    
  if (currentTime - previousSPITime > SerialPortInterval) 
    {
        receiveCharacters();// check incoming char/put char in buffer/set readMessage_flag if CR or LF
        previousSPITime = currentTime;
    }
      if (currentTime - previousBLTime > BLInterval) 
    {
        Blink();// check incoming char/put char in buffer/set readMessage_flag if CR or LF
        previousBLTime = currentTime;
    }
    leakAnalyzer();
 // if (read_message_flag)
  //    CommandRobot();
      
  //if (currentTime - previousTime > leakDetectorInterval) 
  //      CheckLeak(); 
/*
#M,P,1(CR) turn on port motor
!M,P,1(CR)
#M,S,1(CR) turn on starboard motor  

#M,A,0(CR) turn off all motors
#M,A,1(CR) turn on all motors

#S(CR)    report status
#M,S(CR) report motor status
*/
}
