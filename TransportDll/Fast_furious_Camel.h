#pragma once
#include"GroundTransport.h"

class Fast_furious_Camel :public GroundTrpt {
public:
	Fast_furious_Camel();
	int RaceTime(Fast_furious_Camel trnsp, int dist);
};