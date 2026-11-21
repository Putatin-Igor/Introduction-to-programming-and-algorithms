#include<iostream>
#include<string>
using namespace std;
int main(){
	string n1 = "She reads books.";
	string n2 = n1.substr(3, 5);
	cout << n2;
	return 0;
}