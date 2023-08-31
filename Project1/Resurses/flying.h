#pragma once
#include "vehicles.h"

#ifdef RESURSES_EXPORTS
#define RESURS_API __declspec(dllexport)
#else
#define RESURS_API __declspec(dllimport)
#endif


RESURS_API class flying : public vehicles {

public:
	virtual int time(int s) = 0;
};