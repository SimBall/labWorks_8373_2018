#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	float first, second;
	cout << "������� ������ �����:";
	cin >> first;
	char sign;
	cout << "������� ����:";
	cin >> sign;
	cout << "������� ������ �����:";
	cin >> second;
	float result;
	int error = 0;
	if (second == 0) {
		if (sign == '/') {
			cout << "������ �� ���� ������" << endl;
			error = 1;
		}
	}
		switch (sign) {
		case '+': result = first + second;
			break;
		case '-': result = first - second;
			break;
		case '*': result = first * second;
			break;
		case '/': result = first / second;
			break;
		default: 	error = 1;
			cout << "������������ ���� �����" << endl;
			break;
		}
		if (error == 1) {  }
		else
		{cout << "���������:" << result << endl;}
	system("pause");
}