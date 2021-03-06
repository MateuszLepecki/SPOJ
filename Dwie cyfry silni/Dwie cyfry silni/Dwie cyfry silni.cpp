// Dwie cyfry silni.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int silnia_rek(int podstawa_silni);
int cyfra_jednosci_silni(int silnia); //usina pozostale cyfry
int cyfra_dziesiatek_silni(int silnia,int jednosci); //ucina pozostale cyfry

int main()
{
	int ilosc_testow;
	int z_jakiej_liczby_silnia;
	cin >> ilosc_testow;

	int* tab_jednosci = new int[ilosc_testow];
	int* tab_dziesiatek = new int[ilosc_testow];
	if ((ilosc_testow >= 1) && (ilosc_testow <= 30))
	{
		for (int i = 0; i < ilosc_testow; i++)
		{
			cin >> z_jakiej_liczby_silnia;

			if (z_jakiej_liczby_silnia <= 9)
			{
				tab_jednosci[i] = cyfra_jednosci_silni(silnia_rek(z_jakiej_liczby_silnia));
				tab_dziesiatek[i] = cyfra_dziesiatek_silni(silnia_rek(z_jakiej_liczby_silnia), cyfra_jednosci_silni(silnia_rek(z_jakiej_liczby_silnia)));
			}
			else 
			{
				tab_jednosci[i] = 0;
				tab_dziesiatek[i] = 0;
			}

		}
			
		for (int i = 0; i < ilosc_testow; i++)
		{
			cout << tab_dziesiatek[i] << " " << tab_jednosci[i] << endl;
		}
			
		
	}
	else  cout << "za duzo";
	system("pause");
    return 0;
}



int silnia_rek(int podstawa_silni)
{
	if (podstawa_silni <= 1) return 1;
	else return podstawa_silni*silnia_rek(podstawa_silni - 1);
}

int cyfra_jednosci_silni(int silnia)
{
	return silnia % 10;
}

int cyfra_dziesiatek_silni(int silnia, int jednosci)
{
	return (silnia % 100 - jednosci)/10;
}