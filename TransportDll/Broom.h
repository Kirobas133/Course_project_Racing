#pragma once
#include"AirTransport.h"

class Broom :public AirTrpt {
public:
	TRANSPORT_API Broom();
protected:
	double RaceTime(Transport* Trnsp, double dist) override;
};


