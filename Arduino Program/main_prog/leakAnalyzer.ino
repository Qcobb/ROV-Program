

void leakAnalyzer(){ 
//-------------------------------------- Check leak detector------------------------//  
  if (analogRead(A5) < leakThreshold)
    {
    leakStatus = 1;
    }
  else leakStatus = 0;
  
//-------------------------------------- Increment Leak Probability if voltage is high for extended time (>1sec)------------------------//
  if (leakStatus ==1 && leakProb < 10)
    {
    leakProb = leakProb + 1;
    }

//-------------------------------------- Decrement Leak Probabilty if voltage is normal for extended time (>1sec)------------------------//

  if (leakStatus ==0 && leakProb > 0)
     {
     leakProb = leakProb - 1;
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

  
