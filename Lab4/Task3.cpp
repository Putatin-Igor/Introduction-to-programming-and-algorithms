#include<iostream>
#include<clocale>
#include<random>
#include<string>

int main() {
	setlocale(LC_ALL, "RU");
	int topic;
	int question;
	std::string answer;
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dist(1, 5);//Рандомная цифра от 1 до 5
	std::cout << "Введите номер темы:" << "\n" << "1. C++" << "\n" << "2. Python" << "\n" << "3. Java" << std::endl;
	std::cin >> topic;
	question = dist(gen);//Генерация рандомной цифры
	switch (topic) {
	case 1:
		switch (question) {
		case 1:
			std::cout << "Какое ключевое слово используется для создания класса?: ";
			std::cin >> answer;
			if (answer == "class") {
				std::cout << "Ответ верный" << std::endl;
			}
			else {
				std::cout << "Ответ неверный" << std::endl;
			}
			break;
		case 2:
			std::cout << "Какое ключевое слово немедленно завершает цикл?: ";
			std::cin >> answer;
			if (answer == "break") {
				std::cout << "Ответ верный" << std::endl;
			}
			else {
				std::cout << "Ответ неверный" << std::endl;
			}
			break;
		case 3:
			std::cout << "Какой тип данных хранит целые числа?: ";
			std::cin >> answer;
			if (answer == "int") {
				std::cout << "Ответ верный" << std::endl;
			}
			else {
				std::cout << "Ответ неверный" << std::endl;
			}
			break;
		case 4:
			std::cout << "Какое ключевое слово используется для объявления константы?: ";
			std::cin >> answer;
			if (answer == "const") {
				std::cout << "Ответ верный" << std::endl;
			}
			else {
				std::cout << "Ответ неверный" << std::endl;
			}
			break;
		case 5:
			std::cout << "Какое ключевое слово возвращает значение из функции?: ";
			std::cin >> answer;
			if (answer == "return") {
				std::cout << "Ответ верный" << std::endl;
			}
			else {
				std::cout << "Ответ неверный" << std::endl;
			}
			break;
		}
		break;
	case 2:
		switch (question) {
		case 1:
			std::cout << "Какое ключевое слово используется для создания функции?: ";
			std::cin >> answer;
			if (answer == "def") {
				std::cout << "Ответ верный" << std::endl;
			}
			else {
				std::cout << "Ответ неверный" << std::endl;
			}
			break;
		case 2:
			std::cout << "Какой тип данных хранит целые числа?: ";
			std::cin >> answer;
			if (answer == "int") {
				std::cout << "Ответ верный" << std::endl;
			}
			else {
				std::cout << "Ответ неверный" << std::endl;
			}
			break;
		case 3:
			std::cout << "Какое ключевое слово используется для проверки условия?: ";
			std::cin >> answer;
			if (answer == "if") {
				std::cout << "Ответ верный" << std::endl;
			}
			else {
				std::cout << "Ответ неверный" << std::endl;
			}
			break;
		case 4:
			std::cout << "Какое ключевое слово используется для создания цикла по последовательности?: ";
			std::cin >> answer;
			if (answer == "for") {
				std::cout << "Ответ верный" << std::endl;
			}
			else {
				std::cout << "Ответ неверный" << std::endl;
			}
			break;
		case 5:
			std::cout << "Какое значение обозначает отсутствие значения?: ";
			std::cin >> answer;
			if (answer == "None") {
				std::cout << "Ответ верный" << std::endl;
			}
			else {
				std::cout << "Ответ неверный" << std::endl;
			}
			break;
		}
		break;
	case 3:
		switch (question) {
		case 1:
			std::cout << "Какое ключевое слово используется для создания объекта?: ";
			std::cin >> answer;
			if (answer == "new") {
				std::cout << "Ответ верный" << std::endl;
			}
			else {
				std::cout << "Ответ неверный" << std::endl;
			}
			break;
		case 2:
			std::cout << "Какое ключевое слово используется для объявления класса?: ";
			std::cin >> answer;
			if (answer == "class") {
				std::cout << "Ответ верный" << std::endl;
			}
			else {
				std::cout << "Ответ неверный" << std::endl;
			}
			break;
		case 3:
			std::cout << "Какой тип данных хранит целые числа?: ";
			std::cin >> answer;
			if (answer == "int") {
				std::cout << "Ответ верный" << std::endl;
			}
			else {
				std::cout << "Ответ неверный" << std::endl;
			}
			break;
		case 4:
			std::cout << "Какое ключевое слово используется для проверки условия?: ";
			std::cin >> answer;
			if (answer == "if") {
				std::cout << "Ответ верный" << std::endl;
			}
			else {
				std::cout << "Ответ неверный" << std::endl;
			}
			break;
		case 5:
			std::cout << "Какое ключевое слово используется для наследования класса?: ";
			std::cin >> answer;
			if (answer == "extends") {
				std::cout << "Ответ верный" << std::endl;
			}
			else {
				std::cout << "Ответ неверный" << std::endl;
			}
			break;
		}
		break;
	default:
		std::cout << "Неправильный ввод" << std::endl;
		break;
	}
	return 0;
}