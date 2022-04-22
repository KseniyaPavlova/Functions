#include<iostream>
#include<conio.h>
using namespace std;

#define VERTICAL_SHIFT		"\n\n\n\n\n\n\n"
#define HORIZONTAL_SHIFT	"\t\t\t\t\t"

void InitField(char field[], const int n, char player);
void PrintField(char field[], const int n, char player);
void Move(char field[], const int n, char player);
void Check(char field[], const int n, char player);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 9;
	char field[n] = {};
	//for (int i = 0; i < n; i++)field[i] = i + 49;
	do
	{
		InitField(field, n, '0');
		cout << "Еще разочек? Enter - да, все остальное - Нет" << endl;
	} while (_getch() == 13);
}
void InitField(char field[], const int n, char player)
{
	for (int i = 0; i < n; i++)field[i] = 0;
	PrintField(field, n, player);
}
void PrintField(char field[], const int n, char player)
{
	system("CLS");
	cout << VERTICAL_SHIFT;
	for (int i = 6; i >= 0; i -= 3)
	{
		cout << HORIZONTAL_SHIFT;
		cout << " ";
		for (int j = 0; j < 3; j++)
		{
			cout << field[i + j];
			if (j < 2) cout << " | ";
		}
		cout << endl;
		if (i > 0)cout << HORIZONTAL_SHIFT << "--- --- ---\n";
	}
	//Move(field, n, player);
	Check(field, n, player);
}
void Move(char field[], const int n, char player)
{
	char key;
	do
	{
		key = _getch();
		if (key == 27)return;
		if (key<'1' || key>'9') cout << "\aВы плохо нажимаете на кнопки, будьте внимательны\n";
		else if (field[key - 49] != 0 && field[key - 49] != ' ') cout << "\aКлетка уже занята\n";
	} while (key<'1' || key>'9' || field[key - 49] != 0 && field[key - 49] != ' ');
	field[key - 49] = player;

	PrintField(field, n, player /*== 'X' ? '0' : 'X'*/);
	//Check(field, n, player);
}
void Check(char field[], const int n, char player)
{
	bool game_over = false;
	if (field[0] == player && field[4] == player && field[8] == player)game_over = true;
	if (field[2] == player && field[4] == player && field[6] == player)game_over = true;
	for (int i = 6; i >= 0; i -= 3)
	{
		if (field[i] == field[i + 1] && field[i] == field[i + 2] && field[i] == player)game_over = true;
	}
	for (int i = 0; i < 3; i++)
	{
		if (field[i] == field[i + 3] && field[i] == field[i + 6] && field[i] == player)game_over = true;
	}
	if (game_over)
	{
		cout << player << " победил!\n";
		return;
	}

	//for (int i = 0; i < 9; i++)
	//{
	//	if (/*field[i] != ' ' &&*/ field[i] != 0)
	//	{
	//		if (i == 8)
	//		{
	//			cout << "Ничья\n";
	//			return;
	//		}
	//	}
	//	else break;
	//}
	bool draw = true;
	for (int i = 0; i < n; i++)
	{
		if (field[i] == 0 /*|| field[i] == ' '*/)
		{
			draw = false;
			break;
		}
	}
	if (draw)
	{
		cout << "Ничья" << endl;
		return;
	}
	//if (field[0] != ' ' && field[1] != ' ' && field[2] != ' '&& field[3] != ' '&& field[4] != ' '&& field[5] != ' '&& field[6] != ' '&& field[7] != ' '&& field[8] != ' ' && field[0] != 0 && field[1] != 0 && field[2] != 0 && field[3] != 0 && field[4] != ' '&& field[5] != 0 && field[6] != 0 && field[7] != 0 && field[8] != 0) cout << " Ничья ";
	//PrintField(field, n, player == 'X' ? '0' : 'X');
	Move(field, n, player == 'X' ? '0' : 'X');
}