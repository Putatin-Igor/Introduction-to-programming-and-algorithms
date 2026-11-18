#include<iostream>
#include<iomanip>
#include<random>
using namespace std;
int main() {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dist(1, 100);
	int numbers[5][6];
	int value;
	for (int i = 0; i < 5;i++) {
		for (int j = 0; j < 5;j++) {
			value = dist(gen);
			numbers[i][j] = value;
			cout << setw(5) << numbers[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < 5; i++) {
		cin >> value;
		numbers[i][5] = value;
	}
	for (int i = 0; i < 5;i++) {
		for (int j = 0; j < 6;j++) {
			cout << setw(5) << numbers[i][j];
		}
		cout << endl;
	}
	return 0;
}