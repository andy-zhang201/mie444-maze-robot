
// This is the pin set up for motor one, enable is not shorted 
int ENA_m1 = 3;
int ENB_m2 = 5;

int m1_In1 = A0;
int m1_In2 = A1;
int m2_In3 = A2;
int m2_In4 = A3;

// this is the pin set up for motor 2 enable is shorted and pwm signals are sent to input 
int m3_In1 = 6;
int m3_In2 = 9;
int m4_In3 = 10;
int m4_In4 = 11;


void setup() {
  // put your setup code here, to run once:

  pinMode(ENA_m1, OUTPUT);
  pinMode(ENB_m2, OUTPUT);
  pinMode(m1_In1, OUTPUT);
  pinMode(m1_In2, OUTPUT);
  pinMode(m2_In3, OUTPUT);
  pinMode(m2_In4, OUTPUT);
  pinMode(m3_In1, OUTPUT);
  pinMode(m3_In2, OUTPUT);
  pinMode(m4_In3, OUTPUT);
  pinMode(m4_In4, OUTPUT);



  
}

void loop() {
  // put your main code here, to run repeatedly:   

  //motor 1 
  digitalWrite(m1_In1, LOW); //CLOCKWISE CONFIGURATION; M1 ON MOTOR CONNECTED TO GROUND ON DRIVER
  digitalWrite(m1_In2, HIGH); //CLOCKWISE CONFIGURATION; M2 ON MOTOR CONNECTED TO 12V ON DRIVER
  analogWrite(ENA_m1,255);
//  
  //motor 2
  digitalWrite(m2_In3, LOW); //CLOCKWISE CONFIGURATION; GROUND TO GROUND FROM MOTOR TO DRIVER
  digitalWrite(m2_In4, HIGH);//CLOCKWISE CONFIGURATION; POWER TO POWER FROM MOTORE TO DRIVER
  analogWrite(ENB_m2,255);

  //motor 3 
  analogWrite(m3_In1,0); //CLOCKWISE CONFIGURATION: GROUND TO GROUND FROM MOTOR TO DRIVER
  analogWrite(m3_In2,255);//CLOCKWISE CONFIGURATION; POWER TO POWER FROM MOTORE TO DRIVER

  //motor 4
  analogWrite(m4_In3,0);//CLOCKWISE CONFIGURATION: GROUND TO GROUND FROM MOTOR TO DRIVER
  analogWrite(m4_In4,255);//CLOCKWISE CONFIGURATION; POWER TO POWER FROM MOTORE TO DRIVER


  
   
  delay(1000);
//
//  digitalWrite(motor2pin1, LOW);
//  digitalWrite(motor2pin2, HIGH);
//  delay(1000);
//
//  digitalWrite(motor2pin1, LOW);
//  digitalWrite(motor2pin2, LOW);
//  delay(1000);
//  
}

int stopRobot(int sensorArray[6]){
  return 1;
}
