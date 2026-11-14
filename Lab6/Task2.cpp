#include<iostream>
#include<clocale>
#include<random>
#include<vector>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dist(-100, 100);
	vector<int> numbers;
	int value;
	int sum = 0;
	int multiplication = 1;
	for (int i = 0; i < 20;i++) {
		value = dist(gen);
		numbers.push_back(value);
	}
	for (int number : numbers) {
		cout << number << endl;
		if (number < 0) {
			sum += number;
		}
		if (number > 0) {
			multiplication *= number;
		}
	}
	cout << sum << endl;
	cout << multiplication;
	return 0;
}
