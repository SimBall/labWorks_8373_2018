// ConsoleApplication14.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

float my_power(float dig, int pow)
{
	float unswer = 1;
	if (pow > 0)
	for (int i = 1; i <= pow; i++)
		{
			unswer *= dig;
		}
	else
		for (int i = pow; i < 0; i++)
		{
			unswer /= dig;
		}
	return unswer;
}

int my_fact(int dig)
{
	int unswer = 1;
	for (int i = 2; i <= dig; i++)
	{
		unswer *= i;
	}
	return unswer;
}

double my_root(float dig)
{
	double unswer = dig;
	for (int i = 1; i <= 10; i++)
	{
		unswer = 0.5*(unswer + dig / unswer);
	}
	return unswer;
}

bool my_prime(int prm)
{
	for (int a = 1; a <= prm / 2; a++)
	{
		if (!((((int)my_power(a, prm - 1) - 1) % prm) == 0))
		{
			return 0;
		}
	}
	return 1;
}


int main()
{
	setlocale(0, "");
	cout << "1 - ���������� � �������, 2 - ���������, 3 - ������ ����������, 4 - �������� �� ��������: ";
	int chs=0;
	float dig1;
	int digN;
	while ((chs != 1) && (chs != 2) && (chs != 3) && (chs != 4))
	{
		cin >> chs;
		switch (chs)
		{
		case 1:
			cout << "������� ��������� (�����, ���������� � �������): ";
			cin >> dig1;
			cout << "������� ������� (�����): ";
			cin >> digN;
			while ((dig1 == 0) && (digN == 0))
			{
				cout << "���� � ������� ������� ��������� ����������. ������� ������ ��������" << endl;
				cout << "������� ��������� (�����, ���������� � �������): ";
				cin >> dig1;
				cout << "������� ������� (�����): ";
				cin >> digN;
			}
			cout << "�����: " << my_power(dig1, digN);
			break;
		case 2:
			cout << "������� ��������� ���������� (�����): ";
			cin >> digN;
			cout << "�����: " << my_fact(digN);
			break;
		case 3:
			cout << "������� ����� ��� ������ (���������������): ";
			cin >> dig1;
			cout << "�����: " << my_root(dig1);
			break;
		case 4:
			cout << "������� ����������� ����� (�����): ";
			cin >> digN;
			if (my_prime(digN))
			{
				cout << "�����: " << digN << " - �������";
			}
			else
			{
				cout << "�����: " << digN << " - ���������";
			}
			break;
		default:
			cout << "������� ���������� �����: ";
		}
	}
	_getch();
    return 0;
}

