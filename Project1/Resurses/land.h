#pragma once
#include "vehicles.h"

#ifdef RESURSES_EXPORTS
#define RESURS_API __declspec(dllexport)
#else
#define RESURS_API __declspec(dllimport)
#endif


RESURS_API class land : public vehicles {
protected:
	int v, t;
	double dt1, dt2, dt;
public:
	land(int v_, int t_, double dt1_, double dt2_, double dt_) {
		v = v_;
		t = t_;
		dt1 = dt1_;
		dt2 = dt2_;
		dt = dt_;
	}
	
	virtual int time(int s) = 0;
};