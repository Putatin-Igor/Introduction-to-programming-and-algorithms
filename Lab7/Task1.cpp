#include<iostream>
#include<iomanip>
#include<random>
using namespace std;
int main() {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dist(0, 100);
	int numbers[4][4];
	int value;
	for (int i = 0; i < 4;i++) {
		for (int j = 0; j < 4;j++) {
			value = dist(gen);
			numbers[i][j] = value;
			cout << setw(5) << numbers[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < 4;i++) {
		for (int j = 0; j < 4;j++) {
			if (i != j && j < i) {
				cout << setw(5) << numbers[i][j];
			}
		}
		cout << endl;
	}
	return 0;
}