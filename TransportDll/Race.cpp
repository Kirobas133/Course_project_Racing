#include"Race.h"

Race::Race(Transport* TranspMass, int TranspCounts, int Dist) {
	this->TranspMass = TranspMass;
	this->TranspCounts = TranspCounts;
	this->Dist = Dist;
}
Transport* Race::RaceResult(Race RaceList) {
	Transport* temp;
	
	for (int i = 0; i < (TranspCounts - 1); i++) {
		for (int j = 0; j < (TranspCounts - i - 1); j++){
			if (TranspMass[j].RaceTime(&TranspMass[j], Dist) >
				TranspMass[j + 1].RaceTime(&TranspMass[j + 1], Dist)) {
				temp = &TranspMass[j];
				TranspMass[j] = TranspMass[j + 1];
				TranspMass[j + 1] = *temp;
			}
		}
	}
	return TranspMass;
}