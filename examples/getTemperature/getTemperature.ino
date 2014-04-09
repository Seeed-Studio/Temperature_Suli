// demo of Grove - Temperature

#include <Wire.h>
#include <SoftwareSerial.h>
#include "Suli.h"
#include "Temperature_Arduino.h"


const int pinTemp = A0;

Temperature temp;


void setup()
{
    Serial.begin(115200);
    temp.begin(pinTemp);
}

void loop()
{
    Serial.println(temp.get());
    
    delay(100);
}

