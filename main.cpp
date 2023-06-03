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
	std::string WrongTS = "������� ���������������� ������������ ��� ������������� ��������!\n";
	TranspCounts = 0;
	EndReg = 0;
	std::string RegTS = "";

	std::cout << "������ ���� ���������������� ���� �� 2 ������������ ��������\n1.���������������� ���������\n �������� ��������: ";
	std::cin >> Action;
	while (Action != 0) {
		std::cout << "����� ��� ��������� ����������. ����������: " << Dist << std::endl;
		std::cout << RegTS << std::endl;
		std::cout << TransportList;
		std::cout << "�������� ��������� ��� 0 ��� ��������� �������� �����������: ";
		std::cin >> Action;
		if (Action == 0) {
			std::cout << "1. ���������������� ���������\n2. ������ �����\n�������� ��������: ";
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
					RegTS = RegTS + "�������-���������";
				}
				else {
					RegTS = RegTS + ", �������-���������";
				}
				TranspCounts++;
				std::cout << "�������-��������� ������� ����������������!\n";

			case 2:
				std::cout << WrongTS;

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

			case 5:
				std::cout << WrongTS;

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

			case 7:
				std::cout << WrongTS;
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
	while (Action != 0) {
		std::cout << "����� ��� ��������� ����������. ����������: " << Dist << std::endl;
		std::cout << RegTS << std::endl;
		std::cout << TransportList;
		std::cout << "�������� ��������� ��� 0 ��� ��������� �������� �����������: ";
		std::cin >> Action;
		if (Action == 0) {
			std::cout << "1. ���������������� ���������\n2. ������ �����\n�������� ��������: ";
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
					RegTS = RegTS + "�����";
				}
				else {
					RegTS = RegTS + ", �����";
				}
				TranspCounts++;
				std::cout << "����� ������� ����������������!\n";

			case 3:
				std::cout << WrongTS;

			case 4:
				std::cout << WrongTS;

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

			case 6:
				std::cout << WrongTS;

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
	while (Action != 0) {
		std::cout << "����� ��� ��������� ����������. ����������: " << Dist << std::endl;
		std::cout << RegTS << std::endl;
		std::cout << TransportList;
		std::cout << "�������� ��������� ��� 0 ��� ��������� �������� �����������: ";
		std::cin >> Action;
		if (Action == 0) {
			std::cout << "1. ���������������� ���������\n2. ������ �����\n�������� ��������: ";
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
						RegTS = RegTS + "�������-���������";
					}
					else {
						RegTS = RegTS + ", �������-���������";
					}
					TranspCounts++;
					std::cout << "�������-��������� ������� ����������������!\n";

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
				}
		}
	}
}

int main() {
	int RaceIdent, TranspCounts, Action = 1;
	double Dist;
	std::string TransportList = "1. �������-���������\n2. �����\n3. �������\n4. �������\n5. ���\n6. �������-���������\n7. ����-�������\n0. ��������� �����������\n";
	std::cout << "����� ���������� � �������� ���������!\n";
	while (Action != 2) {
		Transport** TranspMass = new Transport* [7];
		std::cout << "1.����� ��� ��������� ����������\n2.����� ��� ���������� ����������\n3.����� ��� ��������� � ���������� ����������\n�������� ��� �����: ";
		std::cin >> RaceIdent;
		std::cout << "������� ������ ��������� (������,���� ������������):\n";
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
		std::cout << "1. �������� ��� ���� �����\n2. �����\n�������� ��������: ";
		std::cin >> Action;
		delete[] TranspMass;
		delete[] RaceTimes;

	}

	return 0;
}