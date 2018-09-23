#include <SoftwareSerial.h>
SoftwareSerial mDot(2, 3); // RX, TX

long timer = 0;
long sendIncrement = 60000;

void setup()
{
  // Make sure the baud rate matches the configured 
  // baud setting of the mDot.
  // mDot.begin(9600);
  Serial.begin(9600);
  delay(1000);
  // mDot.println("AT+JOIN");
  timer = millis();
}

int count = 0;

void loop()
{
  if(millis() >= timer + sendIncrement) {
    count++;
    Serial.println(count);
    // mDot.println("AT+SEND=" + String(count));
    timer = millis();
  }

  // write your sensor code

  
  
  
  
}
