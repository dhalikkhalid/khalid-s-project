
//motor1  variable

int ENA = 11;
int IN1 = 12;
int IN2 = 8;

//motor2 variable

int ENB = 10;
int IN3 = 2;
int IN4 = 7;


void setup() {
  // put your setup code here, to run once:

pinMode(ENA, OUTPUT);
pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);


pinMode(ENB, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

//moveBackward();
moveForward();
//turnLeft();
//turnRight();
}

void turnLeft(){
  digitalWrite(ENA, 50);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  
  digitalWrite(ENB, 150);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  
  }


  void turnRight(){
  digitalWrite(ENA, 150);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  
  digitalWrite(ENB, 50);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  
  }


  void moveBackward(){
  digitalWrite(ENA, 150);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(ENB, 150);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  
    }

  void moveForward(){
  digitalWrite(ENA, 150);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(ENB, 150);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  }
