#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	float number1, number2;
	char sign;
	float result;
	int error = 0;
	cout << "������� ������ �����:";
	cin >> number1;
	cout << "������� ����:";
	cin >> sign;
	cout << "������� ������ �����:";
	cin >> number2;
		if (number2 == 0 && sign == '/')
		 {
			cout << "������, �� ��������� �������� �� 0" << endl;
			error = 1;
		}
		else {
		switch (sign) {
		case '+': result = number1 + number2;
			break;
		case '-': result = number1 - number2;
			break;
		case '*': result = number1 * number2;
			break;
		case '/': result = number1 / number2;
			break;
		default: 	error = 1;
			cout << "������, �� ������� ������������ ����" << endl;
			break;
		}
	}
	if (error == 1) {
		cout << "������, ��������� ������������ �������� ������" << endl;
	}
	else
	{
		cout << "���������:" << result << endl;
	}
	system("pause");
}