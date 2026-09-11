#include<iostream>
#include<clocale>
#include<string>
#include<iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double rubles, dollars, euro;//Доллары, евро и рубли могут быть нецелыми
    double number;//дополнительная переменная для ввода кол-ва валюты
    string valuta;//название валюты
    while (true) {//проверка правильности введеной валюты
        cout << "Введите название валюты: ";
        cin >> valuta;
        if (valuta == "rubles" || valuta == "dollars" || valuta == "euro") {
            break;
        }
        else {
            cout << "Ошибка ввода.\n";
        }
    }
    while (true) {//проверка правильности введения кол-ва валюты
        cout << "Введите количество: ";
        cin >> number;

        if (cin.fail() || number < 0) {
            cout << "Ошибка ввода!\n";
            cin.clear();
            cin.ignore(1000, '\n');
        }
        else {
            break;
        }
    }
    if (valuta == "rubles") {//если пользователь ввел рубли
        rubles = number;
        dollars = rubles / 83.95;
        euro = rubles / 97.46;
    }
    else if (valuta == "dollars") {//если пользователь ввел доллары
        dollars = number;
        rubles = dollars * 83.95;
        euro = rubles / 97.46;
    }
    else if (valuta == "euro") {//если пользователь ввел евро
        euro = number;
        rubles = euro * 97.46;
        dollars = rubles / 83.95;
    }
    cout << fixed << setprecision(2)
        << rubles << " rubles "
        << dollars << " dollars "
        << euro << " euro";

    return 0;
}