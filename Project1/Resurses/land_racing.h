#pragma once
#ifdef RESURSES_EXPORTS
#define RESURS_API __declspec(dllexport)
#else
#define RESURS_API __declspec(dllimport)
#endif
#include "racing.h"
#include "camel.h"
#include "camel_fast.h"
#include "boots-runners.h"
#include "centaur.h"
#include <iostream>
#include <string>
#include "sort.h"




RESURS_API class land_racing : public racing {
	int s = 0;
	int n_racers = 0;
	camel Camel_l;
	camel_fast Camel_fast_l;
	boots_runners Boots_runners_l;
	centaur Centaur_l;
	std::string notice;
	std::string s1 = " ";
	std::string s2 = " ";
	std::string s3 = " ";
	std::string s4 = " ";
	std::string* text1 = new std::string[7]{};
public:
	land_racing(int s_)  {
		s = s_;
	}
	Sort LandR[4] = {};
	RESURS_API void del();
	RESURS_API void check(std::string m);
	RESURS_API void uncheñk(std::string m);
	RESURS_API void error();
	RESURS_API void sort();
	RESURS_API int get_racers();
	RESURS_API std::string* start();
	RESURS_API std::string choose();
	RESURS_API void run(land* Land);
	RESURS_API std::string text();
	RESURS_API void choose_racer (int racer);
	RESURS_API std::string choosing();
};