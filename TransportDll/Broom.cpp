#include"Broom.h"

Broom::Broom() :AirTrpt(20, 7) {
	name = "Broom";
}

double Broom::RaceTime(Transport* Trnsp, double dist) {
	double time, reduce;
	reduce = dist / 1000;
	time = (dist * reduce / 100) / speed;
	return time;
}