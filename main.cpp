/*************************
* Автор: Огиенко В.К.    *
* Дата: 14.09.2024       *
* Название: Вариант№7    *
*************************/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const double pi = 3.14159265358979323846;

    double a = 16.74;
    
    double r3 = a * sqrt(3)/3;
    double r5 = a * sqrt(0.5 + sqrt(5)/10);
    double r8 = a * sqrt(1 + (sqrt(2)/2));
    double r10 = (a/2) * (1 + sqrt(5));
    double rn = a / (2*sin(pi/8));

    cout << "Радиус для треугольника: " << r3 << endl;
    cout << "Радиус для пятиугольника: " << r5 << endl;
    cout << "Радиус для восьмиугольника: " << r8 << endl;
    cout << "Радиус для десятиугольника: " << r10 << endl;
    cout << "Проверка радиуса по общей формуле для восьмиугольника: " << rn << endl;

}