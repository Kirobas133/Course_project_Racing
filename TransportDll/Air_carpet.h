#pragma once
#include"AirTransport.h"

class Air_carpet :public AirTrpt {
public:
	Air_carpet();
protected:
	double RaceTime(Transport* Trnsp, double dist) override;
};