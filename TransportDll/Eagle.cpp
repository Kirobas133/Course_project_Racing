#include"Eagle.h"

Eagle::Eagle() :AirTrpt(8, 6) {
	name = "Eagle";
}
double Eagle::RaceTime(Transport* Trnsp, double dist) {
	int time;
	time = (dist * 6 / 100) / speed;
	return time;
}
