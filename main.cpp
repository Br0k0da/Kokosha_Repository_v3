#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    string A, B, C;
    int a, b, c;
    bool T = 1;

    cout << "Введите целое число A (>0): ";
    a = numA(A, T); cout << endl;

    if (T != 1) { return 0; }

    cout << "Введите целое число B (>0): ";
    b = numB(B, T); cout << endl;

    if (T != 1) { return 0; }

    cout << "Введите целое число C (>0): ";
    c = numC(C, T); cout << endl;

    if (T != 1) { return 0; }

    cout << "Остаток от деления разности чисел А и В на число С: " << delenie1(a, b, c) << endl;
    cout << "Целая часть от деления числа А на сумму чисел В и С: " << delenie2(a, b, c) << endl;
}