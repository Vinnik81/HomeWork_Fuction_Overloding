#include"Sort.h"
#include"Print.h"
//Sort
template<typename T> void Sort(T arr[], const unsigned int N)
{
	T tmp = T();
	for (int i = 1; i < N; i++)
	{
		tmp = arr[i];
		for (int j = i - 1; j >= 0; j--)
		{
			if (arr[j] > tmp)
			{
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	Print(arr, N);
}
//двумерный
template<typename T> void Sort(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	T tmp = T();
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			tmp = arr[i][j];
			for (int k = j - 1; k >= 0; k--)
			{
				if (arr[i][k] > tmp)
				{
					arr[i][k + 1] = arr[i][k];
					arr[i][k] = tmp;
				}
			}
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