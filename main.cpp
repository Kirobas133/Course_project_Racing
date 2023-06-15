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



int GroundRaceList(Transport** TranspMass, int dist, const std::string& TransportList) {
	int Action, EndReg, TranspCounts;
	std::string WrongTS = "������� ���������������� ������������ ��� ������������� ��������!\n";
	TranspCounts = 0;
	EndReg = 0;
	std::string RegTS;

	std::cout << "������ ���� ���������������� ���� �� 2 ������������ ��������\n1.���������������� ���������\n �������� ��������: ";
	std::cin >> Action;
	std::cout << std::endl;
	while (1) {
		std::cout << "����� ��� ��������� ����������. ����������: " << dist << std::endl;
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
				TranspCounts == 0 ? RegTS = RegTS + "�������-���������" : RegTS = RegTS + ", �������-���������";
				TranspCounts++;
				std::cout << "�������-��������� ������� ����������������!\n";
				break;

			case 2:
				std::cout << WrongTS;
				break;

			case 3:
				TranspMass[TranspCounts] = &camel;
				TranspCounts == 0 ? RegTS = RegTS + "�������" : RegTS = RegTS + ", �������";
				TranspCounts++;
				std::cout << "������� ������� ���������������!\n";
				break;

			case 4:
				TranspMass[TranspCounts] = &centaur;
				TranspCounts == 0 ? RegTS = RegTS + "�������" : RegTS = RegTS + ", �������";
				TranspCounts++;
				std::cout << "������� ������� ���������������!\n";
				break;

			case 5:
				std::cout << WrongTS;
				break;

			case 6:
				TranspMass[TranspCounts] = &fastfuriouscamel;
				TranspCounts == 0 ? RegTS = RegTS + "�������-���������" : RegTS = RegTS + ", �������-���������";
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
int AirRaceList(Transport** TranspMass, int dist, const std::string& TransportList) {
	int Action, EndReg, TranspCounts;
	std::string WrongTS = "������� ���������������� ������������ ��� ������������� ��������!\n";
	TranspCounts = 0;
	EndReg = 0;
	std::string RegTS;

	std::cout << "������ ���� ���������������� ���� �� 2 ������������ ��������\n1.���������������� ���������\n �������� ��������: ";
	std::cin >> Action;
	std::cout << std::endl;
	while (1) {
		std::cout << "����� ��� ���������� ����������. ����������: " << dist << std::endl;
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
				TranspCounts == 0 ? RegTS = RegTS + "�����" : RegTS = RegTS + ", �����";
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
				TranspCounts == 0 ? RegTS = RegTS + "����" : RegTS = RegTS + ", ����";
				TranspCounts++;
				std::cout << "���� ������� ���������������!\n";
				break;

			case 6:
				std::cout << WrongTS;
				break;

			case 7:
				TranspMass[TranspCounts] = &aircarpet;
				TranspCounts == 0 ? RegTS = RegTS + "�����-�������" : RegTS = RegTS + ", �����-�������";
				TranspCounts++;
				std::cout << "�����-������� ������� ���������������!\n";
				break;
			}
		}
	}
}
int AllRaceList(Transport** TranspMass, int dist, const std::string& TransportList) {
	int Action, EndReg, TranspCounts;
	TranspCounts = 0;
	EndReg = 0;
	std::string RegTS;

	std::cout << "������ ���� ���������������� ���� �� 2 ������������ ��������\n1.���������������� ���������\n �������� ��������: ";
	std::cin >> Action;
	std::cout << std::endl;
	while (1) {
		std::cout << "����� ��� ��������� � ���������� ����������. ����������: " << dist << std::endl;
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
					TranspCounts == 0 ? RegTS = RegTS + "�������-���������" : RegTS = RegTS + ", �������-���������";
					TranspCounts++;
					std::cout << "�������-��������� ������� ����������������!\n";
					break;

				case 2:
					TranspMass[TranspCounts] = &broom;
					TranspCounts == 0 ? RegTS = RegTS + "�����" : RegTS = RegTS + ", �����";
					TranspCounts++;
					std::cout << "����� ������� ����������������!\n";
					break;

				case 3:
					TranspMass[TranspCounts] = &camel;
					TranspCounts == 0 ? RegTS = RegTS + "�������" : RegTS = RegTS + ", �������";
					TranspCounts++;
					std::cout << "������� ������� ���������������!\n";
					break;

				case 4:
					TranspMass[TranspCounts] = &centaur;
					TranspCounts == 0 ? RegTS = RegTS + "�������" : RegTS = RegTS + ", �������";
					TranspCounts++;
					std::cout << "������� ������� ���������������!\n";
					break;

				case 5:
					TranspMass[TranspCounts] = &eagle;
					TranspCounts == 0 ? RegTS = RegTS + "����" : RegTS = RegTS + ", ����";
					TranspCounts++;
					std::cout << "���� ������� ���������������!\n";
					break;

				case 6:
					TranspMass[TranspCounts] = &fastfuriouscamel;
					TranspCounts == 0 ? RegTS = RegTS + "�������-���������" : RegTS = RegTS + ", �������-���������";
					TranspCounts++;
					std::cout << "�������-��������� ������� ���������������!\n";
					break;

				case 7:
					TranspMass[TranspCounts] = &aircarpet;
					TranspCounts == 0 ? RegTS = RegTS + "�����-�������" : RegTS = RegTS + ", �����-�������";
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

	int raceIdent, transpCounts, action = 1;
	int dist;
	std::string TransportList = "1. �������-���������\n2. �����\n3. �������\n4. �������\n5. ���\n6. �������-���������\n7. ����-�������\n0. ��������� �����������\n";
	std::cout << "����� ���������� � �������� ���������!\n";
	while (action != 2) {
		Transport** TranspMass = new Transport* [7];
		std::cout << "1.����� ��� ��������� ����������\n2.����� ��� ���������� ����������\n3.����� ��� ��������� � ���������� ����������\n�������� ��� �����: ";
		std::cin >> raceIdent;
		std::cout << std::endl;
		std::cout << "������� ������ ��������� (������,���� ������������):\n";
		std::cin >> dist;
		std::cout << std::endl;
		if (raceIdent == 3) {
			transpCounts = AllRaceList(TranspMass, dist, TransportList);
			std::cout << std::endl;
		}
		else if (raceIdent == 2) {
			transpCounts = AirRaceList(TranspMass, dist, TransportList);
			std::cout << std::endl;
		}
		else {
			transpCounts = GroundRaceList(TranspMass, dist, TransportList);
			std::cout << std::endl;
		}

		double* RaceTimes = new double[transpCounts];
		Race race(TranspMass, transpCounts, dist);
		race.RaceResult(RaceTimes);
		race.PrintRace(RaceTimes);
		std::cout << std::endl;
		std::cout << "1. �������� ��� ���� �����\n2. �����\n�������� ��������: ";
		std::cin >> action;
		std::cout << std::endl;
		delete[] TranspMass;
		delete[] RaceTimes;

	}

	return 0;
}