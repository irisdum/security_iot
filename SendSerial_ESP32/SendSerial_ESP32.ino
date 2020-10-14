#include "M5Atom.h"

#define RXD2 22
#define TXD2 19

void setup()
{
    M5.begin();
    Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);
    Serial.println("Serial Txd is on pin: "+String(TX));
}

void loop()
{
    M5.update();
    if (M5.Btn.isPressed())
    {
      Serial2.write("Hello Nono");
    }
}
