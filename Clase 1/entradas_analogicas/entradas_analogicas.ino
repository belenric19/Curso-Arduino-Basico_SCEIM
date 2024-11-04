int sensor = A0;
int led = 7;

int lectura;

void setup() {
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);

  Serial.begin(9600);

}

void loop() {
  lectura = analogRead(sensor);
  Serial.println(lectura);

  if(lectura > 750){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
  delay(100);


}
