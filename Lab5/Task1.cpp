#include<iostream>
#include<iomanip>
#include<clocale>
#include<cmath>


int main() {
	double a, b, h;
	std::cout << "Введите начало интервала a: ";
	std::cin >> a;
	std::cout << "Введите конец интервала b: ";
	std::cin >> b;
	std::cout << "Введите шаг h: ";
	std::cin >> h;
	if (a > b) {
		std::cout << "Ошибка: начало интервала не может быть больше конца!" << std::endl;
		return 1;
	}
	if (h <= 0) {
		std::cout << "Ошибка: шаг должен быть положительным!" << std::endl;
		return 1;
	}
	std::cout << "\n=========================" << std::endl;
	std::cout << " x | y = x^4 " << std::endl;
	std::cout << "=========================" << std::endl;
	std::cout << std::fixed << std::setprecision(4);
	for (double x = a; x <= b + 1e-9; x += h) {
		double y = x * x * x * x; // вычисляем значение функции
		std::cout << std::setw(8) << x << " | " << std::setw(12) << y << std::endl;
	}
	std::cout << "=========================" << std::endl;
	return 0;
}