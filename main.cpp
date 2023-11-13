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

int numC(string pC, bool& T) {
    cout << "Введите целое число C (>0): ";
    cin >> pC;
    int pc = atoi(pC.c_str());
    if (pc > 0) {T=1; return pc;}
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
    int a = 0, b = 0, c = 0, X;
    bool T = 0;

    cout << "1. Ввести A" << endl;
    cout << "2. Ввести B" << endl;
    cout << "3. Ввести C" << endl;
    cout << "4. Остаток от деления разности чисел А и В на число С" << endl;
    cout << "5. Целая часть от деления числа А на сумму чисел В и С" << endl;
    
    do
    {
       cin >> X;
       switch(X)
       {
            case 1:
            while(T != 1) {
                a = numA(A, T); cout << endl;
            }
            T = 0;
            break;
            
            case 2:
            while(T != 1) {
                b = numB(B, T); cout << endl;
            }
            T = 0;
            break;
            
            case 3:
            while(T != 1) {
                c = numC(C, T); cout << endl;
            }
            T = 0;
            break;
            
            case 4:
            cout << "Остаток от деления разности чисел А и В на число С: " << delenie1(a, b, c) << endl;
            break;
            
            case 5:
            cout << "Целая часть от деления числа А на сумму чисел В и С: " << delenie2(a, b, c) << endl;
            break;
       }
    }while(true);
}