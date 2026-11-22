#include<iostream>
#include<cmath>
#include<random>
using namespace std;
int generation() {//функция генерации числа
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dist(0, 10);
	return dist(gen);
}
int attempt() {//ввод попытки
	int n;
	cin >> n;
	return n;
}
bool check(int i, int j) {//проверка
	return i == j;
}
int count(bool (*func)(int,int), int x, int y, int (*res)()) {//подсчет
	int sum = 0;
	while (func(x, y)!=1) {
		sum++;
		y = res();
	}
	return sum;
}
void printResult(int result) {//вывод статистики
	cout << result;
}
int main() {
	int a, b, sum;
	a = generation();
	b = attempt();
	printResult(count(check, a, b, attempt));
	return 0;
}
