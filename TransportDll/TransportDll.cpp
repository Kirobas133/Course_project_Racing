#include"TransportDll.h"

Transport::Transport(int speed, int ident) {
	this->speed = speed;
	this->ident = ident;
}

double Transport::RaceTime(Transport* trsp, double dist) {
	return 0;
};

//Transport::Transport(){}