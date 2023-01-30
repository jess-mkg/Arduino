
  // put your setup code here, to run once


void setup() {
  pinMode(10, OUTPUT);
 
}


void loop() {
  // put your main code here, to run repeatedly
int reading = analogRead(A0);
int bright = reading/4;

analogWrite(10, bright);

  
  delay(50);
}
