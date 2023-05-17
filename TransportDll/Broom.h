#pragma once
#include"AirTransport.h"

class Broom :public AirTrpt {
public:
	Broom();
protected:
	int RaceTime(Transport* Trnsp, int dist) override;
};


