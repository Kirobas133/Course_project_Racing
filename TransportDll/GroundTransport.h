#pragma once
#include "TransportDll.h"

class GroundTrpt :public Transport {
protected:
	double firstpause, secondpause, otherpause;
	int timetopause;
	GroundTrpt(int speed, int ident, double firstpause, double secondpause, double otherpause, int timetopause);
	double RaceTime(Transport* Trnsp, int dist) final override;
};