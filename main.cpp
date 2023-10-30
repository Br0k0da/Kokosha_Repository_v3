int main()
{
    int A,B,C;
    
    
    cout << "Введите целое число A: ";
    numA(A); cout << endl;
    
    cout << "Введите целое число B: ";
    numB(B); cout << endl;
    
    cout << "Введите целое число C: ";
    numC(C); cout << endl;
    
    
    cout << "Остаток от деления разности чисел А и В на число С: " << delenie1(A,B,C) << endl;
    cout << "Целая часть от деления числа А на сумму чисел В и С: " << delenie2(A,B,C) << endl;
}