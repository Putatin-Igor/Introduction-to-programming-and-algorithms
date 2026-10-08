#include<iostream>
#include<clocale>
#include<string>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	double m;
	int value;
	string meaning;
	while (true) { //Цикл для проверки правильности введенного значения
		cout << "Введите значение: ";
		cin >> value;
		if (cin.fail() || value <= 0) { //Проверка правильности введенного значения(должно быть введено значение типа double и оно должно быть больше 0
			cout << "Ошибка ввода! Введите числовое значение больше 0.\n";
			cin.clear();
			cin.ignore(1000, '\n');
		}
		else {
			break;
		}
	}
	while (true) { //Цикл для проверки правильности введенного значения
		cout << "Напишите единицу измерения: ";
		cin >> meaning;
		if (cin.fail() && meaning != "cm" && meaning != "m" && meaning != "km") {
			cout << "Ошибка ввода! Введите единицу измерения.\n";
			cin.clear();
			cin.ignore(1000, '\n');
		}
		else {
			break;
		}
	}
	if(meaning == "cm"){
		m = value / 100.0;
	}
	else if (meaning == "m") {
		m = value;
	}
	else {
		m = value*1000;
	}
	cout << "Значение в метрах: " << m << endl;
	return 0;
}