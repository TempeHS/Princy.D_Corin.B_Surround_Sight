// corin: void, steup/loop
// princy: if statements 
// https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/TempeHS_Sensor_Catalogue/Sensor_Kit/Ultrasonic_Ranger
// pin 7: vibration sensor

// https://wiki.seeedstudio.com/Grove-Vibration_Motor/
// pin 6 ultrasonic ranger

// x1 vibration sensor
// x1 ultrasonic ranger
#include "Ultrasonic.h"
#define SPEAKER 3
Ultrasonic myUltrasonicSensor(6);
int OPDevice = 7;
int BassTab[]={1911,1702,1516,1431,1275,1136,1012};//bass 1~7

void setup()
{
 digitalWrite(OPDevice, HIGH);
 Serial.begin(9600);
 pinInit();
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
   /*sound bass 1~7*/
    for(int note_index=0;note_index<7;note_index++)
    {
        sound(note_index);
    }
}
void pinInit()
{
    pinMode(SPEAKER,OUTPUT);
    digitalWrite(SPEAKER,HIGH);
}
void sound(uint8_t note_index)
{
    for(int i=0;i<100;i++)
    {
       
    }
}