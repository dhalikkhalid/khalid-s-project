
#include <MPU6050_tockn.h>
#include <Wire.h>

//motor1  variable

int ENA = 11;
int IN1 = 12;
int IN2 = 8;

//motor2 variable

int ENB = 10;
int IN3 = 2;
int IN4 = 7;

int targetPoint;

 double Kp_right = 0.5;
  double Kp_left = 0.5;

MPU6050 mpu6050(Wire);

void setup() {
  
//  Serial.begin(9600);
//  Wire.begin();
//  mpu6050.begin();
//  mpu6050.calcGyroOffsets(true);
//
// double targetPoint = mpu6050.getAngleZ();

 pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  moveForward(255,255);
}

void loop() {

  
  
  
// double actualPoint = mpu6050.getAngleZ();
//
// int error = targetPoint - actualPoint;
// int output_right = Kp_right * error;
// int output_left = Kp_left * error;
//
// Serial.println(output_right);
//
//  moveForward(200+output_right, 200+output_left);


 
//  mpu6050.update();
  
 
//  Serial.print("\tangleZ : ");
//  Serial.println(mpu6050.getAngleZ());
//
//    if(mpu6050.getAngleZ()>0){
//            turnRight();
// 
//              }
//
//  
//    else if(mpu6050.getAngleZ()<0){
//              turnLeft();
//                 
//              }
//
//    else if(mpu6050.getAngleZ() == 0){
//              moveForward();
//              
//              }

}


  void turnLeft(int pwm){
  digitalWrite(ENA, pwm);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  
  digitalWrite(ENB, pwm);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  
  }


  void turnRight(int pwm){
  digitalWrite(ENA, pwm);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  
  digitalWrite(ENB, pwm);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  
  }

  void moveForward(int pwm_right, int pwm_left){
  digitalWrite(ENA, pwm_left);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(ENB, pwm_right);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  }

  
 
  

//  Output = Kp-Error
//  Error = Difference between the setpoint and the actual sensor reading
