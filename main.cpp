int numC(string pC, bool& T) {
    cin >> pC;
    int pc = atoi(pC.c_str());
    if (pc > 0) { return pc; }
    else { cout << endl << "Необходимо ЧИСЛО больше ноля!!!" << endl; T = 0; }
}