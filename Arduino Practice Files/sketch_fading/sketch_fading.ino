
// Fading an LED

int brightness = 0; //how bright the LED is
int fadeAmount =5;  //how many points to fade the LED by

void setup() {
  // put your setup code here, to run once:
pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(6, brightness);

brightness = brightness + fadeAmount;

if (brightness == 0 || brightness == 255)
  {
   fadeAmount = -fadeAmount;
  }
 delay(30);
}
