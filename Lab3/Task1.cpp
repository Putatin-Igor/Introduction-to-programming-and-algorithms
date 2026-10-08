#include<iostream>
#include<clocale>
#include<iomanip>
using namespace std;
int main() {
	int number;
	setlocale(LC_ALL, "Russian");
	while (true) {
		cout << "Введите число: ";
		cin >> number;
		if (cin.fail()) { //Проверка правильности введенного значения
			cout << "Ошибка ввода! Введите число.\n";
			cin.clear();
			cin.ignore(1000, '\n');
		}
		else {
			break;
		}
	}
	if (number >= 10 && number <= 20) {
		cout << "В диапозоне";
	}
	else {
		cout << "Вне диапозона";
	}
	return 0;
}