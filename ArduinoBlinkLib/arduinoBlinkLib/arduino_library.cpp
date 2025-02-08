#include"arduino_library.h"
#include<Arduino.h>


/**
 * 
 * void setLedPin(int);
        BlinkLight(int);   // not a default constructor
        BlinkLight();  // default constructor
        void BlinkNow();
        void BlinkWithDelay(int,int);
 */

BlinkLight::BlinkLight(){}

BlinkLight::BlinkLight(int ledpin){

    this->ledpin = ledpin;

    pinMode(this->ledpin, OUTPUT);
}

void BlinkLight::setLedPin(int pinNumb){

    ledpin = pinNumb;

    pinMode(this->ledpin, OUTPUT);

};


void BlinkLight::BlinkNow(){

    digitalWrite(this->ledpin, HIGH);
    delay(1000);

    digitalWrite(this->ledpin, LOW);
    delay(1000);

}

void BlinkLight::BlinkWithDelay(int stayOn, int stayOff){

    this->stayOff = stayOff;
    this->stayOn = stayOn;

    digitalWrite(this->ledpin, HIGH);
    delay(this->stayOn);

    digitalWrite(this->ledpin, LOW);
    delay(this->stayOff);


    
}
