int numA(string pA, bool& T) {
    cout << "Введите целое число A (>0): ";
    cin >> pA;
    int pa = atoi(pA.c_str());
    if (pa > 0) { T=1;return pa; }
    else { cout << endl << "!!!!!!!!Необходимо ЧИСЛО больше ноля!!!!!!!!" << endl;}
}