#pragma once
#include "land.h"
#include <string>

#ifdef RESURSES_EXPORTS
#define RESURS_API __declspec(dllexport)
#else
#define RESURS_API __declspec(dllimport)
#endif


RESURS_API class camel_fast : public land {
	int v = 40;
	int t = 10;
	double dt1 = 5;
	double dt = 8;
	double dt2 = 6.5;
	int res = 0;
public:
	std::string name = "Верблюд-быстроход";
	camel_fast() : land(v, t, dt1, dt2, dt) {};
	RESURS_API int get_res();
	RESURS_API virtual int time(int s) override;
};