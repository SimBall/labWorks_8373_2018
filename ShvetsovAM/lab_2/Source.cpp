#include <iostream>
#include <conio.h>
#include <ctime>


using namespace std;
const int SIZE = 10;


int main()
{
	srand(time(0));
	*setlocale(0, "");

	int arr_random[SIZE];
	cout << "��������������� ������: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		arr_random[i] = rand() % 100 + 1;
		cout << arr_random[i] << " ";
	}
	cout << endl;

	cout << "��������������� �� ����������� ������: " << endl;

	int j = 0, a = 0;
	int c;
	
	int arr_sort[SIZE];
	for (int j = 0; j < SIZE; j++)
	{
		while (j < SIZE)
		{
			a = j;
			while (a < SIZE)
			{
				if (arr_random[a] < arr_random[j])
				{
					c = arr_random[a];
					arr_random[a] = arr_random[j];
					arr_random[j] = c;
				}
				a++;
			}
			cout << arr_random[j] << " ";
			j++;
		}
	}
	cout << endl;

	cout << "�������� �������� �������: " << endl;
	
	int i = 0;
	for (i = 0; i < SIZE; i++)
	{
		if (arr_random[i] % 2 == 1)
		{
			cout << arr_random[i] << " ";
		}
	}
	cout << endl;
	int Min = arr_random[0];
	int Max = arr_random[1];
	float sum = 0;

	for (int i = 0; i < SIZE; i++)
	{
		if (arr_random[i] < Min)
		{
			Min = arr_random[i];
		}
		if (arr_random[i] > Max)
		{
			Max = arr_random[i];
		}
		sum += arr_random[i];
	}
	cout << "����������� ����� = " << Min << endl;
	cout << "������������ ����� = " << Max << endl;
	cout << "������� �������������� = " << sum / SIZE << endl;

	_getch();
	return 0;
}