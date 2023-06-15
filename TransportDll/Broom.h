#pragma once
#include"AirTransport.h"

class Broom final :public AirTrpt {
public:
	TRANSPORT_API Broom();
protected:
	double RaceTime(Transport* Trnsp, int dist) final override;
};


