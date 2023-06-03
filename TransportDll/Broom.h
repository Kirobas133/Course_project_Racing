#pragma once
#include"AirTransport.h"

class Broom :public AirTrpt {
public:
	Broom();
protected:
	double RaceTime(Transport* Trnsp, double dist) override;
};


