int numA(string pA, bool& T) {
    cin >> pA;
    int pa = atoi(pA.c_str());
    if (pa > 0) { return pa; }
    else { cout << endl << "Необходимо ЧИСЛО больше ноля!!!" << endl; T = 0; }
}