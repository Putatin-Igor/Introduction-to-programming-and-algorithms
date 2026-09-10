#include<iostream>
#include<clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int sec, min, hour;//в данном задании нам не нужны значения double
	while (true) {
		cout << "Введите число секунд: ";
		cin >> sec;
		if (cin.fail() || sec <= 0) {//Проверка на правильность ввода
			cout << "Ошибка ввода!Введите целое число секунд.\n";
			cin.clear();
			cin.ignore(1000, '\n');
		}
		else {
			break;
		}
	}
	hour = sec / 3600;
	min = (sec - 3600 * hour) / 60;
	sec = (sec - 3600 * hour - 60 * min);
	cout << hour << " Hour " << min << " min " << sec << " sec";
	return 0;
}