#include "Arduino.h"
#include "cmmcInterval.h"

cmmcInterval::cmmcInterval(int iTimeInterval, void (funcInterval)())
{
	iMillisInterval = iTimeInterval;
	functionInterval = funcInterval;
}

void cmmcInterval::Update()
{
  lMillisCurrent = millis();
 
  if (lMillisCurrent - lMillisPrevious >= iMillisInterval) {

    //Serial.println("run : "+(String)(lMillisCurrent - lMillisPrevious));
    
    lMillisPrevious = lMillisCurrent;
    functionInterval();

  }

}
