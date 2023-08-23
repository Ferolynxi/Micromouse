//*******************************************************************************************
// Test code file for all MCUs
// Test the codes from all branches here before finalazing into src code / main branch.
//*******************************************************************************************

// Tests: IR array of 5 sensors, motor driver, 2 motors.

// Define the pin connections for the IR sensor array
#define IR1 PA0
#define IR2 PA1
#define IR3 PA2
#define IR4 PA3
#define IR5 PA4

// Define the pin connections for the motor driver
#define motor1A PB0
#define motor1B PB1
#define motor2A PB6
#define motor2B PB7

void setup() {
  // Set up the GPIO pins for the IR sensor array as input pins with pull-up resistors
  pinMode(IR1, INPUT_PULLUP);
  pinMode(IR2, INPUT_PULLUP);
  pinMode(IR3, INPUT_PULLUP);
  pinMode(IR4, INPUT_PULLUP);
  pinMode(IR5, INPUT_PULLUP);

  // Set up the GPIO pins for the motor driver as output pins
  pinMode(motor1A, OUTPUT);
  pinMode(motor1B, OUTPUT);
  pinMode(motor2A, OUTPUT);
  pinMode(motor2B, OUTPUT);
}

void loop() {
  // Read the digital values from each IR sensor
  int ir1 = digitalRead(IR1);
  int ir2 = digitalRead(IR2);
  int ir3 = digitalRead(IR3);
  int ir4 = digitalRead(IR4);
  int ir5 = digitalRead(IR5);

  // Check the sensor readings to determine the direction of the line
  if (ir1 == LOW && ir2 == HIGH && ir3 == HIGH && ir4 == HIGH && ir5 == LOW) {
    // Line is going straight ahead
    digitalWrite(motor1A, HIGH);
    digitalWrite(motor1B, LOW);
    digitalWrite(motor2A, HIGH);
    digitalWrite(motor2B, LOW);
  } else if (ir1 == HIGH && ir2 == HIGH && ir3 == HIGH && ir4 == LOW && ir5 == LOW) {
    // Line is turning slightly to the right
    digitalWrite(motor1A, HIGH);
    digitalWrite(motor1B, LOW);
    digitalWrite(motor2A, LOW);
    digitalWrite(motor2B, LOW);
  } else if (ir1 == HIGH && ir2 == HIGH && ir3 == LOW && ir4 == LOW && ir5 == LOW) {
    // Line is turning more sharply to the right
    digitalWrite(motor1A, HIGH);
    digitalWrite(motor1B, LOW);
    digitalWrite(motor2A, LOW);
    digitalWrite(motor2B, LOW);
  } else if (ir1 == LOW && ir2 == LOW && ir3 == HIGH && ir4 == HIGH && ir5 == HIGH) {
    // Line is turning slightly to the left
    digitalWrite(motor1A, LOW);
    digitalWrite(motor1B, LOW);
    digitalWrite(motor2A, HIGH);
    digitalWrite(motor2B, LOW);
  } else if (ir1 == LOW && ir2 == LOW && ir3 == LOW && ir4 == HIGH && ir5 == HIGH) {
    // Line is turning more sharply to the left
    digitalWrite(motor1A, LOW);
    digitalWrite(motor1B, LOW);
    digitalWrite(motor2A, HIGH);
    digitalWrite(motor2B, LOW);
  } else if (ir1 == LOW && ir2 == LOW && ir3 == LOW && ir4 == LOW && ir5 == LOW) {
    // Line is lost
    digitalWrite(motor1A, LOW);
    digitalWrite(motor1B, LOW);
    digitalWrite(motor2A, LOW);
    digitalWrite(motor2B, LOW);
  }
}