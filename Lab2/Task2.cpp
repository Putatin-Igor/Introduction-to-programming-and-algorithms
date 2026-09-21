#include<iostream>
#include<iomanip>
#include<clocale>
using namespace std;
int main() {
	int kmh;//км/ч и м/c обычно целые
	int ms;
	setlocale(LC_ALL, "RU");
	while (true) { //Цикл для проверки правильности введенного значения
		cout << "Введите км/ч: ";
		cin >> kmh;
		if (cin.fail() || kmh <= 0) { //Проверка правильности введенного значения(должно быть введено значение типа int и оно должно быть больше 0
			cout << "Ошибка ввода! Введите числовое значение больше 0.\n";
			cin.clear();
			cin.ignore(1000, '\n');
		}
		else {
			break;
		}
	}
	ms = kmh * (static_cast<double>(1000) / 3600);//если бы я не сделал 1000 double, то возникла бы ошибка - целочисленное деление была бы равно 0, соотв. ms = 0
	cout << ms;
	return 0;
}