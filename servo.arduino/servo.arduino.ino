#include<Servo.h>

Servo test_servo;



void setup() {
  // put your setup code here, to run once:

 test_servo.attach(9);

}

void loop() {
  // put your main code here, to run repeatedly:

test_servo.write(180);

}
