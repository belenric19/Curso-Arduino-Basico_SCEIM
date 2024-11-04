#include <SoftwareSerial.h>

/*
Bluetooth RX -> 11 (TX) del Arduino
Bluetooth TX -> 10 (RX) del Arduino
*/

SoftwareSerial bluetooth(10, 11);

int led = 8;
char comando;

void setup() {
  pinMode(led, OUTPUT);
  bluetooth.begin(38400);
  Serial.begin(9600); 
}

void loop() {
  if (bluetooth.available()) {
    comando = bluetooth.read(); 
    Serial.println(comando); 
    
    if (comando == '1') {
      digitalWrite(led, HIGH);
    } 
    else if (comando == '0') {
      digitalWrite(led, LOW);  
    }
  }
}
