//Arrays
#include<iostream>
using namespace std;

#include"Constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Shift.h"
#include"Sort.h"
#include"Statistics.h"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� �������������� ��������� ������� " << Avg(arr, n) << endl;
	cout << "����������� �������� ������� " << minValueIn(arr, n) << endl;
	cout << "������������ �������� ������� " << maxValueIn(arr, n) << endl;

	int number_of_shifts;
	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	shiftRight(arr, n, number_of_shifts);
	cout << delimiter << endl;

	const int m = 8;
	double brr[m];
	FillRand(brr, m);
	Print(brr, m);
	Sort(brr, m);
	Print(brr, m);
	cout << "����� ��������� �������: " << Sum(brr, m) << endl;
	cout << "������� �������������� ��������� ������� " << Avg(brr, m) << endl;
	cout << "����������� �������� ������� " << minValueIn(brr, m) << endl;
	cout << "������������ �������� ������� " << maxValueIn(brr, m) << endl;
	cout << delimiter << endl;

	char arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << delimiter << endl;
	Sort(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(arr2, ROWS, COLS) << endl;
	cout << "������� �������������� ��������� ������� " << Avg(arr2, ROWS, COLS) << endl;
	cout << "����������� �������� ������� " << minValueIn(arr2, ROWS, COLS) << endl;
	cout << "������������ �������� ������� " << maxValueIn(arr2, ROWS, COLS) << endl;
	cout << delimiter << endl;


}










