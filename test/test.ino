#include "WT2605C_Player.h"

#ifdef __AVR__
  #include <SoftwareSerial.h>
  SoftwareSerial SSerial(2, 3); // RX, TX
  #define COMSerial SSerial
  #define ShowSerial Serial

  WT2605C<SoftwareSerial> Mp3Player;
#endif

void setup() {
  while (!ShowSerial);
  ShowSerial.begin(9600);
  COMSerial.begin(115200);
}
void loop() {
Mp3Player.playSDSong(fileName)
}