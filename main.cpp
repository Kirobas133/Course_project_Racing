#include<iostream>
#include <Windows.h>
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
	std::string WrongTS = "������� ���������������� ������������ ��� ������������� ��������!\n";
	TranspCounts = 0;
	EndReg = 0;
	std::string RegTS = "";

	std::cout << "������ ���� ���������������� ���� �� 2 ������������ ��������\n1.���������������� ���������\n �������� ��������: ";
	std::cin >> Action;
	std::cout << std::endl;
	while (1) {
		std::cout << "����� ��� ��������� ����������. ����������: " << Dist << std::endl;
		if (TranspCounts != 0) {
			std::cout << "������������������ ������������ ��������:" << RegTS << std::endl;
		}
		std::cout << TransportList;
		std::cout << "�������� ��������� ��� 0 ��� ��������� �������� �����������: ";
		std::cin >> Action;
		std::cout << std::endl;
		if (Action == 0) {
			std::cout << "1. ���������������� ���������\n2. ������ �����\n�������� ��������: ";
			std::cin >> Action;
			std::cout << std::endl;
			if (Action == 2) {
				return TranspCounts;
			}
		}
		else {
			switch (Action) {
			case 1:
				TranspMass[TranspCounts] = &allroadshoes;
				if (TranspCounts == 0) {
					RegTS = RegTS + "�������-���������";
				}
				else {
					RegTS = RegTS + ", �������-���������";
				}
				TranspCounts++;
				std::cout << "�������-��������� ������� ����������������!\n";
				break;

			case 2:
				std::cout << WrongTS;
				break;

			case 3:
				TranspMass[TranspCounts] = &camel;
				if (TranspCounts == 0) {
					RegTS = RegTS + "�������";
				}
				else {
					RegTS = RegTS + ", �������";
				}
				TranspCounts++;
				std::cout << "������� ������� ���������������!\n";
				break;

			case 4:
				TranspMass[TranspCounts] = &centaur;
				if (TranspCounts == 0) {
					RegTS = RegTS + "�������";
				}
				else {
					RegTS = RegTS + ", �������";
				}
				TranspCounts++;
				std::cout << "������� ������� ���������������!\n";
				break;

			case 5:
				std::cout << WrongTS;
				break;

			case 6:
				TranspMass[TranspCounts] = &fastfuriouscamel;
				if (TranspCounts == 0) {
					RegTS = RegTS + "�������-���������";
				}
				else {
					RegTS = RegTS + ", �������-���������";
				}
				TranspCounts++;
				std::cout << "�������-��������� ������� ���������������!\n";
				break;

			case 7:
				std::cout << WrongTS;
				break;
			}
		}
	}
}
int AirRaceList(Transport** TranspMass, double Dist, const std::string& TransportList) {
	int Action, EndReg, TranspCounts;
	std::string WrongTS = "������� ���������������� ������������ ��� ������������� ��������!\n";
	TranspCounts = 0;
	EndReg = 0;
	std::string RegTS = "";

	std::cout << "������ ���� ���������������� ���� �� 2 ������������ ��������\n1.���������������� ���������\n �������� ��������: ";
	std::cin >> Action;
	std::cout << std::endl;
	while (1) {
		std::cout << "����� ��� ���������� ����������. ����������: " << Dist << std::endl;
		if (TranspCounts != 0) {
			std::cout << "������������������ ������������ ��������:" << RegTS << std::endl;
		}
		std::cout << TransportList;
		std::cout << "�������� ��������� ��� 0 ��� ��������� �������� �����������: ";
		std::cin >> Action;
		std::cout << std::endl;
		if (Action == 0) {
			std::cout << "1. ���������������� ���������\n2. ������ �����\n�������� ��������: ";
			std::cin >> Action;
			std::cout << std::endl;
			if (Action == 2) {
				return TranspCounts;
			}
		}
		else {
			switch (Action) {
			case 1:
				std::cout << WrongTS;
				break;

			case 2:
				TranspMass[TranspCounts] = &broom;
				if (TranspCounts == 0) {
					RegTS = RegTS + "�����";
				}
				else {
					RegTS = RegTS + ", �����";
				}
				TranspCounts++;
				std::cout << "����� ������� ����������������!\n";
				break;

			case 3:
				std::cout << WrongTS;
				break;

			case 4:
				std::cout << WrongTS;
				break;

			case 5:
				TranspMass[TranspCounts] = &eagle;
				if (TranspCounts == 0) {
					RegTS = RegTS + "����";
				}
				else {
					RegTS = RegTS + ", ����";
				}
				TranspCounts++;
				std::cout << "���� ������� ���������������!\n";
				break;

			case 6:
				std::cout << WrongTS;
				break;

			case 7:
				TranspMass[TranspCounts] = &aircarpet;
				if (TranspCounts == 0) {
					RegTS = RegTS + "�����-�������";
				}
				else {
					RegTS = RegTS + ", �����-�������";
				}
				TranspCounts++;
				std::cout << "�����-������� ������� ���������������!\n";
				break;
			}
		}
	}
}
int AllRaceList(Transport** TranspMass, double Dist, const std::string& TransportList) {
	int Action, EndReg, TranspCounts;
	TranspCounts = 0;
	EndReg = 0;
	std::string RegTS = "";

	std::cout << "������ ���� ���������������� ���� �� 2 ������������ ��������\n1.���������������� ���������\n �������� ��������: ";
	std::cin >> Action;
	std::cout << std::endl;
	while (1) {
		std::cout << "����� ��� ��������� � ���������� ����������. ����������: " << Dist << std::endl;
		if (TranspCounts != 0) {
			std::cout << "������������������ ������������ ��������:" << RegTS << std::endl;
		}
		std::cout << TransportList;
		std::cout << "�������� ��������� ��� 0 ��� ��������� �������� �����������: ";
		std::cin >> Action;
		std::cout << std::endl;
		if (Action == 0) {
			std::cout << "1. ���������������� ���������\n2. ������ �����\n�������� ��������: ";
			std::cin >> Action;
			std::cout << std::endl;
			if (Action == 2) {
				return TranspCounts;
			}
		}
		else {
				switch (Action){
				case 1:
					TranspMass[TranspCounts] = &allroadshoes;
					if (TranspCounts == 0) {
						RegTS = RegTS + "�������-���������";
					}
					else {
						RegTS = RegTS + ", �������-���������";
					}
					TranspCounts++;
					std::cout << "�������-��������� ������� ����������������!\n";
					break;

				case 2:
					TranspMass[TranspCounts] = &broom;
					if (TranspCounts == 0) {
						RegTS = RegTS + "�����";
					}
					else {
						RegTS = RegTS + ", �����";
					}
					TranspCounts++;
					std::cout << "����� ������� ����������������!\n";
					break;

				case 3:
					TranspMass[TranspCounts] = &camel;
					if (TranspCounts == 0) {
						RegTS = RegTS + "�������";
					}
					else {
						RegTS = RegTS + ", �������";
					}
					TranspCounts++;
					std::cout << "������� ������� ���������������!\n";
					break;

				case 4:
					TranspMass[TranspCounts] = &centaur;
					if (TranspCounts == 0) {
						RegTS = RegTS + "�������";
					}
					else {
						RegTS = RegTS + ", �������";
					}
					TranspCounts++;
					std::cout << "������� ������� ���������������!\n";
					break;

				case 5:
					TranspMass[TranspCounts] = &eagle;
					if (TranspCounts == 0) {
						RegTS = RegTS + "����";
					}
					else {
						RegTS = RegTS + ", ����";
					}
					TranspCounts++;
					std::cout << "���� ������� ���������������!\n";
					break;

				case 6:
					TranspMass[TranspCounts] = &fastfuriouscamel;
					if (TranspCounts == 0) {
						RegTS = RegTS + "�������-���������";
					}
					else {
						RegTS = RegTS + ", �������-���������";
					}
					TranspCounts++;
					std::cout << "�������-��������� ������� ���������������!\n";
					break;

				case 7:
					TranspMass[TranspCounts] = &aircarpet;
					if (TranspCounts == 0) {
						RegTS = RegTS + "�����-�������";
					}
					else {
						RegTS = RegTS + ", �����-�������";
					}
					TranspCounts++;
					std::cout << "�����-������� ������� ���������������!\n";
					break;
				}
		}
	}
}

