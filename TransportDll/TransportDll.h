#pragma once

#ifdef TRANSPORTDLL_EXPORTS
#define TRANSPORT_API __declspec(dllexport)
#else
#define TRANSPORT_API __declspec(dllimport)
#endif

#include<string>

class Transport {
	friend class Race;
protected:
	Transport(int speed, int ident);
	std::string name;
	int speed;
	int ident;
	virtual double RaceTime(Transport* trsp, int dist) = 0;
};