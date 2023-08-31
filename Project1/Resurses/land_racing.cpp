#include "land_racing.h"



std::string land_racing::text() {
	std::string text;
	text = "\nГонка для наземного транспорта. Расстояние: " + std::to_string(s) + "\n";
	return  text;
}
std::string land_racing::choosing() {
	if (boots_runners_on == 0 && camel_on == 0 && camel_fast_on == 0 && centaur_on == 0) {
		return "";
	}
	else {
		return "Зарегистрированные транспортные средства: " + s1 + s2 + s3 + s4 + "\n";
	}
}
int land_racing::get_racers() {
	return n_racers;
}
std::string land_racing::choose() {
	
		return notice;
	
}
std::string* land_racing::start() {
	land_racing::sort();
	for (int i = 0; i < 4; ++i) {
		if (LandR[i].on == 1) {
			text1 [i] = LandR[i].name + "." + " " + "Время: " + std::to_string(LandR[i].result) + "\n";
		}
		else {
			continue;
		}
	}
	return text1;
}
void land_racing::del() {
	delete[] text1;
}
void land_racing::sort() {
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			if (LandR[j] > LandR[j + 1]) {
				std::swap(LandR[j], LandR[j + 1]);
			}
		}
	}
}

void land_racing::check(std::string m) {
	notice = m + "успешно зарегистрирован!\n";
}
void land_racing::uncheсk (std::string m) {
	notice = m + " уже зарегистрирован!\n";
}
void land_racing::error() {
	notice = "Попытка зарегистрировать неправильный тип транспортного средства!\n";
}
void land_racing::run(land* Land) {
	Land->time(s);
}

void land_racing::choose_racer(int racer) {
	switch (racer) {
	case 1: if (boots_runners_on == 0) {
		run(&Boots_runners_l);
		boots_runners_on = 1;
		++n_racers;
		s1 = "Ботинки-вездеходы ";
		check(s1);
		LandR[0].set(Boots_runners_l.name, Boots_runners_l.get_res(), boots_runners_on);
		break;
	}
		  else {
		uncheсk ("Ботинки-вездеходы");
		break;
	}
	case 2: error(); break;
	case 3: if (camel_on == 0) {
		run(&Camel_l);
		camel_on = 1;
		++n_racers;
		s2 = "Верблюд ";
		check(s2);
		LandR[1].set(Camel_l.name, Camel_l.get_res(), camel_on);
		break;
	}
		  else {
		uncheсk("Верблюд");
		break;
	}
	case 4: if (centaur_on == 0) {
		run(&Centaur_l);
		centaur_on = 1;
		++n_racers;
		s3 = "Кентавр ";
		check(s3);
		LandR[2].set(Centaur_l.name, Centaur_l.get_res(), centaur_on);
		break;
	}
		  else {
		uncheсk("Кентавр");
		break;
	}
	case 5: error();
		break;
	case 6: if (camel_fast_on == 0) {
		run(&Camel_fast_l);
		camel_fast_on = 1;
		++n_racers;
		s4 = "Верблюд-быстроход ";
		check(s4);
		LandR[3].set(Camel_fast_l.name, Camel_fast_l.get_res(), camel_fast_on);
		break;
	}
		  else {
		uncheсk("Верблюд-быстроход");
		break;
	}
	case 7: error();
		break;
	}
}