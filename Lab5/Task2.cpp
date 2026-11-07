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
	cout << "\n+----------+-----------+" << endl;
	cout << "| x | arctg(x) |" << endl;
	cout << "+----------+-----------+" << endl;
	cout << fixed << setprecision(4);
	for (double x = a; x <= b + 1e-9;x += h) {
		double y = atan(x);
		cout << "| " << setw(7) << x << " | "
			<< setw(9) << y << " |" << endl;
		if (abs(y) < abs(yMax0)) {//сравниваем абсолютные значения, чтобы понять, какое из чисел ближе к 0
			yMax0 = y;
		}
	}
	cout << "+----------+-----------+" << endl;
	cout << "Значение, ближайшее к 0: " << yMax0;
	return 0;
}