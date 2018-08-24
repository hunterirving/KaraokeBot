#include "MIDIUSB.h"
#include "Servo.h"

Servo myservo;

int pos = 0;

void setup() {
  myservo.attach(9);
  myservo.write(8);
}

void loop() {
  midiEventPacket_t rx;
  
  do {
    rx = MidiUSB.read();
    if (rx.header != 0) {
      if (rx.header == 9) /*note on...*/
      {
        myservo.write(0); /*...open mouth*/
      }
      
      else if(rx.header == 8) /*note off...*/
      {
        myservo.write(8); /*...close mouth*/
      }
    }
  } while (rx.header != 0);
  
}
