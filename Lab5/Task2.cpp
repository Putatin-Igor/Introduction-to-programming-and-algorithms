#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	double a, b, h;
	cout << "Табуляция функции y = arctg(x)" << endl;
	cout << "Введите a, b, h: ";
	cin >> a >> b >> h;
	// Проверка корректности
	if (a > b || h <= 0) {
		cout << "Ошибка ввода!" << endl;
		return 1;
	}
	double yFirst = atan(a);
	double yMax0 = yFirst;
	cout << "\n+----------+-----------+" << std::endl;
	cout << "| x | arctg(x) |" << std::endl;
	cout << "+----------+-----------+" << std::endl;
	cout << fixed << setprecision(4);
	for (double x = a; x <= b + 1e-9;x += h) {
		double y = atan(x);
		std::cout << "| " << std::setw(7) << x << " | "
			<< std::setw(9) << y << " |" << std::endl;
		if (abs(y) < abs(yMax0)) {//сравниваем абсолютные значения, чтобы понять, какое из чисел ближе к 0
			yMax0 = y;
		}
	}
	cout << "+----------+-----------+" << endl;
	cout << "Значение, ближайшее к 0: " << yMax0;
	return 0;
}