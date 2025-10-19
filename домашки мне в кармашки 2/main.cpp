#include <iostream>
#include <Windows.h>

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int zadacha = 1; 2; 3;
	
	std::cout << "\t\t\tНапишите цифру от 1 до 3 для нужной задачи\n";
	std::cin >> zadacha;
	if (zadacha == 1) {
		int h = 0;
		int t = 0;

		std::cout << "\t\t\t\tСамолетик хочет домой\n";

		while (true) {
			std::cout << "\t\t\tВведите расстояние (в километрах) для вашего самолета\n";
			std::cin >> h;
			if (h > 0) {
				std::cout << " "; break;
			}
			else {
				std::cout << "Вы ввели не корректное значения для самолетика\n"; continue;
			}
		}

		while (true) {
			std::cout << "Введите время (в минутах) за которое он должен данное расстояние преодолеть\n";
			std::cin >> t;
			if (t > 0) {
				std::cout << " "; break;
			}
			else {
				std::cout << "Вы ввели не корректное значения для самолетика\n"; continue;
			}
		}

		if ("слава истины") {
			int q = h * t;
			std::cout << q << "\t\t\t\tВаша скорость!!!!!!!\n";
		}
	}
	if (zadacha == 2) {
		double t1{}, t2{}, t3{}, g1{}, g2{}, g3{}, grivn{};

		std::cout << "\t\t\t\tСкутер и его друзья\n";

		while (true) {
			std::cout << "\t\t\tВведите часы начала работы вашего скутера\n";
			std::cin >> t1;
			if (t1 <= 24 || t1 == 0) {
				std::cout << " ";
			}
			else {
				std::cout << "Нельзя так"; continue;
			}
			std::cout << "\t\t\tВведите минуты начала работы вашего скутера\n";
			std::cin >> t2;

			if (t2 <= 60 || t2 == 0) {
				std::cout << " ";
			}
			else {
				std::cout << "Нельзя так"; continue;
			}
			std::cout << "\t\t\tВведите секунды начала работы вашего скутера\n";
			std::cin >> t3;

			if (t3 <= 60 || t3 == 0) {
				std::cout << " ";
			}
			else {
				std::cout << "Нельзя так"; continue;
			}
			break;
		}

		while (true) {
			std::cout << "\t\t\tВведите часы завершения работы вашего скутера\n";
			std::cin >> g1;
			if (g1 <= 24 || g1 == 0) {
				std::cout << " ";
			}
			else {
				std::cout << "Нельзя так"; continue;
			}
			std::cout << "\t\t\tВведите минуты завершения работы вашего скутера\n";
			std::cin >> g2;

			if (g2 <= 60 || g2 == 0) {
				std::cout << " ";
			}
			else {
				std::cout << "Нельзя так"; continue;
			}
			std::cout << "\t\t\tВведите секунды завершения работы вашего скутера\n";
			std::cin >> g3;

			if (g3 <= 60 || g3 == 0) {
				std::cout << " ";
			}
			else {
				std::cout << "Нельзя так"; continue;
			}
			break;
		}
		t2 += t1 * 60;
		g2 += g1 * 60;
		t2 += 1 / (60 / t3);
		g2 += 1 / (60 / g3);
		grivn = (g2 - t2) * 2;
		std::cout << "\t\t\tЗа катание вам нужно заплатить:" << grivn << " гривн";
	}
	if (zadacha == 3) {
		double h{}, rashod{}, t1{}, t2{}, t3{}, banan1{}, banan2{}, banan3{};
		char i = ',';

		std::cout << "\t\t\t\tДальняя поездка в Магдан\n";

		while (true) {
			std::cout << "Введите расстояние вашей поездки в Магадан\n";
			std::cin >> h;
			if (h <= 0) {
				std::cout << "Слыш, попутчик, бабки плати. Ты куда с таким расстоянием собрался, гений чертов\n"; continue;
			}
			std::cout << "Введите расход бензина на 100км\n";
			std::cin >> rashod;
			if (rashod <= 0) {
				std::cout << "Cлыш, попутчик, бабки плати. Родной, ты на самокате передвигаешься с такими расходами?\n"; continue;
			}
			std::cout << "Введите цену на 3 вида бензина: 92, 95, 98 (через запятую)\n";
			std::cin >> t1 >> i >> t2 >> i >> t3;
			if (t1 <= 0 && t2 <= 0 && t3 <= 0) {
				std::cout << "Cлыш, попутчик, бабки плати. Не забывай, что мы в России)) а тут такие цены максимум на медицину и мамочек в декрете\n"; continue;
			}
			break;
		}

		banan1 = ((rashod / 100) * h) * t1;
		banan2 = ((rashod / 100) * h) * t2;
		banan3 = ((rashod / 100) * h) * t3;
	  
		system("pause");
		system("cls");

		std::cout << "Предоставляем вашему вниманию расчетную таблицу МАГАДАН\n";
		std::cout << "-----------------------\n";
		std::cout << h << "   " << rashod << "   " << banan1 << "   " << std::endl;
		std::cout << h << "   " << rashod << "   " << banan2 << "   " << std::endl;
		std::cout << h << "   " << rashod << "   " << banan3 << "   " << std::endl;
		std::cout << "-----------------------\n";

	}
	return 0;
}