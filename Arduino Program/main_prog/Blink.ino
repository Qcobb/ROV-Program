int state = LOW;
void Blink()
{
 pinMode(13, OUTPUT);
 digitalWrite(13,state);
 if (state == LOW){
   state = HIGH;
 }
 else{
  state = LOW; 
 }
}
