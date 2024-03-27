
const int PIR_PIN = 2;


const int LED_PIN = 3;


int pirState = LOW;

// Define the timeout for the initial state
unsigned long timeout = 0;

void setup() {
  // Set the input pin for the PIR sensor as an input
  pinMode(PIR_PIN, INPUT);

  // Set the LED output pin as an output
  pinMode(LED_PIN, OUTPUT);

  // Initialize the serial communication
  Serial.begin(9600);

  // Set the initial state of the LED
  digitalWrite(LED_PIN, LOW);

  // Calculate the timeout for the initial state
  timeout = millis();
}

void loop() {
  // Get the current state of the PIR sensor
  int currentState = digitalRead(PIR_PIN);
  unsigned long currentTime;
  
  // Check if the current state of the PIR sensor is different from the initial state
  if (currentState != pirState) {
    // Calculate the time since the initial state
    unsigned long currentTime = millis();

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
      delay(10000);
    }

    // Update the initial state of the PIR sensor
    pirState = currentState;

    // Calculate the timeout for the initial state
    timeout = currentTime + 5000;
  }

  // Check if the timeout for the initial state has been reached
  if (currentTime > timeout) {
    // Set the initial state of the LED
    digitalWrite(LED_PIN, LOW);

    // Print a message to the serial monitor
    Serial.println("Initial state timed out. Setting back to low.");

    // Update the initial state of the PIR sensor
    pirState = LOW;

    // Calculate the timeout for the initial state
    timeout = currentTime + 5000;
  }
}