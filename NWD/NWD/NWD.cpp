// NWD.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int nwd(int _a, int _b);
int main()
{
	int liczba_testow;
	//cout << "Podaj liczbe testow" << endl;
	cin >> liczba_testow;
	int	*tablica = new int [liczba_testow];

	for (int i = 0; i < liczba_testow; i++)
	{
		int a, b;
	//	cout << "podaj liczby do wyliczenia NWD" << endl;
		cin >> a >> b;
		tablica[i] = nwd(a, b);
	}

	for (int i = 0; i < liczba_testow; i++)
	{
		cout <<tablica[i]<< endl;
	}

	system("pause");
    return 0;
}

int nwd(int _a, int _b)
{
	int wynik=0;

	if ((_a == 0) || (_b == 0)) return 0;
	else if (_a%_b == 0) return _b;
	else if (_b%_a == 0) return _a;
	else if (_a < _b) return nwd(_a, _b%_a);
	else if (_a > _b) return  nwd(_b, _a%_b);
}