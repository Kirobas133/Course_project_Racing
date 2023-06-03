#pragma once
#include<string>

class Transport {
	friend class Race;
protected:
	Transport(int speed, int ident);
	std::string name;
	int speed;
	int ident;
	virtual double RaceTime(Transport* trsp, double dist);
};