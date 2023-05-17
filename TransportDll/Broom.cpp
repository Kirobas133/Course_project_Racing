#include"Broom.h"

Broom::Broom() :AirTrpt(20, 7) {
	name = "Broom";
}

int Broom::RaceTime(Transport* Trnsp, int dist) {
	int time, reduce;
	reduce = dist / 1000;
	time = (dist * reduce / 100) / speed;
	return time;
}