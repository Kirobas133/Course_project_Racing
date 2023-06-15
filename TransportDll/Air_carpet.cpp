#include"Air_carpet.h"

Air_carpet::Air_carpet() :AirTrpt(10, 5) {
	name = "Ковер-самолет";
}

double Air_carpet::RaceTime(Transport* Trnsp, int dist) {
	double time;
	
	//switch (dist) {
	//case 0 ... 1000:
	//}
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
		return time;
	}
	else {
		time = (dist - (dist * 5 / 100)) / speed;
		return time;
	}
}