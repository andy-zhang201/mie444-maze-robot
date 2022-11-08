int motorPin1 = 5;
int motorPin2 = 6;
int motorPinENA = 7;
int trigPin = 4;
int trigPinSecond = 8;
int echoPinInterrupt = 3;
int echoPin2 = 2;


void setup() {
  // put your setup code here, to run once:
  pinMode(echoPinInterrupt,INPUT);
  pinMode(echoPin2,INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(trigPinSecond, OUTPUT);
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPinENA, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(trigPin, LOW);
    delay(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    int pingTime = pulseIn (echoPinInterrupt, HIGH);
    int dist = pingTime*0.0343/2;

    Serial.print("Sensor 1: ");     
    Serial.println(dist);
    // Uncomment for delayed trigger
    delay(1000);

    digitalWrite(trigPinSecond, LOW);
    delay(2);
    digitalWrite(trigPinSecond, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPinSecond, LOW);
    int pingTime2 = pulseIn (echoPinInterrupt, HIGH);
    int dist2 = pingTime2*0.0343/2;
    

     
     Serial.print("Sensor 2: ");
     Serial.println(dist2);
     
//     analogWrite(ledPIN, (dist/maxDist)*255);
//     Serial.println((dist/maxDist)*255);
     delay(1000);
}
