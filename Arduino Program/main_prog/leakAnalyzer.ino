int leakScaling = 1000;
int leakProb = 0;
boolean isLeaking = false;
unsigned long prevLeakingTimer = 0;
unsigned long prevNonLeakingTimer = 0;

void leakAnalyzer(){ 
  //-------------------------------------- Increment Leak Probability if voltage is high for extended time (>1sec)------------------------//

  if (leakStatus = true && leakProb < 10)
  {
    unsigned long leakingTimer = millis ();
    if (leakingTimer - prevLeakingTimer > leakScaling) 
    {
    prevLeakingTimer = leakingTimer;
    leakProb = leakProb + 1;
    }
  }
//-------------------------------------- Decrement Leak Probabilty if voltage is normal for extended time (>1sec)------------------------//

  if (leakStatus = false && leakProb > 0)
    {
      unsigned long nonLeakingTimer = millis();
      if (nonLeakingTimer - prevNonLeakingTimer > leakScaling) 
      {
        prevNonLeakingTimer = nonLeakingTimer;
        leakProb = leakProb - 1;
      }
   }
   //-------------------------------------- Determine Boolean status of leaking------------------------//

   if (leakProb >= 5)
     {
       isLeaking = true;
     }
     else
     {
       isLeaking = false;
     }
}

  
