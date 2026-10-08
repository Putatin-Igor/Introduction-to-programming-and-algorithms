#include<iostream>
#include<iomanip>
#include<clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int quantity;
	int count5000 = 0, count2000 = 0, count1000 = 0, count500 = 0, count200 = 0, count100 = 0;
	cout << "Напишите сумму, которая кратна 100 и меньше 100_000: ";
	cin >> quantity;
	while (cin.fail() || quantity <= 0 || quantity>100000 || quantity % 100 != 0) {
		cout << "Ошибка ввода! Введите сумму, которая кратна 100 и меньше 100_000: ";
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> quantity;
	}
	if (quantity >= 5000 && quantity != 0) {
		count5000 = quantity / 5000;
		quantity = quantity - 5000 * count5000;
	}
	if(quantity >= 2000 && quantity != 0) {
		count2000 = quantity / 2000;
		quantity = quantity - count2000 * 2000;
	}
	if(quantity >= 1000 && quantity != 0) {
		count1000 = quantity / 1000;
		quantity = quantity - count1000 * 1000;
	}
	if(quantity >= 500 && quantity != 0) {
		count500 = quantity / 500;
		quantity = quantity - count500 * 500;
	}
	if(quantity >= 200 && quantity != 0) {
		count200 = quantity / 200;
		quantity = quantity - count200 * 200;
	}
	if(quantity >= 100 && quantity != 0) {
		count100 = quantity / 100;
		quantity = quantity - count100 * 100;
	}
	cout << "5000 купюры: " << count5000 << '\n' << "2000 купюры: " << count2000 << "\n" << "1000 купюры: " << count1000 << "\n"
		<< "500 купюры: " << count500 << '\n' << "200 купюры: " << count200 << '\n' << "100 купюры: " << count100;
	return 0;
}