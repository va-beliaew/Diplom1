#include "racing.h"



bool operator> (Sort a, Sort b) {
	if (a.result > b.result) {
		return true;
	}
	else {
		return false;
	}
}
/*
std::string racing::text() {
	std::string text;
	text = "Гонка для наземного и воздушного транспорта. Расстояние: " + std::to_string(s) + "\n";
	return  text;
}
std::string racing::choosing() {
	if (broomstick_on == 0 && eagle_on == 0 && fly_carpet_on == 0 && 
		boots_runners_on == 0 && camel_on == 0 && camel_fast_on == 0 && centaur_on == 0) {
		return "";
	}
	else {
		return "Зарегистрированные транспортные средства: " + s1 + s2 + s3 + s4 + s5 + s6 + s7 + "\n";
	}
}
int racing::get_racers() {
	return n_racers;
}
std::string racing::choose() {
	if (n_racers == 0) {
		return "";
	}
	else {
		return notice;
	}
}
std::string racing::start() {
	racing::sort();
	std::string text;
	for (int i = 0; i < 7; ++i) {
		if (allR[i].on == 1) {
			text += allR[i].name + "." + " " + "Время: " + std::to_string(allR[i].result) + "\n";
		}
		else {
			continue;
		}
	}
	return text;
}
void racing::sort() {
	for (int i = 0; i < 6; ++i) {
		for (int j = 0; j < 6; ++j) {
			if (allR[j] > allR[j + 1]) {
				std::swap(allR[j], allR[j + 1]);
			}
		}
	}
}

void racing::check(std::string m) {
	notice = m + "успешно зарегистрирован!\n";
}
void racing::uncheсk(std::string m) {
	notice = m + " уже зарегистрирован!\n";
}
void racing::run_l(land* Land) {
	Land->time(s);
}
void racing::run_f(flying* Fly) {
	Fly->time(s);
}

void racing::choose_racer(int racer) {
	switch (racer) {
	case 1: if (boots_runners_on == 0) {
		run_l(&Boots_runners);
		boots_runners_on = 1;
		++n_racers;
		s1 = "Ботинки-вездеходы ";
		check(s1);
		allR[0].set(Boots_runners.name, Boots_runners.get_res(), boots_runners_on);
		break;
	}
		  else {
		uncheсk("Ботинки-вездеходы");
		break;
	}

	case 2:if (broomstick_on == 0) {
		run_f(&Broomstick_all);
		broomstick_on = 1;
		++n_racers;
		s2 = "Метла ";
		check(s2);
		allR[1].set(Broomstick_all.name, Broomstick_all.get_res(), broomstick_on);
		break;
	}
		  else {
		uncheсk("Метла");
		break;
	}
	case 3: if (camel_on == 0) {
		run_l(&Camel);
		camel_on = 1;
		++n_racers;
		s3 = "Верблюд ";
		check(s3);
		allR[2].set(Camel.name, Camel.get_res(), camel_on);
		break;
	}
		  else {
		uncheсk("Верблюд");
		break;
	}

	case 4: if (centaur_on == 0) {
		run_l(&Centaur);
		centaur_on = 1;
		++n_racers;
		s4 = "Кентавр ";
		check(s4);
		allR[3].set(Centaur.name, Centaur.get_res(), centaur_on);
		break;
	}
		  else {
		uncheсk("Кентавр");
		break;
	}

	case 5: if (eagle_on == 0) {
		run_f(&Eagle_all);
		eagle_on = 1;
		++n_racers;
		s5 = "Орел ";
		check(s5);
		allR[4].set(Eagle_all.name, Eagle_all.get_res(), eagle_on);
		break;
	}
		  else {
		uncheсk("Орел");
		break;
	}
	case 6: if (camel_fast_on == 0) {
		run_l(&Camel_fast);
		camel_fast_on = 1;
		++n_racers;
		s6 = "Верблюд-быстроход ";
		check(s6);
		allR[5].set(Camel_fast.name, Camel_fast.get_res(), camel_fast_on);
		break;
	}
		  else {
		uncheсk("Верблюд-быстроход");
		break;
	}

	case 7: if (fly_carpet_on == 0) {
		run_f(&Fly_carpet_all);
		fly_carpet_on = 1;
		++n_racers;
		s7 = "Ковер-самолет ";
		check(s7);
		allR[6].set(Fly_carpet_all.name, Fly_carpet_all.get_res(), fly_carpet_on);
		break;
	}
		  else {
		uncheсk("Ковер-самолет");
		break;
	}
	}
}*/