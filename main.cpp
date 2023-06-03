#include<iostream>
#include "TransportDll.h"
#include "All_Road_Shoes.h"
#include "Air_carpet.h"
#include "Broom.h"
#include "Camel.h"
#include "Centaur.h"
#include "Eagle.h"
#include "Fast_furious_Camel.h"
#include "Race.h"

Air_carpet aircarpet;
All_Road_Shoes allroadshoes;
Broom broom;
Camel camel;
Centaur centaur;
Eagle eagle;
Fast_furious_Camel fastfuriouscamel;



int GroundRaceList(Transport** TranspMass, double Dist, const std::string& TransportList) {
	int Action, EndReg, TranspCounts;
	std::string WrongTS = "Попытка зарегистрировать неправильный тип транспортного средства!\n";
	TranspCounts = 0;
	EndReg = 0;
	std::string RegTS = "";

	std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства\n1.Зарегистрировать транспорт\n Выберите действие: ";
	std::cin >> Action;
	while (Action != 0) {
		std::cout << "Гонка для наземного транспорта. Расстояние: " << Dist << std::endl;
		std::cout << RegTS << std::endl;
		std::cout << TransportList;
		std::cout << "Выберите транспорт или 0 для окончания процесса регистрации: ";
		std::cin >> Action;
		if (Action == 0) {
			std::cout << "1. Зарегистрировать транспорт\n2. Начать гонку\nВыберите действие: ";
			std::cin >> Action;
			if (Action == 2) {
				return TranspCounts;
			}
		}
		else {
			switch (Action) {
			case 1:
				TranspMass[TranspCounts] = &allroadshoes;
				if (TranspCounts == 0) {
					RegTS = RegTS + "Ботинки-вездеходы";
				}
				else {
					RegTS = RegTS + ", Ботинки-вездеходы";
				}
				TranspCounts++;
				std::cout << "Ботинки-вездеходы успешно зарегистрированы!\n";

			case 2:
				std::cout << WrongTS;

			case 3:
				TranspMass[TranspCounts] = &camel;
				if (TranspCounts == 0) {
					RegTS = RegTS + "Верблюд";
				}
				else {
					RegTS = RegTS + ", Верблюд";
				}
				TranspCounts++;
				std::cout << "Верблюд успешно зарегистрирован!\n";

			case 4:
				TranspMass[TranspCounts] = &centaur;
				if (TranspCounts == 0) {
					RegTS = RegTS + "Кентавр";
				}
				else {
					RegTS = RegTS + ", Кентавр";
				}
				TranspCounts++;
				std::cout << "Кентавр успешно зарегистрирован!\n";

			case 5:
				std::cout << WrongTS;

			case 6:
				TranspMass[TranspCounts] = &fastfuriouscamel;
				if (TranspCounts == 0) {
					RegTS = RegTS + "Верблюд-быстроход";
				}
				else {
					RegTS = RegTS + ", Верблюд-быстроход";
				}
				TranspCounts++;
				std::cout << "Верблюд-быстроход успешно зарегистрирован!\n";

			case 7:
				std::cout << WrongTS;
			}
		}
	}
}
int AirRaceList(Transport** TranspMass, double Dist, const std::string& TransportList) {
	int Action, EndReg, TranspCounts;
	std::string WrongTS = "Попытка зарегистрировать неправильный тип транспортного средства!\n";
	TranspCounts = 0;
	EndReg = 0;
	std::string RegTS = "";

	std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства\n1.Зарегистрировать транспорт\n Выберите действие: ";
	std::cin >> Action;
	while (Action != 0) {
		std::cout << "Гонка для наземного транспорта. Расстояние: " << Dist << std::endl;
		std::cout << RegTS << std::endl;
		std::cout << TransportList;
		std::cout << "Выберите транспорт или 0 для окончания процесса регистрации: ";
		std::cin >> Action;
		if (Action == 0) {
			std::cout << "1. Зарегистрировать транспорт\n2. Начать гонку\nВыберите действие: ";
			std::cin >> Action;
			if (Action == 2) {
				return TranspCounts;
			}
		}
		else {
			switch (Action) {
			case 1:
				std::cout << WrongTS;

			case 2:
				TranspMass[TranspCounts] = &broom;
				if (TranspCounts == 0) {
					RegTS = RegTS + "Метла";
				}
				else {
					RegTS = RegTS + ", Метла";
				}
				TranspCounts++;
				std::cout << "Метла успешно зарегистрирована!\n";

			case 3:
				std::cout << WrongTS;

			case 4:
				std::cout << WrongTS;

			case 5:
				TranspMass[TranspCounts] = &eagle;
				if (TranspCounts == 0) {
					RegTS = RegTS + "Орел";
				}
				else {
					RegTS = RegTS + ", Орел";
				}
				TranspCounts++;
				std::cout << "Орел успешно зарегистрирован!\n";

			case 6:
				std::cout << WrongTS;

			case 7:
				TranspMass[TranspCounts] = &aircarpet;
				if (TranspCounts == 0) {
					RegTS = RegTS + "Ковер-самолет";
				}
				else {
					RegTS = RegTS + ", Ковер-самолет";
				}
				TranspCounts++;
				std::cout << "Ковер-самолет успешно зарегистрирован!\n";
			}
		}
	}
}
int AllRaceList(Transport** TranspMass, double Dist, const std::string& TransportList) {
	int Action, EndReg, TranspCounts;
	TranspCounts = 0;
	EndReg = 0;
	std::string RegTS = "";

	std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства\n1.Зарегистрировать транспорт\n Выберите действие: ";
	std::cin >> Action;
	while (Action != 0) {
		std::cout << "Гонка для наземного транспорта. Расстояние: " << Dist << std::endl;
		std::cout << RegTS << std::endl;
		std::cout << TransportList;
		std::cout << "Выберите транспорт или 0 для окончания процесса регистрации: ";
		std::cin >> Action;
		if (Action == 0) {
			std::cout << "1. Зарегистрировать транспорт\n2. Начать гонку\nВыберите действие: ";
			std::cin >> Action;
			if (Action == 2) {
				return TranspCounts;
			}
		}
		else {
				switch (Action){
				case 1:
					TranspMass[TranspCounts] = &allroadshoes;
					if (TranspCounts == 0) {
						RegTS = RegTS + "Ботинки-вездеходы";
					}
					else {
						RegTS = RegTS + ", Ботинки-вездеходы";
					}
					TranspCounts++;
					std::cout << "Ботинки-вездеходы успешно зарегистрированы!\n";

				case 2:
					TranspMass[TranspCounts] = &broom;
					if (TranspCounts == 0) {
						RegTS = RegTS + "Метла";
					}
					else {
						RegTS = RegTS + ", Метла";
					}
					TranspCounts++;
					std::cout << "Метла успешно зарегистрирована!\n";

				case 3:
					TranspMass[TranspCounts] = &camel;
					if (TranspCounts == 0) {
						RegTS = RegTS + "Верблюд";
					}
					else {
						RegTS = RegTS + ", Верблюд";
					}
					TranspCounts++;
					std::cout << "Верблюд успешно зарегистрирован!\n";

				case 4:
					TranspMass[TranspCounts] = &centaur;
					if (TranspCounts == 0) {
						RegTS = RegTS + "Кентавр";
					}
					else {
						RegTS = RegTS + ", Кентавр";
					}
					TranspCounts++;
					std::cout << "Кентавр успешно зарегистрирован!\n";

				case 5:
					TranspMass[TranspCounts] = &eagle;
					if (TranspCounts == 0) {
						RegTS = RegTS + "Орел";
					}
					else {
						RegTS = RegTS + ", Орел";
					}
					TranspCounts++;
					std::cout << "Орел успешно зарегистрирован!\n";

				case 6:
					TranspMass[TranspCounts] = &fastfuriouscamel;
					if (TranspCounts == 0) {
						RegTS = RegTS + "Верблюд-быстроход";
					}
					else {
						RegTS = RegTS + ", Верблюд-быстроход";
					}
					TranspCounts++;
					std::cout << "Верблюд-быстроход успешно зарегистрирован!\n";

				case 7:
					TranspMass[TranspCounts] = &aircarpet;
					if (TranspCounts == 0) {
						RegTS = RegTS + "Ковер-самолет";
					}
					else {
						RegTS = RegTS + ", Ковер-самолет";
					}
					TranspCounts++;
					std::cout << "Ковер-самолет успешно зарегистрирован!\n";
				}
		}
	}
}

