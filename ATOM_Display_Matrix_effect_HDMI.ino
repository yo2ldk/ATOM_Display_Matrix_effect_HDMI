//   MATRIX Effect  ***  By YO2LDK  ***  23.05.2024   //
//____________________________________________________//

#include <M5AtomDisplay.h>
M5AtomDisplay tft( xxx, xxxx,  xx);  //   edit xx with your display settings
#include "DigitalRainAnimation.hpp"
//static M5GFX tft;
DigitalRainAnimation<M5GFX> Rain = DigitalRainAnimation<M5GFX>();

void setup() {
  tft.begin();
  tft.setRotation(0);
  tft.setBrightness(150);
  Rain.init(&tft);
}

void loop() {
  Rain.loop();
  
}
