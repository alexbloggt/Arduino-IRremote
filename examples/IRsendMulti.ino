/*
 * IRremote: IRsendDemo - demonstrates sending IR codes with IRsend
 * Created by Khaireddine Hlali to support multiple transmitters 
 */

#include <IRremote.h>

IRsend  irsend0;
IRsend1 irsend1;
IRsend2 irsend2;

void setup()
{
  Serial.begin(9600);
}

void loop() {
  if (Serial.read() != -1) {
    for (int i = 0; i < 3; i++) {
      irsend0.sendSony(0xa90, 12); // pin 3
      irsend1.sendSony(0xa90, 12); // pin 9
      irsend2.sendSony(0xa90, 12); // pin 10
    }
  }
}
