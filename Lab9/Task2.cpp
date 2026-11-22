#include<iostream>
using namespace std;
bool IsPowerOfTwo(int n) {
	if (n <= 0) {
		return false;
	}
	while (n % 2 == 0) {
		n /= 2;
	}
	return n == 1;
}
int main(){
	int a;
	bool b;
	cin >> a;
	b = IsPowerOfTwo(a);
	cout << b;
	return 0;
}