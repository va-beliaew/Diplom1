#include "all.h"


/*bool operator> (Sort a, Sort b) {
	if (a.result > b.result) {
		return true;
	}
	else {
		return false;
	}
}
*/
std::string all::text() {
	std::string text;
	text = "\n����� ��� ��������� � ���������� ����������. ����������: " + std::to_string(s) + "\n";
	return  text;
}
std::string all::choosing() {
	if (broomstick_on == 0 && eagle_on == 0 && fly_carpet_on == 0 &&
		boots_runners_on == 0 && camel_on == 0 && camel_fast_on == 0 && centaur_on == 0) {
		return "";
	}
	else {
		return "������������������ ������������ ��������: " + s1 + s2 + s3 + s4 + s5 + s6 + s7 + "\n";
	}
}
int all::get_racers() {
	return n_racers;
}
std::string all::choose() {
	
		return notice;
	
}
std::string* all::start() {
	all::sort();
	for (int i = 0; i < 7; ++i) {
		if (allR[i].on == 1) {
			text1[i] = allR[i].name + "." + " " + "�����: " + std::to_string(allR[i].result) + "\n";
		}
		else {
			continue;
		}
	}
	return text1;
}
void all::del() {
	delete[] text1;
}
void all::sort() {
	for (int i = 0; i < 6; ++i) {
		for (int j = 0; j < 6; ++j) {
			if (allR[j] > allR[j + 1]) {
				std::swap(allR[j], allR[j + 1]);
			}
		}
	}
}

void all::check(std::string m) {
	notice = m + "������� ���������������!\n";
}
void all::unche�k(std::string m) {
	notice = m + " ��� ���������������!\n";
}
void all::run_l(land* Land) {
	Land->time(s);
}
void all::run_f(flying* Fly) {
	Fly->time(s);
}

void all::choose_racer(int racer) {
	switch (racer) {
	case 1: if (boots_runners_on == 0) {
		run_l(&Boots_runners);
		boots_runners_on = 1;
		++n_racers;
		s1 = "�������-��������� ";
		check(s1);
		allR[0].set(Boots_runners.name, Boots_runners.get_res(), boots_runners_on);
		break;
	}
		  else {
		unche�k("�������-���������");
		break;
	}

	case 2:if (broomstick_on == 0) {
		run_f(&Broomstick_all);
		broomstick_on = 1;
		++n_racers;
		s2 = "����� ";
		check(s2);
		allR[1].set(Broomstick_all.name, Broomstick_all.get_res(), broomstick_on);
		break;
	}
		  else {
		unche�k("�����");
		break;
	}
	case 3: if (camel_on == 0) {
		run_l(&Camel);
		camel_on = 1;
		++n_racers;
		s3 = "������� ";
		check(s3);
		allR[2].set(Camel.name, Camel.get_res(), camel_on);
		break;
	}
		  else {
		unche�k("�������");
		break;
	}

	case 4: if (centaur_on == 0) {
		run_l(&Centaur);
		centaur_on = 1;
		++n_racers;
		s4 = "������� ";
		check(s4);
		allR[3].set(Centaur.name, Centaur.get_res(), centaur_on);
		break;
	}
		  else {
		unche�k("�������");
		break;
	}

	case 5: if (eagle_on == 0) {
		run_f(&Eagle_all);
		eagle_on = 1;
		++n_racers;
		s5 = "���� ";
		check(s5);
		allR[4].set(Eagle_all.name, Eagle_all.get_res(), eagle_on);
		break;
	}
		  else {
		unche�k("����");
		break;
	}
	case 6: if (camel_fast_on == 0) {
		run_l(&Camel_fast);
		camel_fast_on = 1;
		++n_racers;
		s6 = "�������-��������� ";
		check(s6);
		allR[5].set(Camel_fast.name, Camel_fast.get_res(), camel_fast_on);
		break;
	}
		  else {
		unche�k("�������-���������");
		break;
	}

	case 7: if (fly_carpet_on == 0) {
		run_f(&Fly_carpet_all);
		fly_carpet_on = 1;
		++n_racers;
		s7 = "�����-������� ";
		check(s7);
		allR[6].set(Fly_carpet_all.name, Fly_carpet_all.get_res(), fly_carpet_on);
		break;
	}
		  else {
		unche�k("�����-�������");
		break;
	}
	}
}