#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int numA(string pA, bool& T) {
    cout << "Введите целое число A (>0): ";
    cin >> pA;
    int pa = atoi(pA.c_str());
    if (pa > 0) { T=1;return pa; }
    else { cout << endl << "!!!!!!!!Необходимо ЧИСЛО больше ноля!!!!!!!!" << endl;}
}

int numB(string pB, bool& T) {
    cout << "Введите целое число B (>0): ";
    cin >> pB;
    int pb = atoi(pB.c_str());
    if (pb > 0) {T=1; return pb; }
    else { cout << endl << "!!!!!!!!Необходимо ЧИСЛО больше ноля!!!!!!!!" << endl;}
}



int delenie1(int pA,int pB, int pC){
	return ((pA-pB)%pC);
}

int delenie2(int pA,int pB, int pC){
    return (pA / (pB+pC));
}

int main()
{
    setlocale(LC_ALL, "");
    string A, B, C;
    int a, b, c;
    bool T = 0;


    while(T != 1) {
        a = numA(A, T); cout << endl;
    }
    T = 0;

    while(T != 1) {
        b = numB(B, T); cout << endl;
    }
    T = 0;
    
    while(T != 1) {
        c = numC(C, T); cout << endl;
    }


    cout << "Остаток от деления разности чисел А и В на число С: " << delenie1(a, b, c) << endl;
    cout << "Целая часть от деления числа А на сумму чисел В и С: " << delenie2(a, b, c) << endl;
}



