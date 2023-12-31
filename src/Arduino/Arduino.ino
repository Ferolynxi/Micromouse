//*************************
// Made for Arduino boards
//*************************

// Note:- Should be configured first for specific board(s) being used/tested.

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN (13) as an output.
  pinMode(LED_BUILTIN, OUTPUT);     // LED_BUILTIN = 13 as builtin led is connected to Digital Pin 13
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}