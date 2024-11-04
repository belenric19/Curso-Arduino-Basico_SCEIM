int led = 7;
int pulsador = 8;

int estado;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(pulsador, INPUT);

  Serial.begin(9600);
}

void loop() {
  estado = digitalRead(pulsador);

  if(estado == 1){
    digitalWrite(led, HIGH);
    Serial.println("LED ON");
  }
  else{
    digitalWrite(led, LOW);
    Serial.println("LED OFF");
  }

  //Serial.println(estado);
  delay(100);

}