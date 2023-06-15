#pragma once
#include"AirTransport.h"

class Air_carpet final :public AirTrpt {
public:
	TRANSPORT_API Air_carpet();
protected:
	double RaceTime(Transport* Trnsp, int dist) final override;
};