#include <Servo.h>
 
Servo servox;  // create servo object to control a servo
Servo servoy;
int val;
int val1;
int servoPos = 0;
void setup()
{
  servox.attach(9);
  servoy.attach(8);
  servox.write(90);
  servoy.write(90);
}
 
void loop()
{
  /*val = analogRead(potpin);
  val = map(val, 0, 1023, 0, 179);
  if ((val > 85) and (val < 95)){
  val = 90;
  }
  if (val < 80) {
   servox.write(servox.read()-3);
  }
   if (val > 100) {
   servox.write(servox.read()+3);
  }
 
  val1 = analogRead(potpin1);
  val1 = map(val1, 0, 1023, 0, 179);
    if (val1 < 80) {
   servoy.write(servoy.read()-3);
  }
   if (val1 > 100) {
   servoy.write(servoy.read()+3);
  }*/
  for (servoPos = 0;servoPos < 180; servoPos++)
  {
    servox.write(servoPos);
    servoy.write(servoPos);
    delay(100);
  }
  for (servoPos = 180;servoPos > 0; servoPos--)
  {
    servox.write(servoPos);
    servoy.write(servoPos);
    delay(100);
  delay(50); 
  }
}
