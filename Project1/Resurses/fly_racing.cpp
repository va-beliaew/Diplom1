#include <string>
#include "fly_racing.h"


/*bool operator> (Sort a, Sort b) {
	if (a.result > b.result) {
		return true;
	}
	else {
		return false;
	}
}*/

std::string fly_racing::text() {
	std::string text;
	text = "\nГонка для воздушного транспорта. Расстояние: " + std::to_string(s) + "\n";
	return  text;
}
std::string fly_racing::choosing() {
	if (broomstick_on == 0 && eagle_on == 0 && fly_carpet_on == 0) {
		return "";
	}
	else {
		return "Зарегистрированные транспортные средства: " + s1 + s2 + s3 + "\n";
	}
}
int fly_racing::get_racers() {
	return n_racers;
}
std::string fly_racing::choose() {
	
		return notice;
	
}
std::string* fly_racing::start() {
	fly_racing::sort();
	for (int i = 0; i < 4; ++i) {
		if (flyR[i].on == 1) {
			text1[i] = flyR[i].name + "." + " " + "Время: " + std::to_string(flyR[i].result) + "\n";
		}
		else {
			continue;
		}
	}
	return text1;
}
void fly_racing::del() {
	delete[] text1;
}
void fly_racing::sort() {
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 2; ++j) {
			if (flyR[j] > flyR[j + 1]) {
				std::swap(flyR[j], flyR[j + 1]);
			}
		}
	}
}

void fly_racing::check(std::string m) {
	notice = m + "успешно зарегистрирован!\n";
}
void fly_racing::uncheсk(std::string m) {
	notice = m + " уже зарегистрирован!\n";
}
void fly_racing::error() {
	notice = "Попытка зарегистрировать неправильный тип транспортного средства!\n";
}
void fly_racing::run(flying* Fly) {
	Fly->time(s);
}

void fly_racing::choose_racer(int racer) {
	switch (racer) {
	case 1: error();
		break;

	case 2:if (broomstick_on == 0) {
		run(&Broomstick);
		broomstick_on = 1;
		++n_racers;
		s1 = "Метла ";
		check(s1);
		flyR[0].set(Broomstick.name, Broomstick.get_res(), broomstick_on);
		break;
	}
		  else {
		uncheсk("Метла");
		break;
	}
	case 3: error();
		break;

	case 4: error();
		break;

	case 5: if (eagle_on == 0) {
		run(&Eagle);
		eagle_on = 1;
		++n_racers;
		s2 = "Орел ";
		check(s2);
		flyR[1].set(Eagle.name, Eagle.get_res(), eagle_on);
		break;
	}
		  else {
		uncheсk("Орел");
		break;
	}
	case 6: error();
		break;

	case 7: if (fly_carpet_on == 0) {
		run(&Fly_carpet);
		fly_carpet_on = 1;
		++n_racers;
		s3 = "Ковер-самолет ";
		check(s3);
		flyR[2].set(Fly_carpet.name, Fly_carpet.get_res(), fly_carpet_on);
		break;
	}
		  else {
		uncheсk("Ковер-самолет");
		break;
	}
	}
}