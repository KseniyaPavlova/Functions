//Functions
#include<iostream>
using namespace std;

int Add(int a, int b); //�������� ������� (���������� �������) function declaration
int Sub(int a, int b); // �������� ������� ������ �� ��������� �������
int Mul(int a, int b /*����������� ��������� */);
double Div(int a, int b);
double Stepen(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "������� ��� �����: "; cin >> a >> b;
	int c = Add(a, b); //����� ������� - function call
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b/*������������ �������*/) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
	cout << a << " � ������� " << b << " = " << Stepen(a, b) << endl;
}
int Add(int a, int b) // ���������� ������� (����������� �������) function definition
{
	int c = a + b;
	return c;
}
int Sub(int a, int b) // ���������� ������� �� ��������� � ���� �������
{
	return a - b;
}
int Mul(int a, int b)
{
	return a*b;
}
double Div(int a, int b)
{
	return (double)a / b;
}
double Stepen(int a, int b)
{
	//if (b == 0) return 1;
	if (b >= 0)
	{
		double x = 1;
		for (int i = 0; i < b; i++) x *= a;
		return x;
	}
	if (b < 0) 
	{
		double x = a;
		for (int i = 1; i < b*(-1); i++) x *= a;
		return  x = 1 / x;
	}
}