#pragma once
#include "camel.h"
#include "camel_fast.h"
#include "boots-runners.h"
#include "centaur.h"
#include <iostream>
#include <string>
#include "sort.h"
#include "eagle.h"
#include "broomstik.h"
#include "fly_carpet.h"
#include "racing.h"


#ifdef RESURSES_EXPORTS
#define RESURS_API __declspec(dllexport)
#else
#define RESURS_API __declspec(dllimport)
#endif


RESURS_API class all : public racing {
	int s = 0;
	int n_racers = 0;
	std::string notice;
	eagles Eagle_all;
	broomstick Broomstick_all;
	fly_carpet Fly_carpet_all;
	camel Camel;
	camel_fast Camel_fast;
	boots_runners Boots_runners;
	centaur Centaur;
	std::string s1 = " ";
	std::string s2 = " ";
	std::string s3 = " ";
	std::string s4 = " ";
	std::string s5 = " ";
	std::string s6 = " ";
	std::string s7 = " ";
	std::string* text1 = new std::string[7]{};
public:
	all(int s_) {
		s = s_;
	}
	Sort allR[7] = {};
	RESURS_API void del();
	RESURS_API void check(std::string m);
	RESURS_API void uncheñk(std::string m);
	RESURS_API void sort();
	RESURS_API int get_racers();
	RESURS_API std::string* start();
	RESURS_API std::string choose();
	RESURS_API void run_f(flying* Fly);
	RESURS_API void run_l(land* Land);
	RESURS_API std::string text();
	RESURS_API void choose_racer(int racer);
	RESURS_API std::string choosing();
};