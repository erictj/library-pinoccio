#include <Scout.h>

void setup() {
  Scout.setup();
}

void loop() {
  Scout.loop();

  RgbLed.blinkRed();
  RgbLed.blinkGreen();
  RgbLed.blinkBlue();
}