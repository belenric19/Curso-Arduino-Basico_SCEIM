int in1 = 8;
int in2 = 9;
int velocidad = 10; //pin PWM

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(velocidad, OUTPUT);
}

void loop() {
  // Motor adelante
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(velocidad, 200);  
  delay(2000);

  // Detiene el motor
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  delay(1000);

  // Motor atras
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(velocidad, 200);  
  delay(2000);

  // Detiene el motor
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  delay(1000);
}
