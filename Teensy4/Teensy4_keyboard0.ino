/* Simple USB Keyboard Example
   Teensy becomes a USB keyboard and types characters

   You must select Keyboard from the "Tools > USB Type" menu

   This example code is in the public domain.
*/

int count = 0;

void setup() {
  pinMode(6, INPUT);
  digitalWrite(6, HIGH); 
  Serial.begin(9600);
  delay(1000);
  
}

void loop() {
  // Your computer will receive these characters from a USB keyboard
  
  if (digitalRead(6)) {
    // do this if C2 is high
  } else {
   Keyboard.print("Hello World ");
   // You can also send to the Arduino Serial Monitor
   Keyboard.println(count);
   Serial.println(count);
   // increment the count
   count = count + 1;
   delay(5000);
   digitalWrite(6, HIGH); 
  }

}
