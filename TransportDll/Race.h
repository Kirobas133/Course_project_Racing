#pragma once
#include"TransportDll.h"

class Race {
protected:
	Transport** TranspMass;
	int TranspCounts;
	int Dist;
public:
	TRANSPORT_API Race(Transport** TranspMass, int TranspCounst, int Dist);
	TRANSPORT_API void RaceResult(double* RaceTimes);
	TRANSPORT_API void PrintRace(const double* RaceTimes);
};