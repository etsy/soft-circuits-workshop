/*
  Pulse
  Pulses the internal LED to demonstrate the analogWrite function

  This example code is in the public domain.

  To upload to your Gemma or Trinket:
  1) Select the proper board from the Tools->Board Menu
  2) Select USBtinyISP from the Tools->Programmer
  3) Plug in the Gemma/Trinket, make sure you see the green LED lit
  4) For windows, install the USBtiny drivers
  5) Press the button on the Gemma/Trinket - verify you see
     the red LED pulse. This means it is ready to receive data
  6) Click the upload button above within 10 seconds
*/

int led = 1; // pulse 'digital' pin 1 - AKA the built in red LED

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  for (int i=0; i<256; i++) {
    analogWrite(led, i);  // PWM the LED from 0 to 255 (max)
    delay(5);
  }
  for (int i=255; i>=0; i--) {
    analogWrite(led, i);  // PWM the LED from 255 (max) to 0
    delay(5);
  }
}
