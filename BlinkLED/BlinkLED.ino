/*
 * Blink
 *
 * The basic Arduino example, modified to work for Orangutans.  
 * Turns on an LED for one second, then off for one second, 
 * and so on...  We use pin 1 because Orangutans have an LED
 * on PD1, which corresponds to Arduino pin 1.
 *
 * http://www.arduino.cc/en/Tutorial/Blink
 */
 
int ledPin = 1;                 // LED connected to digital pin 1 (PD1) on Orangutans
int redPin = 7;
 
void setup()                    // run once, when the sketch starts
{
  pinMode(ledPin, OUTPUT);      // sets the digital pin as output
  pinMode(redPin, OUTPUT);
}
 
void loop()                     // run over and over again
{
  digitalWrite(ledPin, HIGH);   // sets the LED on
  delay(1000);                  // waits for a second
  digitalWrite(redPin, HIGH);
  delay(1000); 
  digitalWrite(ledPin, LOW);    // sets the LED off
  delay(1000);                  // waits for a second
  digitalWrite(redPin, LOW);
  delay(1000);
}
