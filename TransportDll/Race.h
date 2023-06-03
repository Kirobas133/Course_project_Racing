#pragma once
#include"TransportDll.h"

class Race {
protected:
	Transport** TranspMass;
	int TranspCounts, Dist;
public:
	Race(Transport** TranspMass, int TranspCounst, int Dist);
	void RaceResult(double* RaceTimes);
	void PrintRace(double* RaceTimes);
};