#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int numA(string pA, bool& T) {
    cin >> pA;
    int pa = atoi(pA.c_str());
    if (pa > 0) { return pa; }
    else { cout << endl << "Необходимо ЧИСЛО больше ноля!!!" << endl; T = 0; }
}

int numB(string pB, bool& T) {
    cin >> pB;
    int pb = atoi(pB.c_str());
    if (pb > 0) { return pb; }
    else { cout << endl << "Необходимо ЧИСЛО больше ноля!!!" << endl; T = 0; }
}

int numC(string pC, bool& T) {
    cin >> pC;
    int pc = atoi(pC.c_str());
    if (pc > 0) { return pc; }
    else { cout << endl << "Необходимо ЧИСЛО больше ноля!!!" << endl; T = 0; }
}



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