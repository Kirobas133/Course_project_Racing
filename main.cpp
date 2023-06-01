#include<iostream>
#include "TransportDll.h"
#include "All_Road_Shoes.h"
#include "Air_carpet.h"
#include "Broom.h"
#include "Camel.h"
#include "Centaur.h"
#include "Eagle.h"
#include "Fast_furious_Camel.h"

Air_carpet aircarpet;
All_Road_Shoes allroadshoes;
Broom broom;
Camel camel;
Centaur centaur;
Eagle eagle;
Fast_furious_Camel fastfuriouscamel;



void GroundRaceList(Transport** TranspMass) {

}
void AirRaceList(Transport** TranspMass) {

}
void AllRaceList(Transport** TranspMass, int Dist, const std::string& TransportList) {
	int Action, EndReg, i;
	i = 0;
	EndReg = 0;
	std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства\n1.Зарегистрировать транспорт\n Выберите действие: ";
	std::cin >> Action;
	while (Action != 0) {
		std::cout << "Гонка для наземного транспорта. Расстояние: " << Dist << std::endl;
		std::cout << TransportList;
		std::cout << "Выберите транспорт или 0 для окончания процесса регистрации: ";
		std::cin >> Action;
		if (Action == 0) {}
		else {
				switch (Action){
				case 1:
					TranspMass[i] = &allroadshoes;
					i++;
				case 2:
					TranspMass[i] = &broom;
					i++;
				case 3:
					TranspMass[i] = &camel;
					i++;
				case 4:
					TranspMass[i] = &centaur;
					i++;
				case 5:
					TranspMass[i] = &eagle;
					i++;
				case 6:
					TranspMass[i] = &fastfuriouscamel;
					i++;
				case 7:
					TranspMass[i] = &aircarpet;
					i++;
				}
		}
	}
}

int main() {
	int RaceIdent, Action, Dist, TranspCounts;
	Transport** TranspMass = new Transport*[7];
	
	std::string TransportList = "1. Ботинки-вездеходы\n2. Метла\n3. Верблюд\n4. Кентавр\n5. Орёл\n6. Верблюд-быстроход\n7. Ковёр-самолет\n0. Закончить регистрацию\n";
	std::cout << "Добро пожаловать в гоночный симулятор!\n1.Гонка для наземного транспорта\n2.Гонка для воздушного транспорта\n3.Гонка для наземного и воздушного транспорта\nВыберите тип гонки: ";
	std::cin >> RaceIdent;
	std::cout << "Укажите длинну дистанции (должна,быть положительна):\n";
	std::cin >> Dist;
	
	std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства\n1.Зарегистрировать транспорт\n Выберите действие: ";
	std::cin >> Action;
			std::cout << "Гонка для наземного транспорта. Расстояние: " << Dist << std::endl;
			std::cout << TransportList;
			std::cout << "Выберите транспорт или 0 для окончания процесса регистрации: ";
			std::cin >> Action;
			std::cout << "1. Зарегистрировать транспорт\n2. Начать гонку\nВыберите действие: ";


	return 0;
}