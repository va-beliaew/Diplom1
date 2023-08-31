#pragma once
#include "flying.h"
#include <string>

#ifdef RESURSES_EXPORTS
#define RESURS_API __declspec(dllexport)
#else
#define RESURS_API __declspec(dllimport)
#endif


RESURS_API class eagles : public flying {
	int v = 8;
	double k = 0.06;
	int s=0;
	int res = 0;
public:
	std::string name = "Орел";
	RESURS_API virtual int time (int s) override;
	RESURS_API int get_res();
};