#include<iostream>
#include<iomanip>
#include<cmath>
#include <thread>
#include <chrono>
using namespace std;
void printRow(double x) {//Функция для выведения строки
	double y = 3 * x + 5;
	cout << "| " << setw(7) << x << " | "
		<< setw(9) << y << " |" << endl;
}
int main() {
	double a, b, h;
	cout << "Табуляция функции y = 3*x+5" << endl;
	cout << "Введите a, b, h: ";
	cin >> a >> b >> h;
	// Проверка корректности
	if (a > b || h <= 0) {
		cout << "Ошибка ввода!" << endl;
		return 1;
	}
	cout << "\n+----------+-----------+" << endl;
	cout << "| x | 3*x+5 " << endl;
	cout << "+----------+-----------+" << endl;
	cout << fixed << setprecision(4);
	for (double x = a; x <= b + 1e-9;x += h) {
		printRow(x);
		this_thread::sleep_for(chrono::milliseconds(500));//Задержка для анимации
	}
	cout << "+----------+-----------+" << endl;
	return 0;
}