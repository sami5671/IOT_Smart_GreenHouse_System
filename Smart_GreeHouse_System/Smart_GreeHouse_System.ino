// Define pin numbers for 5 LEDs
int ledPins[] = {2, 3, 4, 5, 6};  // Array of LED pins
int numLeds = 5;                  // Total number of LEDs

void setup() {
  // Set all pins as OUTPUT
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Turn LEDs ON one by one
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(30);  // wait 200ms
  }

  // Turn LEDs OFF one by one
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], LOW);
    delay(30);  // wait 200ms
  }
}
