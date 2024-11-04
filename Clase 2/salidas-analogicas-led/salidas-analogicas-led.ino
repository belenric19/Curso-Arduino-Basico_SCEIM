int led = 9;
int brillo;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  for (brillo = 0; brillo <= 255; brillo += 5) {
    analogWrite(led, brillo);
    delay(30);
  }

  for (brillo = 255; brillo >= 0; brillo -= 5) {
    analogWrite(led, brillo);
    delay(30);
  }
}
