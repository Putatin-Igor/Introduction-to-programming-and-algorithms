#include<iostream>
#include<iomanip>
#include<clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	double radius;//радиус и длина окружности могут быть нецелыми
	double length;
	while (true) { //Цикл для проверки правильности введенного значения
		cout << "Введите радиус: ";
		cin >> radius;
		if (cin.fail() || radius <= 0) { //Проверка правильности введенного значения(должно быть введено значение типа double и оно должно быть больше 0
			cout << "Ошибка ввода! Введите числовое значение больше 0.\n";
			cin.clear();
			cin.ignore(1000, '\n');
		}
		else {
			break;
		}
	}
	length = 2 * 3.14 * radius;//нахожу длину окружности
	cout << fixed << setprecision(2) << lenght;
}