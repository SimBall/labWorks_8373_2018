#include "stdafx.h"
#include <iostream>
#include "string.h"
using namespace std;


int main()
{
	setlocale(0, "");
	char str1[30];
	char str2[30];
	bool Gear = false, Check = false;
	int counter = 0;


	cout << "��������� ������� ���������� ������ ������ (������ ������� � ������, ������� � �������) � ������� ���������� ������ ������. ���� ������ ������ �� ���������� � ������ ���� �� ���� ���, �� ��������� ������� *��������� �� ����������*" << endl;
	cout << "������� ������ ������, ������ �� ����� 30 ��������: ";
	cin.getline(str1, 30);
	cout << "������� ������ ������, ������ �� ����� 30 ��������: ";
	cin.getline(str2, 30);


	if (strlen(str1) < strlen(str2))
	{
		Check = false;
	}
	else
	{
		for (int i = 0; i < strlen(str1); i++)
		{
			if (str1[i] == str2[0])
			{
				Gear = false;
				while (str1[i + counter] == str2[0 + counter] && Gear == false)
				{
					counter++;
					if (counter == strlen(str2))
					{
						Check = true;
						for (int j = i; j < strlen(str2) + i; j++)
						{
							cout << j << ' ';
						}
						counter = 0;
						Gear = true;
					}
				}
			}
		}
	}
	if (Check == false)
	{
		cout << "��������� �� ����������\n";
	}
	system("pause");
	return 0;
}