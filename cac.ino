/* Etsy soft circuits workshop code: blinks "code as craft" in morse
 *
 * Arduino language reference: http://arduino.cc/en/Reference/HomePage
 * Steps to set up the Arduino IDE to program the Gemma:
 *    https://learn.adafruit.com/introducing-gemma/setting-up-with-arduino-ide
 */

int pin;
int pinD0 = 0;
int pinD1 = 1;
int pinD2 = 2;

void setup()
{
  pinMode(pinD0, OUTPUT);
  pinMode(pinD1, OUTPUT);
  pinMode(pinD2, OUTPUT);
}

void loop()
{
  //code as craft:
  //-.-. --- -.. . / .- ... / -.-. .-. .- ..-. -
  pin = pinD0;
  dash();dot();dash();dot();
  dash();dash();dash();
  dash();dot();dot();
  dot();
  delay(300);
  pin = pinD1;
  dot();dash();
  dot();dot();dot();
  delay(300);
  pin = pinD2;
  dash();dot();dash();dot();
  dot();dash();dot();
  dot();dash();
  dot();dot();dash();dot();
  dash();
  delay(3000);
}

void dot()
{
  digitalWrite(pin, HIGH);
  delay(150);
  digitalWrite(pin, LOW);
  delay(150);
}

void dash()
{
  digitalWrite(pin, HIGH);
  delay(600);
  digitalWrite(pin, LOW);
  delay(150);
}