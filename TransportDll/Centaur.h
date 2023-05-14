#pragma once
#include"GroundTransport.h"

class Centaur :public GroundTrpt {
public:
	Centaur();
	int RaceTime(Centaur trnsp, int dist);
};