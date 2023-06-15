#include "GroundTransport.h"

GroundTrpt::GroundTrpt(int speed, int ident, double firstpause, double secondpause,
	double otherpause, int timetopause) :Transport(speed, ident),
	firstpause(firstpause),
	secondpause(secondpause),
	otherpause(otherpause),
	timetopause(timetopause)
{
	//this->firstpause = firstpause;
	//this->secondpause = secondpause;
	//this->otherpause = otherpause;
	//this->timetopause = timetopause;
}

double GroundTrpt::RaceTime(Transport* Trnsp, int dist) {
	double time;

	time = dist / (this->speed);
	if (time <= timetopause) {
		return time;
	}
	else {
		double temptime = time;
		temptime = temptime - timetopause;
		time = time + firstpause;
		if (temptime <= timetopause) {
			return time;
		}
		else {
			temptime = temptime - timetopause;
			time = time + secondpause;
			if (temptime <= timetopause) {
				return time;
			}
			else {
				while (temptime > 0) {
					temptime = temptime - timetopause;
					time = time + otherpause;
				}
				return time;
			}
		}
	}
}