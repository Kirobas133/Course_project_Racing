#pragma once
#include "TransportDll.h"

class GroundTrpt :public Transport {
protected:
	double fp, sp, op;
	int tmp;
	GroundTrpt(int speed, int ident, double fp, double sp, double op, int tmp);
	int RaceTime(Transport* Trnsp, int dist) override;
};