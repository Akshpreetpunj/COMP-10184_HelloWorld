#include <Arduino.h>
unsigned long myTime;

/* I Akshpreet Singh Punj, 000820040 certify that this material is my original work. 
No other person's work has been used without due acknowledgement. 
I have not made my work available to anyone else. */

void setup() {
  // put your setup code here, to run once:

  // Start the USB serial monitor port
  Serial.begin(115200);

  // print some text to the USB port
  Serial.println("\n\nHello, World!\n");

  // Name and Student Number
  Serial.println("Name - Akshpreet Singh Punj");
  Serial.println("Student ID - 000820040\n");

  // Details about D1 mini
  Serial.println("Details about D1 mini:");

  Serial.println("ESP8266 Chip ID - " + String(ESP.getChipId()));
  Serial.println("Flash Chip ID - " + String(ESP.getFlashChipId()) + "\n");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Time in milliseconds since the D1 Mini was started: ");
  myTime = millis();

  Serial.println(myTime);
  delay(2000);
}