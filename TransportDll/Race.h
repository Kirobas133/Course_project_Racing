#pragma once
#include"TransportDll.h"

class Race {
protected:
	Transport* TranspMass;
	int TranspCounts;
public:
	Race(Transport* TranspMass, int TranspCounst);
	Transport* RaceResult(Race RaceList);
};