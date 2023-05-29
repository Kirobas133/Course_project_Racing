#pragma once
#include<string>

class Transport {
	friend class Race;
protected:
	Transport(int speed, int ident);
	std::string name;
	int speed;
	int ident;
	virtual int RaceTime(Transport* trsp, int dist);
public:
	Transport& Race();
};