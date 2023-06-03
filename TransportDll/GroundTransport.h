#pragma once
#include "TransportDll.h"

class GroundTrpt :public Transport {
protected:
	double fp, sp, op;
	int tmp;
	GroundTrpt(int speed, int ident, double fp, double sp, double op, int tmp);
	double RaceTime(Transport* Trnsp, double dist) override;
};