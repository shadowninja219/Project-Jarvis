#include <Arduino.h>

const int buttonPin = 2;
const int ledPin = LED_BUILTIN;


void setup() {
  pinMode(ledPin,OUTPUT);

  pinMode(buttonPin, INPUT_PULLUP);
}



void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH);
  } else{
    digitalWrite(ledPin, LOW);

  }
}

