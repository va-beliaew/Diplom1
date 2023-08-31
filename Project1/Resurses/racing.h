#pragma once
//#pragma warning

#include "sort.h"


#ifdef RESURSES_EXPORTS
#define RESURS_API __declspec(dllexport)
#else
#define RESURS_API __declspec(dllimport)
#endif


RESURS_API bool operator> (Sort a, Sort b);


RESURS_API class racing {
	/*/double s = 0;
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
public:
	racing(double s_) {
		s = s_;
	}
	Sort allR[7];
	void check(std::string m);
	void uncheñk(std::string m);
	void sort();
	int get_racers();
	std::string start();
	std::string choose();
	void run_f(flying* Fly);
	void run_l(land* Land);
	std::string text();
	void choose_racer(int racer);
	std::string choosing();*/
protected:
	bool camel_on = 0;
	bool camel_fast_on = 0;
	bool eagle_on = 0;
	bool broomstick_on = 0;
	bool fly_carpet_on = 0;
	bool boots_runners_on = 0;
	bool centaur_on = 0;
};