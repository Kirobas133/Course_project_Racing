#pragma once
#include "TransportDll.h"

class GroundTrpt :public Transport {
protected:
	int fp, sp, op, tmp;
	GroundTrpt(int speed, int ident);
	int RaceTime(Transport* Trnsp, int dist) override;
};