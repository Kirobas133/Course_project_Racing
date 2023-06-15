#include"Broom.h"

Broom::Broom() :AirTrpt(20, 7) {
	name = "Метла";
}

double Broom::RaceTime(Transport* Trnsp, int dist) {
	double time;
	double reduce;

	reduce = dist / 1000;
	time = (dist - (dist * reduce / 100)) / speed;
	return time;
}