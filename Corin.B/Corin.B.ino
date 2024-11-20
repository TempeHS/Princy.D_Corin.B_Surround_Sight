// This is a different Ultrasonic Library to the one we used in the bootcamp becuase we are using a Seead grove sensor not a generic 4 pin Ultrasonic sensor
#include "Ultrasonic.h"

Ultrasonic myUltrasonicSensor(6);
void setup()
{
 Serial.begin(9600);
}
void loop()
{
  long RangeInCentimeters;

  RangeInCentimeters = myUltrasonicSensor.MeasureInCentimeters(); // two measurements should keep an interval
  Serial.print(RangeInCentimeters);//0~400cm
  Serial.println(" cm");
  delay(250);
}