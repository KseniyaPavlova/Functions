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
	/*cout << "����� ����� " <<*/ shiftLeft(arr, n, number_of_shifts) /*<< endl*/;
	Print(arr, n);
	/*	cout << "����� ������ " <<*/shiftRight(arr, n, number_of_shifts);/*<< endl;*/
	/*const int m = 8;
	int brr[m];
	FillRand(brr, m);
	Print(brr, m);
	Sort(brr, m);
	Print(brr, m);*/
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


	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);

}










