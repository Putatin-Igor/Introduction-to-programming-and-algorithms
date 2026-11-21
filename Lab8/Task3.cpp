#include<iostream>
#include<string>
using namespace std;
int main() {
	string n1 = "The programmer enjoys writing efficient code and solving complex problems.";
	string n2 = "The student enjoys writing creative stories and solving difficult puzzles.";
	int maxlen = 0;
	string od, current;
	for (int i = 0; i < n1.length();i++) {
		for (int j = 0; j < n2.length();j++) {
			int len = 0;
			int b = 1;
			if (n1[i] == n2[j]) {
				len++;
				current += n1[i];
				while (i + b < n1.length() && j + b < n2.length() && n1[i + b] == n2[j + b]) {
					current += n1[i + b];
					len++;
					b++;
				}
				if (len > maxlen) {
					maxlen = len;
					od = current;
				}
				current = "";
			}
		}
	}
	cout << od;
	return 0;
}

