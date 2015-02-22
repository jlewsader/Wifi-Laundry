// This #include statement was automatically added by the Spark IDE.
#include "thingspeak/thingspeak.h"

ThingSpeakLibrary::ThingSpeak thingspeak ("7OB77HR44IS031ZH");

// Variable Setup
  // Read value from Analog Input Pin 0
  String vibration = String(analogRead(A0), DEC);


void setup()
{

}

void loop()
{
  
  // set ThingSpeak value
    thingspeak.recordValue(1, vibration);
    
  // send value
    thingspeak.sendValues();
    
    
    delay(16000);

}