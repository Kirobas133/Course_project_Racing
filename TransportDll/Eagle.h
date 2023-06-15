#pragma once
#include"AirTransport.h"

class Eagle final :public AirTrpt {
public:
	TRANSPORT_API Eagle();
protected:
	double RaceTime(Transport* Trnsp, int dist) final override;
};