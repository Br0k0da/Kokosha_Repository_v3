#include <iostream>

using namespace std;

int main()
{
    int A,B,C;
    
    
    cout << "Введите целое число A: ";
    cin >> A; cout << endl;
    
    cout << "Введите целое число B: ";
    cin >> B; cout << endl;
    
    cout << "Введите целое число C: ";
    cin >> C; cout << endl;
    
    int delenie1 = (A-B)%C;
    int delenie2 = A / (B+C);
    
    cout << "Остаток от деления разности чисел А и В на число С: " << delenie1 << endl;
    cout << "Целая часть от деления числа А на сумму чисел В и С: " << delenie2 << endl;
}