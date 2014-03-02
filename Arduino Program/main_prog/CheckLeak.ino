void CheckLeak()
{
leakDetectorVoltage = analogRead(A5);

  if (leakDetectorVoltage > leakThreshold)
    {
    leakStatus = true;
    }
  else leakStatus = false;

}
