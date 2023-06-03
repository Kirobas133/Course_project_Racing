#pragma once
#include"AirTransport.h"

class Eagle :public AirTrpt {
public:
	Eagle();
protected:
	double RaceTime(Transport* Trnsp, double dist) override;
};