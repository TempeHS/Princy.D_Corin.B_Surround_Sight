// corin: void, steup/loop
// princy: if statements 
// https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/TempeHS_Sensor_Catalogue/Sensor_Kit/Ultrasonic_Ranger
// pin 7: vibration sensor

// https://wiki.seeedstudio.com/Grove-Vibration_Sensor_SW-420/
// pin 6 ultrasonic ranger

// x1 vibration sensor
// x1 ultrasonic ranger


// constants won't change. They're used here to set pin numbers:
const int buttonPin = 7;     // the number of the pushbutton pin

// variables will change:
int buttonState = 1;         // variable for reading the pushbutton status

void setup() {
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
    digitalWrite(buttonPin, HIGH);
  }