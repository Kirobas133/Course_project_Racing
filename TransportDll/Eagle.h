#pragma once
#include"AirTransport.h"

class Eagle :public AirTrpt {
public:
	Eagle();
protected:
	int RaceTime(Transport* Trnsp, int dist) override;
};