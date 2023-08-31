#pragma once
#include "land.h"
#include <string>

#ifdef RESURSES_EXPORTS
#define RESURS_API __declspec(dllexport)
#else
#define RESURS_API __declspec(dllimport)
#endif



RESURS_API class boots_runners : public land{
	int v = 6;
	int t = 60;
	double dt1 = 10;
	double dt = 5;
	double dt2 = dt;
	int res = 0;
public:
	std::string name = "Сапоги-вездеходы";
	boots_runners() : land(v, t, dt1, dt2, dt) {};
	RESURS_API int get_res();
	RESURS_API virtual int time(int s) override;
};