int main() {
	int RaceIdent, TranspCounts, Action = 1;
	double Dist;
	std::string TransportList = "1. Ботинки-вездеходы\n2. Метла\n3. Верблюд\n4. Кентавр\n5. Орёл\n6. Верблюд-быстроход\n7. Ковёр-самолет\n0. Закончить регистрацию\n";
	std::cout << "Добро пожаловать в гоночный симулятор!\n";
	while (Action != 2) {
		Transport** TranspMass = new Transport* [7];
		std::cout << "1.Гонка для наземного транспорта\n2.Гонка для воздушного транспорта\n3.Гонка для наземного и воздушного транспорта\nВыберите тип гонки: ";
		std::cin >> RaceIdent;
		std::cout << "Укажите длинну дистанции (должна,быть положительна):\n";
		std::cin >> Dist;
		if (RaceIdent == 3) {
			TranspCounts = AllRaceList(TranspMass, Dist, TransportList);
		}
		else if (RaceIdent == 2) {
			TranspCounts = AirRaceList(TranspMass, Dist, TransportList);
		}
		else {
			TranspCounts = GroundRaceList(TranspMass, Dist, TransportList);
		}

		double* RaceTimes = new double[TranspCounts];
		Race race(TranspMass, TranspCounts, Dist);
		race.RaceResult(RaceTimes);
		race.PrintRace(RaceTimes);
		std::cout << "1. Провести еще одну гонку\n2. Выйти\nВыберите действие: ";
		std::cin >> Action;
		delete[] TranspMass;
		delete[] RaceTimes;

	}

	return 0;
}