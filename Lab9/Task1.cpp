#include<iostream>
using namespace std;
int fact(int n) {
	if (n <= 10) {
		if (n <= 1) {
			return 1;
		}
		else {
			return n * fact(n - 1);
		}
	}
	else {
		return 0;
	}
}
int main() {
	int a;
	cin >> a;
	a = fact(a);
	cout << a;
	return 0;
}