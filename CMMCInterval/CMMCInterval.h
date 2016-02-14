#ifndef cmmcInterval_h
#define cmmcInterval_h

#include "Arduino.h"

class cmmcInterval
{
	public:
	cmmcInterval(int iTimeInterval,void (funcInterval)());
	void Update();

	private:
	int iMillisInterval;
	unsigned long lMillisPrevious;
	unsigned long lMillisCurrent;
	void(*functionInterval)();
};

#endif
