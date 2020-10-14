#include "M5Atom.h"

void setup()
{
    M5.begin();
    pinMode(19, OUTPUT);
    digitalWrite(19, HIGH);
}

void loop()
{
    M5.update();
    if (M5.Btn.isPressed())
    {
      digitalWrite(19, LOW);
    }
    else {
      digitalWrite(19, HIGH);
    }
}
