// Liczby pierwsze 438.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <time.h>
#include <iostream>

using namespace std;

int ilosc_liczb;
int* generowanie_listy();
void wyswietlanie_tablicy(int* wejsciowa_tablica);
void tester_czy_liczba_pierwsza(int* wejsciowa_tablica);//dziala

int main()
{
	int *tab=generowanie_listy();
	wyswietlanie_tablicy(tab);
	tester_czy_liczba_pierwsza(tab);


	system("pause");
    return 0;
}

int* generowanie_listy()
{
	cin >> ilosc_liczb;
	int *tablica;
	tablica = new int[ilosc_liczb];
	//srand(time(NULL));
	for (int i = 0; i < ilosc_liczb; i++)
	{
		//cin >> tablica[i];
		tablica[i] = rand() % 100+1;
	}
	return tablica;
}

void tester_czy_liczba_pierwsza(int* wejsciowa_tablica)//dziala
{
	int* tablica = wejsciowa_tablica;
	for (int i = 0; i < ilosc_liczb; i++)
	{
		int j=0;
		int test = 0;
		while (j < tablica[i])
		{
			if (((tablica[i] % (j + 2) == 0) && (tablica[i] != (j + 2))) || (tablica[i] == 1))
			{
				cout << "NIE" << endl;
				test = 1;
				break;
			}
			j++;
		}
		if (test ==0) cout << "TAK" << endl;
	}

}
void wyswietlanie_tablicy(int* wejsciowa_tablica)
{
	for (int i=0; i < ilosc_liczb; i++)
	{
		cout << wejsciowa_tablica[i] << endl;
	}
}