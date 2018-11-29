// ConsoleApplication20.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>  
#include <conio.h>

using namespace std;
const int N = 10;
int m1, m2, n1, n2, m3, n3;
char act, actmult;

void my_add(int* arr1, int* arr2, int* arr3)
{
	m3 = m1;
	n3 = n1;
	for (int i = 0; i < m3; i++)
	{
		for (int j = 0; j < n3; j++)
			*(arr3 + (i*N) + j) = *(arr1 + (i*N) + j)+*(arr2 + (i*N) + j);
	}
}

void my_sub(int* arr1, int* arr2, int* arr3)
{
	m3 = m1;
	n3 = n1;
	for (int i = 0; i < m3; i++)
	{
		for (int j = 0; j < n3; j++)
			*(arr3 + (i*N) + j) = *(arr1 + (i*N) + j) - *(arr2 + (i*N) + j);
	}
}

void my_mult(int* arr1, int* arr2, int* arr3)
{
	if (actmult = '2')
	{
		swap(m1, m2);
		swap(n1, n2);
	}
	m3 = m1;
	n3 = n2;
	for (int i = 0; i < m3; i++)
	{
		for (int j = 0; j < n3; j++)
		{
			int sum = 0;
			for (int p = 0; p < m2; p++)
				sum += *(arr1 + (i*N) + p)**(arr2 + (p*N) + j);
			*(arr3 + (i*N) + j) = sum;
		}
	}
}

int main()
{
	setlocale(0, "");
	int arr1[N][N], arr2[N][N], arr3[N][N];
	cout << "��� ���������� ������ ��������� ������������� ������ �������� �� " << N << " �� " << N << " �����!" << endl << endl;
	do {
	cout << "������� ���������� ����� ������� �������: ";
	cin >> m1;
	cout << "������� ���������� �������� ������� �������: ";
	cin >> n1;
	for (int i = 0; i < m1; i++)
	{
		cout << "������� " << i + 1 << "-�� ������ ������� �������: ";
		for (int j = 0; j < n1; j++)
			cin >> arr1[i][j];
	}
	cout << "������� ���������� ����� ������� �������: ";
	cin >> m2;
	cout << "������� ���������� �������� ������� �������: ";
	cin >> n2;
	for (int i = 0; i < m2; i++)
	{
		cout << "������� " << i + 1 << "-�� ������ ������� �������: ";
		for (int j = 0; j < n2; j++)
			cin >> arr2[i][j];
	}
		cout << endl << "�������� ��������� ��������:" << endl << "1 - �������� ������" << endl << "2 - ��������� ������" << endl << "3 - ��������� ������" << endl;
		act = _getch();
		switch (act)
		{
		case '1':
			if ((m1 == m2) && (n1 == n2))
				my_add(*arr1, *arr2, *arr3);
			else
				cout << "������� ������ �� ���������. ���������� ��� ���.";
			break;
		case '2':
			if ((m1 == m2) && (n1 == n2))
				my_sub(*arr1, *arr2, *arr3);
			else
				cout << "������� ������ �� ���������. ���������� ��� ���.";
			break;
		case '3':
			cout << endl << "�������� ��� ���������: " << endl << "1 - A*B" << endl << "2 - B*A" << endl;
			actmult = _getch();
			if (actmult == '1')
			{
				if (m2 == n1)
					my_mult(*arr1, *arr2, *arr3);
				else
					cout << "������� ������ �� ��������� ��������� ���������. ���������� ��� ���.";
				break;
			}
			else if (actmult == '2')
			{
				if (m1 == n2)
					my_mult(*arr2, *arr1, *arr3);
				else
					cout << "������� ������ �� ��������� ��������� ���������. ���������� ��� ���.";
				break;
			}
			else
				cout << "�������� �������. ���������� ��� ���." << endl;
			break;
		default:
			cout << "�������� �������. ���������� ��� ���." << endl;
			break;
		}
		cout << endl << "��� �����: " << endl;
		for (int i = 0; i < m3; i++)
		{
			for (int j = 0; j < n3; j++)
				cout << setw(10) << right << arr3[i][j];
			cout << endl;
		}
		cout << "��� ������ ������� ESC, ��� ����������� - ����� ������ �������" << endl << endl;
		act = _getch();
	} while (act != 27);
    return 0;
}

