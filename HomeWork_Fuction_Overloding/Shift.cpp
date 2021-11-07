#include"Shift.h"
#include"Print.h"
//shift_Left
template<typename T> void shiftLeft(T arr[], const unsigned int N, int k)
{
	T shift_L = T();
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j <= N - 1; j++)
		{
			(j == 0) ? shift_L = arr[0] : arr[j - 1] = arr[j];
		}
		arr[N - 1] = shift_L;
	}

	Print(arr, N);
}
//двумерный
template<typename T> void shiftLeft(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k)
{
	T shift_L = T();
	for (int a = 0; a < k; a++)
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j <= COLS - 1; j++)
			{
				(j == 0) ? shift_L = arr[i][0] : arr[i][j - 1] = arr[i][j];
			}
			arr[i][COLS - 1] = shift_L;
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
//shift_Right
template<typename T> void shiftRight(T arr[], const unsigned int N, int k)
{
	T shift_R = T();
	for (int i = 0; i < k; i++)
	{
		for (int j = N - 1; j >= 0; j--)
		{
			(j == N - 1) ? shift_R = arr[N - 1] : arr[j + 1] = arr[j];
		}
		arr[0] = shift_R;
	}

	Print(arr, N);

}
//двумерный
template<typename T> void shiftRight(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k)
{
	T shift_R = T();
	for (int a = 0; a < k; a++)
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = COLS - 1; j >= 0; j--)
			{
				(j == COLS - 1) ? shift_R = arr[i][COLS - 1] : arr[i][j + 1] = arr[i][j];
			}
			arr[i][0] = shift_R;
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}