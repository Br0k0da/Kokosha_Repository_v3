int numB(string pB, bool& T) {
    cout << "Введите целое число B (>0): ";
    cin >> pB;
    int pb = atoi(pB.c_str());
    if (pb > 0) {T=1; return pb; }
    else { cout << endl << "!!!!!!!!Необходимо ЧИСЛО больше ноля!!!!!!!!" << endl;}
}