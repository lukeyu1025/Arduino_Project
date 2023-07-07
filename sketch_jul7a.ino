const int ledPin = 13;  // Pin connected to the LED
bool isLedOn = false;  // Variable to track LED status

void setup() {
  pinMode(ledPin, OUTPUT);  // Set the LED pin as output
  Serial.begin(9600);  // Initialize serial communication
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read();  // Read the incoming command from the PC

    if (command == '1') {
      digitalWrite(ledPin, HIGH);  // Turn on the LED
      isLedOn = true;
    } else if (command == '0') {
      digitalWrite(ledPin, LOW);  // Turn off the LED
      isLedOn = false;
    }

    // Send LED status response to the PC
    if (isLedOn) {
      Serial.println("LED is ON");
    } else {
      Serial.println("LED is OFF");
    }
  }
}
