#ifndef ARDUINO_LIBRARY_H
#define ARDUINO_LIBRARY_H

class BlinkLight{
    public:
        // int ledpin;
        int stayOn;
        int stayOff;
        int ledpin;

        void setLedPin(int);
        BlinkLight(int);   // not a default constructor
        BlinkLight();  // default constructor
        void BlinkNow();
        void BlinkWithDelay(int,int);


};
#endif
