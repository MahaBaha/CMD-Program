#include "stdafx.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	cout << "Программа считает НОД по алгоритму Евклида" << endl;
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);

		while ((a != 0) && (b != 0))
		{
			if (a > b)
			{
				a = a % b;
			}
			else
			{
				b = b % a;
			}
		}

		cout << "НОД равен: " << a + b << endl;
		system("pause");
	}

	else
	{
		cout << "Ввести надо 2 числа" << endl;
		system("pause");
	}

	return 0;
}