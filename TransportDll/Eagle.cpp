#include"Eagle.h"

Eagle::Eagle() :AirTrpt(8, 6) {
	name = "����";
}
double Eagle::RaceTime(Transport* Trnsp, int dist) {
	double time;

	time = (dist - (dist * 6 / 100)) / speed;
	return time;
}
