#include "SevSeg.h"
SevSeg sevseg; 

void setup(){
  byte numDigits = 4;
  byte digitPins[] = {13, 12, 11, 10};
  byte segmentPins[] = {9, 2, 3, 5, 6, 8, 7, 4};

  bool resistorsOnSegments = true; 
  bool updateWithDelaysIn = true;
  byte hardwareConfig = COMMON_CATHODE; 
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
  sevseg.setBrightness(100);
}

void loop(){
    // Display the numbers 1234.
    sevseg.setNumber(1234);
    sevseg.refreshDisplay(); 
}

