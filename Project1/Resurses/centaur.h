#pragma once
#include "land.h"
#include <string>

#ifdef RESURSES_EXPORTS
#define RESURS_API __declspec(dllexport)
#else
#define RESURS_API __declspec(dllimport)
#endif


RESURS_API class centaur : public land {
	int v = 15;
	int t = 8;
	double dt1 = 2;
	double dt = dt1;
	double dt2 = dt1;
	int res = 0;
public:
	std::string name = "Кентавр";
	centaur() : land(v, t, dt1, dt2, dt) {};
	RESURS_API int get_res();
	RESURS_API virtual int time(int s) override;
};