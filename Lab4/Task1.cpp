#include<iostream>
#include<clocale>
#include<iomanip>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int action;
	cout << "Введите код действия(1-3): ";
	cin >> action;
	switch (action) {
	case 1: 
		cout << "Start";
		break;
	case 2:
		cout << "Pause";
		break;
	case 3:
		cout << "Stop";
		break;
	default:
		cout << "Вы ввели символ, отличный от 1, 2 и 3" << endl;
	}
	return 0;
}