#include<iostream>
#include<iomanip>
#include<clocale>
#include<random>
#include<vector>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dist(1, 20);
	vector<int> numbers;
	int value;
	for (int i = 0; i < 15; i++) {
		value = dist(gen);
		numbers.push_back(value);
	}
	for (int i = 1; i <= 20; i++) {
		int count = 0;
		for (int j = 0; j < 15; j++) {
			if (numbers[j] == i) {
				count++;
			}
		}
		cout << setw(2) << i << " | ";
		for (int j = 0; j < count; j++) {
			cout << "#";
		}
		cout << " (" << count << ")\n";
	}
	return 0;
}