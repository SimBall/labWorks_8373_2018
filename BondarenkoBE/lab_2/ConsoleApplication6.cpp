// ConsoleApplication6.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <ctime>
using namespace std;
const int Num = 10;

int main()
{
	srand(time(0));
	int Mas[Num];
	int Odd[Num];
	for (int i = 0; i < Num; i++)
	{
		Mas[i] = rand();
		cout << "Element #" << i+1 << ": " << Mas[i] << endl;
	}
	cout << endl;

	int ex=0;
	int it=0;
	while (ex < Num-1)
	{
		if (Mas[it] > Mas[it + 1])
		{
			int tmp = Mas[it];
			Mas[it] = Mas[it + 1];
			Mas[it + 1] = tmp;
			ex = 0;
		}
		it = (it + 1) % (Num - 1);
		ex = ex + 1;
	}

	for (int i = 0; i < Num; i++)
	{
		cout << "Sorted element #" << i+1 << ": " << Mas[i] << endl;
	}
	cout << endl;
	int j = 0;
	for (int i = 0; i < Num; i++)
	{
		if ((Mas[i] % 2) != 0)
		{
			Odd[j] = Mas[i];
			j++;
			cout << "Odd element #" << j << ": " << Odd[j-1] << endl;
		}
	}
	float sum = 0;
	int min = Odd[0];
	int max = Odd[0];
	int sch = 0;
	for (int i = 1; i < j; i++)
	{
		if (Odd[i] > max)
		{
			max = Odd[i];
		}
		if (Odd[i] < min)
		{
			min = Odd[i];
		}
		sum = sum + Odd[i];
	}
	cout << "Minimal element: " << min << endl;
	cout << "Maximum element: " << max << endl;
	cout << "Arithmetic mean: " << sum/j<< endl;
	_getch();
    return 0;
}