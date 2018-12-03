#include <IRremote.h>
 
IRsend irsend;
 
void setup()
{
  Serial.begin(9600);
}
 
void loop() {
 
    Serial.println("send ir signal");
    irsend.sendNEC(0xFF18E7, 32); 
    delay(100);
 
}
