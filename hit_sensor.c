/*
    Project name : ESP8266 Hit sensor module Tap Sensor Module
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-hit-sensor-module-tap-sensor-module
*/

// Define the pin connected to the tap sensor module
const int tapSensorPin = D2; // GPIO pin D2 on NodeMCU

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(tapSensorPin, INPUT_PULLUP); // Set the tap sensor pin as input with internal pull-up resistor
}

void loop() {
  // Read the state of the tap sensor
  int tapState = digitalRead(tapSensorPin);
  
  // Check if a tap is detected (tapState goes LOW)
  if (tapState == LOW) {
    Serial.println("Tap detected!");
    delay(1000); // Delay to debounce the sensor and avoid multiple detections
  }
}
