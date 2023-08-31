#pragma once
#include <string>

#ifdef RESURSES_EXPORTS
#define RESURS_API __declspec(dllexport)
#else
#define RESURS_API __declspec(dllimport)
#endif


RESURS_API struct Sort {
	std::string name;
	int result = 0;
	bool on = 0;
	void set(std::string name, double result, bool on);
};