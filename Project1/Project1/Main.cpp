#include <iostream>
#include "land_racing.h"
#include "fly_racing.h"
#include "all.h"
#include "racing.h"
#include "land.h"
#include "flying.h"
#include "eagle.h"
#include "boots-runners.h"
#include "broomstik.h"
#include "camel.h"
#include "camel_fast.h"
#include "centaur.h"
#include "fly_carpet.h"
#include "sort.h"
#include "windows.h"


void list0() {
	std::cout << "1. Гонка для наземного транспорта" << std::endl
		<< "2. Гонка для воздушного транспорта" << std::endl <<
		"3. Гонка для наземного и воздушного транспорта" << std::endl <<
		"Выберите тип гонки: ";
}
void list1() {
	std::cout << "1. Ботинки-вездеходы\n" << "2. Метла\n" << "3. Верблюд\n" << "4. Кентавр\n" <<
		"5. Орел\n" << "6. Верблюд-быстроход\n" << "7. Ковер-самолет\n" << "0. Закончить регитсрацию\n" <<
		"Выберите транспорт или 0 для окончания процесса регистрации: ";
}
	void list2() {
		std::cout << "\n1. Зарегистрировать транспорт\n" << "2. Начать гонку\n" << "Выберите действие: ";
	}
	void list3() {
		std::cout << "\n1. Зарегистрировать транспорт\n" << "Выберите действие: ";
	}
	void warning() {
		std::cout << "\nДолжно быть зарегистрировано хотя бы 2 транспортных средства\n";
	}
	void menu() {
		
	}
	void list4() {
		std::cout << "\n1. Провести еще одну гонку\n" << "2. Выйти\n" << "Выберите действие: ";
	}


int main() {
	setlocale (LC_ALL, "rus");
	while (1) {
		int ch1 = 0;
		int s = 0;
		int type_racing = 0;
		int racer = 0;
		std::string* finish = nullptr;
		int choise = 0;
		int n_racers = 0;
		std::cout << "Добро пожаловать в гоночный симулятор!\n";
		while (1) {
			int type;
			list0();
			std::cin >> type;
			if (type == 1 || type == 2 || type == 3) {
				type_racing = type;
				break;
			}
			else {
				continue;
			}
		}

		while (s <= 0) {
			std::cout << "Укажите длину дистанции (должна быть положительная): ";
			std::cin >> s;
		}
		
			land_racing race1(s);
		
		
			fly_racing race2(s);
		
		
			all race3(s);
		

		while (1) {
			int ch = 0;
			if (type_racing == 1) {
			n_racers = race1.get_racers();
			}
			else if (type_racing == 2) {
			n_racers = race2.get_racers();
			}
			else if (type_racing == 3) {
				n_racers = race3.get_racers();
			}
			if (n_racers < 2) {
				warning();
				list3();
				std::cin >> ch;
				if (ch == 1) {
					while (1) {
						if (type_racing == 1) {
						std::cout << race1.text();
						std::cout << race1.choosing();
						std::cout << race1.choose() << std::endl;
						}
						else if (type_racing == 2) {
						std::cout << race2.text();
						std::cout << race2.choosing();
						std::cout << race2.choose() << std::endl;
						}
						else if (type_racing == 3) {
							std::cout << race3.text();
							std::cout << race3.choosing();
							std::cout << race3.choose() << std::endl;
						}
						
						list1();
						std::cin >> choise;
						if (choise > 0 && choise < 8) {
							if (type_racing == 1) {
							race1.choose_racer(choise);
							}
							else if (type_racing == 2) {
							race2.choose_racer(choise);
							}
							else if (type_racing == 3) {
								race3.choose_racer(choise);
							}
							
						}
						else if (choise < 0 || choise > 7) {
							continue;
						}
						else if (choise == 0) {
							break;
						}
					}
				}
				else {
					continue;
				}
			}
			else {
				list2();
				std::cin >> ch;
				if (ch == 1) {
					while (1) {
						if (type_racing == 1) {
						std::cout << race1.text();
						std::cout << race1.choosing();
						std::cout << race1.choose() << std::endl;
						}
						else if (type_racing == 2) {
						std::cout << race2.text();
						std::cout << race2.choosing();
						std::cout << race2.choose() << std::endl;
						}
						else if (type_racing == 3) {
							std::cout << race3.text();
							std::cout << race3.choosing();
							std::cout << race3.choose() << std::endl;
						}
						
						list1();
						std::cin >> choise;
						if (choise > 0 && choise < 8) {
							if (type_racing == 1) {
							race1.choose_racer(choise);
							}
							else if (type_racing == 2) {
							race2.choose_racer(choise);
							}
							else if (type_racing == 3) {
								race3.choose_racer(choise);
							}
							
						}
						else if (choise < 0 || choise > 7) {
							continue;
						}
						else if (choise == 0) {
							break;
						}
					}
				}
				else if (ch == 2) {
					std::cout << std::endl;
					if (type_racing == 1) {
					finish = race1.start();
					}
					else if (type_racing == 2) {
					finish = race2.start();
					}
					else if (type_racing == 3) {
						finish = race3.start();
					}
					
					break;
				}
			}
		}
		for (int i = 0; i < 7; ++i) {
			std::cout << finish [i];
		}
		if (type_racing == 1) {
			race1.del();
		}
		else if (type_racing == 2) {
			race2.del();
		}
		else if (type_racing == 3) {
			race3.del();
		}
		while (1) {
			list4();
			std::cin >> ch1;
			if (ch1 == 1 || ch1 == 2) {
				break;
			}
			else {
				continue;
			}
		}
		if (ch1 == 1) {
			continue;
		}
		else if (ch1 == 2) {
			break;
		}
	}
	return 0;
}