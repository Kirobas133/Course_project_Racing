#pragma once
#include"AirTransport.h"

class Air_carpet :public AirTrpt {
public:
	Air_carpet();
	int RaceTime(Air_carpet trnsp, int dist);
};