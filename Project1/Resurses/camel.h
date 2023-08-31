#pragma once
#include "land.h"
#include <string>

#ifdef RESURSES_EXPORTS
#define RESURS_API __declspec(dllexport)
#else
#define RESURS_API __declspec(dllimport)
#endif


RESURS_API class camel : public land {
	int v = 10;
	int t = 30;
	double dt1 = 5;
	double dt = 8;
	double dt2 = dt;
	int res = 0;
public:
	std::string name = "Верблюд";
	camel() : land(v, t, dt1, dt2, dt) {};
	RESURS_API int get_res();
	RESURS_API virtual int time(int s) override;
	
};
