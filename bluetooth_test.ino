#include <SoftwareSerial.h> 

SoftwareSerial BTSerial(9, 10); // RX | TX

void setup()
{
Serial.begin(9600);
  Serial.println("Enter AT commands:");
  // HC-05 default speed in AT command mode
  BTSerial.begin(38400);
}
void loop() {
  // Read from HC-05 and send to Arduino Serial Monitor
  if (BTSerial.available())
     Serial.write(BTSerial.read());
// Keep reading from Arduino Serial Monitor and send to Software Serial
  if (Serial.available())
     BTSerial.write(Serial.read());
}
