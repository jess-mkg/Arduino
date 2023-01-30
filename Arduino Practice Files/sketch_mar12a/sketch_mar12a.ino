void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(6,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int btn = digitalRead(6);
  if(btn == 1){
    Serial.println("Button Pressed..");
  } else {
    Serial.println(Button Unpressed..");
  }
  delay(200)
}
