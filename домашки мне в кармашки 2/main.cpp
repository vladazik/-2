#include <iostream>
#include <Windows.h>

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int zadacha = 1; 2; 3;
	
	std::cout << "\t\t\t�������� ����� �� 1 �� 3 ��� ������ ������\n";
	std::cin >> zadacha;
	if (zadacha == 1) {
		int h = 0;
		int t = 0;

		std::cout << "\t\t\t\t��������� ����� �����\n";

		while (true) {
			std::cout << "\t\t\t������� ���������� (� ����������) ��� ������ ��������\n";
			std::cin >> h;
			if (h > 0) {
				std::cout << " "; break;
			}
			else {
				std::cout << "�� ����� �� ���������� �������� ��� ����������\n"; continue;
			}
		}

		while (true) {
			std::cout << "������� ����� (� �������) �� ������� �� ������ ������ ���������� ����������\n";
			std::cin >> t;
			if (t > 0) {
				std::cout << " "; break;
			}
			else {
				std::cout << "�� ����� �� ���������� �������� ��� ����������\n"; continue;
			}
		}

		if ("����� ������") {
			int q = h * t;
			std::cout << q << "\t\t\t\t���� ��������!!!!!!!\n";
		}
	}
	if (zadacha == 2) {
		double t1{}, t2{}, t3{}, g1{}, g2{}, g3{}, grivn{};

		std::cout << "\t\t\t\t������ � ��� ������\n";

		while (true) {
			std::cout << "\t\t\t������� ���� ������ ������ ������ �������\n";
			std::cin >> t1;
			if (t1 <= 24 || t1 == 0) {
				std::cout << " ";
			}
			else {
				std::cout << "������ ���"; continue;
			}
			std::cout << "\t\t\t������� ������ ������ ������ ������ �������\n";
			std::cin >> t2;

			if (t2 <= 60 || t2 == 0) {
				std::cout << " ";
			}
			else {
				std::cout << "������ ���"; continue;
			}
			std::cout << "\t\t\t������� ������� ������ ������ ������ �������\n";
			std::cin >> t3;

			if (t3 <= 60 || t3 == 0) {
				std::cout << " ";
			}
			else {
				std::cout << "������ ���"; continue;
			}
			break;
		}

		while (true) {
			std::cout << "\t\t\t������� ���� ���������� ������ ������ �������\n";
			std::cin >> g1;
			if (g1 <= 24 || g1 == 0) {
				std::cout << " ";
			}
			else {
				std::cout << "������ ���"; continue;
			}
			std::cout << "\t\t\t������� ������ ���������� ������ ������ �������\n";
			std::cin >> g2;

			if (g2 <= 60 || g2 == 0) {
				std::cout << " ";
			}
			else {
				std::cout << "������ ���"; continue;
			}
			std::cout << "\t\t\t������� ������� ���������� ������ ������ �������\n";
			std::cin >> g3;

			if (g3 <= 60 || g3 == 0) {
				std::cout << " ";
			}
			else {
				std::cout << "������ ���"; continue;
			}
			break;
		}
		t2 += t1 * 60;
		g2 += g1 * 60;
		t2 += 1 / (60 / t3);
		g2 += 1 / (60 / g3);
		grivn = (g2 - t2) * 2;
		std::cout << "\t\t\t�� ������� ��� ����� ���������:" << grivn << " �����";
	}
	if (zadacha == 3) {
		double h{}, rashod{}, t1{}, t2{}, t3{}, banan1{}, banan2{}, banan3{};
		char i = ',';

		std::cout << "\t\t\t\t������� ������� � ������\n";

		while (true) {
			std::cout << "������� ���������� ����� ������� � �������\n";
			std::cin >> h;
			if (h <= 0) {
				std::cout << "����, ��������, ����� �����. �� ���� � ����� ����������� ��������, ����� ������\n"; continue;
			}
			std::cout << "������� ������ ������� �� 100��\n";
			std::cin >> rashod;
			if (rashod <= 0) {
				std::cout << "C���, ��������, ����� �����. ������, �� �� �������� �������������� � ������ ���������?\n"; continue;
			}
			std::cout << "������� ���� �� 3 ���� �������: 92, 95, 98 (����� �������)\n";
			std::cin >> t1 >> i >> t2 >> i >> t3;
			if (t1 <= 0 && t2 <= 0 && t3 <= 0) {
				std::cout << "C���, ��������, ����� �����. �� �������, ��� �� � ������)) � ��� ����� ���� �������� �� �������� � ������� � �������\n"; continue;
			}
			break;
		}

		banan1 = ((rashod / 100) * h) * t1;
		banan2 = ((rashod / 100) * h) * t2;
		banan3 = ((rashod / 100) * h) * t3;
	  
		system("pause");
		system("cls");

		std::cout << "������������� ������ �������� ��������� ������� �������\n";
		std::cout << "-----------------------\n";
		std::cout << h << "   " << rashod << "   " << banan1 << "   " << std::endl;
		std::cout << h << "   " << rashod << "   " << banan2 << "   " << std::endl;
		std::cout << h << "   " << rashod << "   " << banan3 << "   " << std::endl;
		std::cout << "-----------------------\n";

	}
	return 0;
}