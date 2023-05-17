#include"Eagle.h"

Eagle::Eagle() :AirTrpt(8, 6) {
	name = "Eagle";
}
int Eagle::RaceTime(Transport* Trnsp, int dist) {
	int time;
	time = (dist * 6 / 100) / speed;
	return time;
}
