//******************************
// Made for STM32F411CEU6 board
//******************************

// Note:- Should be configured first if used for other boards, like blue pill or Nucleo boards

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN (PC13) as an output.
  pinMode(LED_BUILTIN, OUTPUT);     // LED_BUILTIN = PC13 as builtin led is connected to PC13
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}