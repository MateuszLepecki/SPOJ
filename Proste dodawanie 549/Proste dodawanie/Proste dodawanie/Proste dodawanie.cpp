// Proste dodawanie.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main()
{

	int ilosc_testow;
	cin >> ilosc_testow;
	
	for (int i = 0; i < ilosc_testow; i++)
	{
		int ile_liczb;
		cin >> ile_liczb;
		int* tab = new int[ile_liczb];
		for (int i = 0; i < ile_liczb; i++)
		{
			cin >> tab[i];
		}
		int suma=0;
		for (int i = 0; i < ile_liczb; i++)
		{
			suma += tab[i];
		}
		cout << endl << suma << endl;
	}


	system("pause");
    return 0;
}

