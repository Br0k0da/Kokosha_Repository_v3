int numB(string pB, bool& T) {
    cin >> pB;
    int pb = atoi(pB.c_str());
    if (pb > 0) { return pb; }
    else { cout << endl << "Необходимо ЧИСЛО больше ноля!!!" << endl; T = 0; }
}