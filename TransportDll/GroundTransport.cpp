#include "GroundTransport.h"

GroundTrpt::GroundTrpt(int speed, int ident, double fp, double sp, double op, int tmp) :Transport(speed, ident) {
	this->fp = fp;
	this->sp = sp;
	this->op = op;
	this->tmp = tmp;
}

int GroundTrpt::RaceTime(Transport* Trnsp, int dist) {
	int time;

	time = dist / (this->speed);
	if (time <= tmp) {
		return time;
	}
	else {
		int temptime = time;
		temptime = temptime - tmp;
		time = time + fp;
		if (temptime <= tmp) {
			return time;
		}
		else {
			temptime = temptime - tmp;
			time = time + sp;
			while (temptime > 0) {
				temptime = temptime - tmp;
				time = time + op;
			}
			return time;
		}
	}
}