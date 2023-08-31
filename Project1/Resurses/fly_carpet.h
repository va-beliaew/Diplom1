#pragma once
#include "flying.h"
#include <string>

#ifdef RESURSES_EXPORTS
#define RESURS_API __declspec(dllexport)
#else
#define RESURS_API __declspec(dllimport)
#endif


RESURS_API class fly_carpet : public flying {
	int v = 10;
	double k = 0;
	int res = 0;
	int s;
public:
	std::string name = "Ковер-самолет";
	RESURS_API virtual int time(int s) override;
	RESURS_API int get_res();
};