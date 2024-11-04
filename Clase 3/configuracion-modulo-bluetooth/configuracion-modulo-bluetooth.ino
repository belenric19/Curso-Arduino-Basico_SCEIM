#include <SoftwareSerial.h>   

/*
Bluetooth RX -> 11 (TX) del Arduino
Bluetooth TX -> 10 (RX) del Arduino
*/

SoftwareSerial BT(10, 11); 
 
void setup()
{
  Serial.begin(9600); 
  BT.begin(38400);    
  Serial.println("Listo");
}
 
void loop()
{
  if(BT.available())    
  {
    Serial.write(BT.read());
  }
 
  if(Serial.available())  
  {
     BT.write(Serial.read());
  }
}
//Finalmente, para salir del modo de configuración:
//AT+RESET