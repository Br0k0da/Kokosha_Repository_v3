int numC(string pC, bool& T) {
    cout << "Введите целое число C (>0): ";
    cin >> pC;
    int pc = atoi(pC.c_str());
    if (pc > 0) {T=1; return pc;}
    else { cout << endl << "!!!!!!!!Необходимо ЧИСЛО больше ноля!!!!!!!!" << endl;}
}