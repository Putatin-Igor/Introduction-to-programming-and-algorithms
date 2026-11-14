#include<iostream>
#include<clocale>
#include<random>
#include<vector>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dist(10, 99);
	vector<int> numbers;
	int n, value, count;
	cout << "Введите количество элементов: ";
	cin >> n;
	if (cin.fail()) {
		cout << "Ошибка";
		return 1;
	}
	for (int i = 0; i < n; i++) {
		value = dist(gen);
		numbers.push_back(value);
	}
	for (int number : numbers) {
		cout << number << endl;
		if (number < 30) {
			count++;
		}
	}
	cout << count;
	return 0;
}