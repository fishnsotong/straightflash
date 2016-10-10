#include <Servo.h>
const int buttonSwitch = 5;
const int servoPin = 9;
Servo servo1;

void setup() 
{
  servo1.attach(servoPin);
  pinMode(5, INPUT);
}

void loop() 
{
  const int position1 = 0;
  const int position2 = 180;
  int switchValue = digitalRead(buttonSwitch);
  if (switchValue == LOW)
  {
    servo1.write(position1);
  }
  else 
  {
  servo1.attach(9);
  servo1.write(position2);
  delay(1000);
  }
 


}
