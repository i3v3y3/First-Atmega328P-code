// Defining intial states and pin locations
const int PIR_PIN = 2;
const int LED_PIN = 4;
int pirState;

void setup() {

  pinMode(PIR_PIN, INPUT);

  pinMode(LED_PIN, OUTPUT);

  Serial.begin(9600);

  // Set the initial state of the LED
  digitalWrite(LED_PIN, LOW);
}

void loop() {
  // Get the current state of the PIR sensor
  int currentState = digitalRead(PIR_PIN);

    // Check if the PIR sensor has been triggered
    if (currentState == HIGH) {
      // Turn on the LED
      digitalWrite(LED_PIN, HIGH);

      // Print a message to the serial monitor
      Serial.println("Motion detected!");

      // Wait for 2 seconds
      delay(2000);

      // Turn off the LED
      digitalWrite(LED_PIN, LOW);

      // Wait for 10 seconds
      delay(5000);
    }
    // Update the initial state of the PIR sensor
    pirState = currentState;
}
