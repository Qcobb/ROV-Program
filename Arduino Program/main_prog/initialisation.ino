//# include <parameters.ino>

void setup ()
{
//-------------------------------------- Serial Port ------------------------//  

Serial.begin(baudrate);
 
//-------------------------------------- IO ------------------------//

for (int i = 2; i <10; i++)
  {
  pinMode (i,OUTPUT);
  digitalWrite (i,LOW);
  }
}
