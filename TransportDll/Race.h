#pragma once
#include"TransportDll.h"

class Race {
protected:
	Transport** TranspMass;
	int TranspCounts;
	double Dist;
public:
	TRANSPORT_API Race(Transport** TranspMass, int TranspCounst, double Dist);
	TRANSPORT_API void RaceResult(double* RaceTimes);
	TRANSPORT_API void PrintRace(double* RaceTimes);
};