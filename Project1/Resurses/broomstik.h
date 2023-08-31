#pragma once
#include "flying.h"
#include <string>

#ifdef RESURSES_EXPORTS
#define RESURS_API __declspec(dllexport)
#else
#define RESURS_API __declspec(dllimport)
#endif


RESURS_API class broomstick : public flying {
	int v = 20;
	int s;
	int res = 0;
	double k = 0;
public:
	std::string name = "Метла";
	RESURS_API virtual int time(int s) override;
	RESURS_API int get_res();
};