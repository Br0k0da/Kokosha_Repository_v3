#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

bool UserInput(string input)
{
	if (input.empty()) return false;
	try
	{
		int number = stoi(input);
		if (number <= 0) return false;
	}
	catch (...)
	{
		return false;
	}
	return true;
}

int numA(string pA) {
	cout << "������� ����� ����� A (>0): ";
	getline(cin, pA);
	while (!UserInput(pA)) {
		cout << "������� ����� ����� A (>0): ";
		getline(cin, pA);
	}
	int numberA = stoi(pA);
	return numberA;
}


int numB(string pB) {
	cout << "������� ����� ����� B (>0): ";
	getline(cin, pB);
	while (!UserInput(pB)) {
		cout << "������� ����� ����� B (>0): ";
		getline(cin, pB);
	}
	int numberB = stoi(pB);
	return numberB;
}


int numC(string pC) {
	cout << "������� ����� ����� C (>0): ";
	getline(cin, pC);
	while (!UserInput(pC)) {
		cout << "������� ����� ����� C (>0): ";
		getline(cin, pC);
	}
	int numberB = stoi(pC);
	return numberB;
}


int delenie1(int pA, int pB, int pC) {
	return ((pA - pB) % pC);
}


int delenie2(int pA, int pB, int pC) {
	return (pA / (pB + pC));
}



int main()
{
	setlocale(LC_ALL, "");
	string A, B, C;
	int a = 0, b = 0, c = 0, X;

	cout << "1. ������ A" << endl;
	cout << "2. ������ B" << endl;
	cout << "3. ������ C" << endl;
	cout << "4. ������� �� ������� �������� ����� � � � �� ����� �" << endl;
	cout << "5. ����� ����� �� ������� ����� � �� ����� ����� � � �" << endl;

	do
	{
		cin >> X;
		switch (X)
		{
		case 1:
				a = numA(A); cout << endl;
			break;

		case 2:
				b = numB(B); cout << endl;
			break;

		case 3:
				c = numC(C); cout << endl;
			break;

		case 4:
			cout << "������� �� ������� �������� ����� � � � �� ����� �: " << delenie1(a, b, c) << endl;
			break;

		case 5:
			cout << "����� ����� �� ������� ����� � �� ����� ����� � � �: " << delenie2(a, b, c) << endl;
			break;
		}
	} while (true);
}