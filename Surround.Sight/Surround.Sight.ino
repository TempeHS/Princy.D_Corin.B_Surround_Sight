// corin: void, steup/loop
// princy: if statements 
// https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/TempeHS_Sensor_Catalogue/Sensor_Kit/Ultrasonic_Ranger
// pin 7: vibration sensor

// https://wiki.seeedstudio.com/Grove-Vibration_Motor/
// pin 6 ultrasonic ranger

// x1 vibration sensor
// x1 ultrasonic ranger
#include "Ultrasonic.h"

Ultrasonic myUltrasonicSensor(6);
int OPDevice = 7;

void setup()
{
 digitalWrite(OPDevice, HIGH);
 Serial.begin(9600);

}
void loop()
{
  long RangeInCentimeters;

  RangeInCentimeters = myUltrasonicSensor.MeasureInCentimeters(); // two measurements should keep an interval
  Serial.print(RangeInCentimeters);//0~400cm
  Serial.println("cm");
  delay(50);
  if (RangeInCentimeters <= 100) {
    digitalWrite(OPDevice, HIGH);
  } else {
    digitalWrite(OPDevice, LOW);
  }
}