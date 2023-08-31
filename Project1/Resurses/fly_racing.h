#pragma once
//#pragma warning (disable: 430, 3646, 2504, 2614)
#include <iostream>
#include "vehicles.h"
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


RESURS_API class fly_racing : public racing {
	int s = 0;
	int n_racers = 0;
	std::string notice;
	eagles Eagle;
	broomstick Broomstick;
	fly_carpet Fly_carpet;
	std::string s1 = " ";
	std::string s2 = " ";
	std::string s3 = " ";
	std::string* text1 = new std::string[7]{};
public:
	fly_racing(int s_) {
		s = s_;
	}
	Sort flyR[3] = {};
	RESURS_API void del();
	RESURS_API void check(std::string m);
	RESURS_API void uncheñk(std::string m);
	RESURS_API void error();
	RESURS_API void sort();
	RESURS_API int get_racers();
	RESURS_API std::string* start();
	RESURS_API std::string choose();
	RESURS_API void run(flying* Fly);
	RESURS_API std::string text();
	RESURS_API void choose_racer(int racer);
	RESURS_API std::string choosing();
};