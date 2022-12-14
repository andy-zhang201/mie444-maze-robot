//NewPing Library and Documentation can be found at
//http://playground.arduino.cc/Code/NewPing


#include <NewPing.h>
 
#define TRIGGER_PIN  7
#define ECHO_PIN1     6
#define ECHO_PIN2     5
#define ECHO_PIN3     4
#define ECHO_PIN4     3
#define ECHO_PIN5     2
#define ECHO_PIN6     8

#define MAX_DISTANCE 200

int d1, d2, d3, d4, d5, d6;
 
NewPing sonar1(TRIGGER_PIN, ECHO_PIN1, MAX_DISTANCE);
NewPing sonar2(TRIGGER_PIN, ECHO_PIN2, MAX_DISTANCE);
NewPing sonar3(TRIGGER_PIN, ECHO_PIN3, MAX_DISTANCE);
NewPing sonar4(TRIGGER_PIN, ECHO_PIN4, MAX_DISTANCE);
NewPing sonar5(TRIGGER_PIN, ECHO_PIN5, MAX_DISTANCE);
NewPing sonar6(TRIGGER_PIN, ECHO_PIN6, MAX_DISTANCE);
 
void setup() 
{
  Serial.begin(9600);
}
 
void loop() 
{
  
  if (Serial.available()>0)
  {
    char ch = Serial.read();
    if (ch == 'r')
    {  
       delay(30);
       d1 = sonar1.ping_cm();
       delay(30);
       d2 = sonar2.ping_cm();
       delay(30);
       d3 = sonar3.ping_cm();
       delay(30);
       d4 = sonar4.ping_cm();
       delay(30);
       d5 = sonar5.ping_cm();
       delay(30);
       d6 = sonar6.ping_cm();
       
       Serial.print("D1: ");
       Serial.print(d1);
       Serial.print(" D2: ");
       Serial.print(d2);
       Serial.print(" D3: ");
       Serial.print(d3);
       Serial.print(" D4: ");
       Serial.print(d4);
       Serial.print(" D5: ");
       Serial.println(d5);
       Serial.print(" D6: ");
       Serial.println(d6);
       
    }
  }
}
