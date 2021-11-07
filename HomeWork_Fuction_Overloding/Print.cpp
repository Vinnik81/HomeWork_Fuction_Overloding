#include"Print.h"
//Print
template<typename T> void Print(T arr[], const unsigned int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
//двумерный
template<typename T> void Print(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
//ReversPrint
template<typename T> void ReversePrint(T arr[], const unsigned int N)
{
	for (int i = N - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
//двумерный
template<typename T> void ReversePrint(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	for (int i = ROWS - 1; i >= 0; i--)
	{
		for (int j = COLS - 1; j >= 0; j--)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}