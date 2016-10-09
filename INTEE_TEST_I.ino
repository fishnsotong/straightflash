#include <Servo.h>

Servo servo1;

void setup() 
{
  servo1.attach(9);
  pinMode(5, INPUT);
}

void loop() 
{
  const int position1 = 0 ;
  int switchValue = digitalRead(5);
  if (switchValue == LOW)
  {
    servo1.write(position1);
  }
  else 
  {
  servo1.attach(9);
  servo1.write (180);
  delay(1000);
  }
 


}
