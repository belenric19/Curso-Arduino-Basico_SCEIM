int led1 = 8;
int led2 = 9;
int led3 = 10;
int tiempo = 500;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH);
  delay(tiempo);
  digitalWrite(led1, LOW);

  digitalWrite(led2, HIGH);
  delay(tiempo);
  digitalWrite(led2, LOW);

  digitalWrite(led3, HIGH);
  delay(tiempo);
  digitalWrite(led3, LOW);
}