int main() {

	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int RaceIdent, TranspCounts, Action = 1;
	double Dist;
	std::string TransportList = "1. �������-���������\n2. �����\n3. �������\n4. �������\n5. ���\n6. �������-���������\n7. ����-�������\n0. ��������� �����������\n";
	std::cout << "����� ���������� � �������� ���������!\n";
	while (Action != 2) {
		Transport** TranspMass = new Transport* [7];
		std::cout << "1.����� ��� ��������� ����������\n2.����� ��� ���������� ����������\n3.����� ��� ��������� � ���������� ����������\n�������� ��� �����: ";
		std::cin >> RaceIdent;
		std::cout << std::endl;
		std::cout << "������� ������ ��������� (������,���� ������������):\n";
		std::cin >> Dist;
		std::cout << std::endl;
		if (RaceIdent == 3) {
			TranspCounts = AllRaceList(TranspMass, Dist, TransportList);
			std::cout << std::endl;
		}
		else if (RaceIdent == 2) {
			TranspCounts = AirRaceList(TranspMass, Dist, TransportList);
			std::cout << std::endl;
		}
		else {
			TranspCounts = GroundRaceList(TranspMass, Dist, TransportList);
			std::cout << std::endl;
		}

		double* RaceTimes = new double[TranspCounts];
		Race race(TranspMass, TranspCounts, Dist);
		race.RaceResult(RaceTimes);
		race.PrintRace(RaceTimes);
		std::cout << std::endl;
		std::cout << "1. �������� ��� ���� �����\n2. �����\n�������� ��������: ";
		std::cin >> Action;
		std::cout << std::endl;
		delete[] TranspMass;
		delete[] RaceTimes;

	}

	return 0;
}