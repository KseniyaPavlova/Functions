//Recursion
#include<iostream>
using namespace std;

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "�� � �������" << endl;
		return;
	}
	cout << "�� �� " << floor << " �����\n";
	elevator(floor - 1);
	cout << "�� �� " << floor << " �����\n";
}

int factorial(int n)
{
	if (n < 0) return 0;
	if (n == 0) return 1;
	return n * factorial(n - 1);

	//return n < 0 ? 0 : n == 0 ? 1 : n * factorial(n - 1); 

}

double power(double n, int a)
{
	//if (a == 0) return 1;
	//else if (a > 0) return n * power(n, a - 1);
	//else /*if (a < 0)*/ return 1 / n * power(n, a + 1);

	//return a == 0 ? 1 : a > 0 ? n * power(n, a - 1):1/n*power(n, a + 1);

	return a == 0 ? 1 : a > 0 ? n*power(n, a - 1) : 1 / power(n, -a);
}

//#define ELEVATOR
//#define FACTORIAL
//#define POWER

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello World!";
	//main();

#ifdef ELEVATOR
	int n;
	cout << "������� ����� �����: "; cin >> n;
	elevator(n);
#endif // ELEVATOR

#ifdef FACTORIAL
	int n;
	cout << "������� ����� ��� ���������� ���������� "; cin >> n;
	cout << factorial(n) << endl;
#endif // FACTORIAL

#ifdef POWER
	int n, a;
	cout << "������� ��������� �������: " << endl; cin >> n;
	cout << "������� ���������� �������: " << endl; cin >> a;
	cout << n << " � " << a << " ������� " << " = " << power(n, a) << endl;
	main();
#endif // POWER


}