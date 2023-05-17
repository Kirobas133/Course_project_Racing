#pragma once

#include "TransportDll.h"

class AirTrpt :public Transport {
protected:
	int fdist, sdist, tdist, fodist, reduce;
	AirTrpt(int speed, int ident/*, int fd, int sd, int td, int fod, int reduce*/);
/*	int RaceTime(Transport* Trnsp, int dist) override;*/
};