#include <iostream>
#include <conio.h> 
using namespace std;

int main()                       
{        
	setlocale(0, "");
	float left, right;
	int error = 0;
	cout << "������� ����� �������:";
	cin >> left;
	cout << "������� ������ �������:";
	cin >> right;
	char sign;
	cout << "������� ����:";
	cin >> sign;
	float result;
	switch (sign) {
	case '+': result = left + right;
		break;
	case'-': result = left - right;
		break;
	case'*': result = left * right;
		break;
	case'/': result = left / right;
		break;
	default: error = 1;
	}
	if (right==0 && sign=='/')
	{
		cout << "�� ���� ������ ������";
	} 
	else if (error)
	{
		cout << "������������ ����";
	}
	else
	{
		cout << "���������: " << result;
	}
     _getch();
	 return 0;
}