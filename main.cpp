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
	std::cout << "������ ���� ���������������� ���� �� 2 ������������ ��������\n1.���������������� ���������\n �������� ��������: ";
	std::cin >> Action;
	while (Action != 0) {
		std::cout << "����� ��� ��������� ����������. ����������: " << Dist << std::endl;
		std::cout << TransportList;
		std::cout << "�������� ��������� ��� 0 ��� ��������� �������� �����������: ";
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
	
	std::string TransportList = "1. �������-���������\n2. �����\n3. �������\n4. �������\n5. ���\n6. �������-���������\n7. ����-�������\n0. ��������� �����������\n";
	std::cout << "����� ���������� � �������� ���������!\n1.����� ��� ��������� ����������\n2.����� ��� ���������� ����������\n3.����� ��� ��������� � ���������� ����������\n�������� ��� �����: ";
	std::cin >> RaceIdent;
	std::cout << "������� ������ ��������� (������,���� ������������):\n";
	std::cin >> Dist;
	
	std::cout << "������ ���� ���������������� ���� �� 2 ������������ ��������\n1.���������������� ���������\n �������� ��������: ";
	std::cin >> Action;
			std::cout << "����� ��� ��������� ����������. ����������: " << Dist << std::endl;
			std::cout << TransportList;
			std::cout << "�������� ��������� ��� 0 ��� ��������� �������� �����������: ";
			std::cin >> Action;
			std::cout << "1. ���������������� ���������\n2. ������ �����\n�������� ��������: ";


	return 0;
}