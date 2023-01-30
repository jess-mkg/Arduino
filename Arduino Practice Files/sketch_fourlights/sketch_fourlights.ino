

void setup() {
  // put your setup code here, to run once:
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (8, HIGH);
digitalWrite (9, LOW);
digitalWrite (10, LOW);
digitalWrite (11, LOW);
delay(200);

digitalWrite (8, LOW);
digitalWrite (9, HIGH);
digitalWrite (10, LOW);
digitalWrite (11, LOW);
delay(200);

digitalWrite (8, LOW);
digitalWrite (9, LOW);
digitalWrite (10, HIGH);
digitalWrite (11, LOW);
delay(200);

digitalWrite (8, LOW);
digitalWrite (9, LOW);
digitalWrite (10, LOW);
digitalWrite (11, HIGH);
delay(200);
//////////////////

digitalWrite (11, LOW);
digitalWrite (10, HIGH);
digitalWrite (9, LOW);
digitalWrite (8, LOW);
delay(200);

digitalWrite (11, LOW);
digitalWrite (10, LOW);
digitalWrite (9, HIGH);
digitalWrite (8, LOW);
delay(200);

}
