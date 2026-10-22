#include<iostream>
#include<clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int number;
	cout << "Введите число от 1 до 10: ";
	cin >> number;
	switch (number) {
	case 1:
		cout << "One";
		break;
	case 2:
		cout << "Two";
		break;
	case 3:
		cout << "Three";
		break;
	case 4:
		cout << "Four";
		break;
	case 5:
		cout << "Five";
		break;
	case 6:
		cout << "Six";
		break;
	case 7:
		cout << "Seven";
		break;
	case 8:
		cout << "Eight";
		break;
	case 9:
		cout << "Nine";
		break;
	case 10:
		cout << "Ten";
		break;
	default:
		cout << "Вы ввели символ, отличающийся от 1, 2, 3, 4, 5, 6, 7, 8, 9 и 10";
		break;
	}
	return 0;
}