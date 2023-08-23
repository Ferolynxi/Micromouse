//*************************************
// Made for DOIT ESP32 DEVKIT V1 board
//*************************************

// Note:- Should be configured first if used for other boards, like esp8266 or other ESP32 boards
// In some boards, you may have to long press the BOOT button on the board while
// you see “Connecting….” in the serial monitor to upload the code succesfully.

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN (2) as an output.
  pinMode(LED_BUILTIN, OUTPUT);     // LED_BUILTIN = 2 as builtin led is connected to the pin D2
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}