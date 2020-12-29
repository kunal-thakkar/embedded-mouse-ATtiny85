// DigiMouse test and usage documentation
// CAUTION!!!! This does click things!!!!!!!!
// Originally created by Sean Murphy (duckythescientist)
#define __AVR_ATtiny85__
#include <DigiMouse.h>

void setup() {
  DigiMouse.begin(); //start or reenumerate USB - BREAKING CHANGE from old versions that didn't require this
}

void loop() {
  // If not using plentiful DigiMouse.delay(), make sure to call
  // DigiMouse.update() at least every 50ms
  DigiMouse.move(random(0, 1024), random(0, 720), 0);
  for(int i = 0; i < 20; i++)
    DigiMouse.delay(500);
}
