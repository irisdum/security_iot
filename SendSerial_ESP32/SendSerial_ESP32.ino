#include "M5Atom.h"

void setup()
{
    M5.begin();
    Serial1.begin(9600);
}

void loop()
{
    M5.update();
    if (M5.Btn.isPressed())
    {
      Serial1.write("Hello Nono");
    }
}
