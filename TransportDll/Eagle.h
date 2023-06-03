#pragma once
#include"AirTransport.h"

class Eagle :public AirTrpt {
public:
	TRANSPORT_API Eagle();
protected:
	double RaceTime(Transport* Trnsp, double dist) override;
};