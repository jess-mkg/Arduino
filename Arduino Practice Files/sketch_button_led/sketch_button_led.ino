
int led = 6;

void setup() {
  // put your setup code here, to run once:
pinMode(6, OUTPUT);
pinMode(5, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int btn = digitalRead(5);
  if (btn == 1){
    digitalWrite(6, HIGH); 
  }
  else {
  digitalWrite(6, LOW);
  }
delay(200);

}
