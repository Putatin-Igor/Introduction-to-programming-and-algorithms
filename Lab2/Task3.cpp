#include<iostream>
#include<iomanip>
#include<clocale>
using namespace std;
int main() {
	double weight;
	double height;
	double imt;
	setlocale(LC_ALL, "RU");
	while (true) { //Цикл для проверки правильности введенного значения
		cout << "Введите вес: ";
		cin >> weight;
		if (cin.fail() || weight <= 0) { //Проверка правильности введенного значения(должно быть введено значение типа double и оно должно быть больше 0
			cout << "Ошибка ввода! Введите числовое значение больше 0.\n";
			cin.clear();
			cin.ignore(1000, '\n');
		}
		else {
			break;
		}
	}
	while (true) { //Цикл для проверки правильности введенного значения
		cout << "Введите рост: ";
		cin >> height;
		if (cin.fail() || height <= 0) { //Проверка правильности введенного значения(должно быть введено значение типа double и оно должно быть больше 0
			cout << "Ошибка ввода! Введите числовое значение больше 0.\n";
			cin.clear();
			cin.ignore(1000, '\n');
		}
		else {
			break;
		}
	}
	imt = weight / (height * height);//Ищу ИМТ
	cout << fixed << setprecision(1) << imt;
	if (imt >= 30) {//Определяю категорию
		cout << "Ожирение";
	}
	else if (imt >= 25 && imt < 30) {
		cout << "Избыточный вес";
	}
	else if (imt >= 18.5 && imt < 25) {
		cout << "Норма";
	}
	else {
		cout << "Дефицит веса";
	}
	return 0;
}