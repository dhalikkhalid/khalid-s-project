/**
 * createb by Khalid Rauf, August 2024
 * Registered under MIT licence
 * 
 * Functions
 * =================
 * 
 * void setLedPin(int);
   BlinkLight(int);   // not a default constructor
   BlinkLight();  // default constructor
   void BlinkNow();
   void BlinkWithDelay(int,int);
 * 
 */

#include "arduino_library.h"

BlinkLight led;

void setup() {
  // put your setup code here, to run once:
   
  led.setLedPin(12);

}

void loop() {
  // put your main code here, to run repeatedly:

  led.BlinkWithDelay(1000, 2000);

}