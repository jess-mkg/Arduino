//Blink test
//pin 13 has an LED connected on mosy boards
int led = 13;

int led2 = 7;

void setup() {
  // put your setup code here, to run once:
  //initalise the digital pin as an output
pinMode(led, OUTPUT);
pinMode(led2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led, HIGH);  // turn the LED on HIGH voltage
delay(1000);
digitalWrite(led, LOW);
delay(1000);              // wait a sec
digitalWrite(led2, LOW);   // turn it to LOW
delay(1000);
digitalWrite(led2, HIGH);
delay(1000);    
// wait a second



}
