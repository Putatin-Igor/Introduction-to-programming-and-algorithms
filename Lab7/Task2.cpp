#include<iostream>
#include<iomanip>
#include<random>
using namespace std;
int main() {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dist(0, 100);
	int numbers[5][5];
	int value, summg = 0, summp = 0;
	double srp, srg;
	for (int i = 0; i < 5;i++) {
		for (int j = 0; j < 5;j++) {
			value = dist(gen);
			numbers[i][j] = value;
			cout << setw(5) << numbers[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < 5;i++) {
		for (int j = 0; j < 5;j++) {
			if (i == j) {
				summg += numbers[i][j];
			}
			if (j == 4 - i) {
				summp += numbers[i][j];
			}
		}
	}
	srg = static_cast<double>(summg) / 5;
	srp = static_cast<double>(summp) / 5;
	cout << srg << endl << srp;
	return 0;
}