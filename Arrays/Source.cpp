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
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива " << Avg(arr, n) << endl;
	cout << "Минимальное значение массива " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение массива " << maxValueIn(arr, n) << endl;

	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
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
	cout << "Сумма элементов массива: " << Sum(brr, m) << endl;
	cout << "Среднее арифметическое элементов массива " << Avg(brr, m) << endl;
	cout << "Минимальное значение массива " << minValueIn(brr, m) << endl;
	cout << "Максимальное значение массива " << maxValueIn(brr, m) << endl;
	cout << delimiter << endl;

	char arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << delimiter << endl;
	Sort(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(arr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива " << Avg(arr2, ROWS, COLS) << endl;
	cout << "Минимальное значение массива " << minValueIn(arr2, ROWS, COLS) << endl;
	cout << "Максимальное значение массива " << maxValueIn(arr2, ROWS, COLS) << endl;
	cout << delimiter << endl;


}










