#include"Air_carpet.h"

Air_carpet::Air_carpet() :AirTrpt(10, 5) {
	name = "Air carpet";
}

double Air_carpet::RaceTime(Transport* Trnsp, double dist) {
	double time;
	if (dist < 1000) {
		time = dist / speed;
		return time;
	}
	else if (dist < 5000) {
		time = (dist - (dist * 3 / 100)) / speed;
		return time;
	}
	else if (dist < 10000) {
		time = (dist - (dist * 10 / 100)) / speed;
	}
	else {
		time = (dist - (dist * 5 / 100)) / speed;
	}
}