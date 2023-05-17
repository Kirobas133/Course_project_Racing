#pragma once
#include"AirTransport.h"

class Air_carpet :public AirTrpt {
public:
	Air_carpet();
protected:
	int RaceTime(Transport* Trnsp, int dist) override;
};