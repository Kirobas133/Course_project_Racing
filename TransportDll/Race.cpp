#include"Race.h"

Race::Race(Transport* TranspMass, int TranspCounts, int Dist) {
	this->TranspMass = TranspMass;
	this->TranspCounts = TranspCounts;
	this->Dist = Dist;
}
Transport* Race::RaceResult(Race RaceList) {
	
	for (int i = 0; i < (RaceList.TranspCounts - 1); i++) {
		for (int j = 0; j < (RaceList.TranspCounts - i - 1); j++){
			if (RaceList.TranspMass[j].RaceTime(&RaceList.TranspMass[j], Dist) >
				RaceList.TranspMass[j + 1].RaceTime(&RaceList.TranspMass[j + 1], Dist)) {

			}
		}
	}
}