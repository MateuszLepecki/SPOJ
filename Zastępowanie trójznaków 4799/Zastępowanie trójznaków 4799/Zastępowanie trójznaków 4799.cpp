// Zastępowanie trójznaków 4799.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
	fstream plik;
	plik.open("tekst.txt", ios::in);
	if (plik.good() == false)
	{
		cout << "nie mozna otworzyc pliku" << endl;
	}
	string linia;
	while (getline(plik,linia))
	{
		for (int i = 0; i < linia.length(); i++)
		{
			if ((linia[i] == '?') && (linia[i + 1] == '?')&&(linia[i + 2] == '='))
			{
				linia.erase(i, 3);
				linia.insert(i,"#");
				//linia.replace(i, 3, "#");
			}
			else if ((linia[i] == '?') && (linia[i + 1] == '?') && (linia[i + 2] == '/'))
			{
			linia.insert(i,"\\");
			}
			else if ((linia[i] == '?') && (linia[i + 1] == '?') && (linia[i + 2] == '('))
			{
				linia.replace(i, 3, "[");
			}
			else if ((linia[i] == '?') && (linia[i + 1] == '?') && (linia[i + 2] == ')'))
			{
				linia.replace(i, 3, "]");
			}
			else if ((linia[i] == '?') && (linia[i + 1] == '?') && (linia[i + 2] == '!'))
			{
				linia.replace(i, 3, "|");
			}
			else if ((linia[i] == '?') && (linia[i + 1] == '?') && (linia[i + 2] == '<'))
			{
				linia.replace(i, 3, "{");
			}
			else if ((linia[i] == '?') && (linia[i + 1] == '?') && (linia[i + 2] == '>'))
			{
				linia.replace(i, 3, "}");
			}
			else if ((linia[i] == '?') && (linia[i + 1] == '?') && (linia[i + 2] == '-'))
			{
				linia.replace(i, 3, "~");
			}
		}
		cout << linia << endl;
		
	}
	system("pause");
    return 0;
}

