#include"Sort.h"
#include"Print.h"


//int
void Sort(int arr[], const unsigned int N)
{
	for (int i = 1; i < N; i++)
	{
		int tmp = arr[i];
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
//double
void Sort(double brr[], const unsigned int N)
{
	for (int i = 1; i < N; i++)
	{
		double tmp = brr[i];
		for (int j = i - 1; j >= 0; j--)
		{
			if (brr[j] > tmp)
			{
				brr[j + 1] = brr[j];
				brr[j] = tmp;
			}
		}
	}

	Print(brr, N);
}
//float
void Sort(float brr[], const unsigned int N)
{
	for (int i = 1; i < N; i++)
	{
		float tmp = brr[i];
		for (int j = i - 1; j >= 0; j--)
		{
			if (brr[j] > tmp)
			{
				brr[j + 1] = brr[j];
				brr[j] = tmp;
			}
		}
	}

	Print(brr, N);
}
//char
void Sort(char arr[], const unsigned int N)
{
	for (int i = 1; i < N; i++)
	{
		int tmp = arr[i];
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
//int_2
void Sort(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			int tmp = arr[i][j];
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
	Print(i_arr_2, ROWS, COLS);
}
//double_2
void Sort(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			double tmp = arr[i][j];
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
	Print(i_brr_2, ROWS, COLS);
}
//float_2
void Sort(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			float tmp = arr[i][j];
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
	Print(i_crr_2, ROWS, COLS);
}
//char_2
void Sort(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			char tmp = arr[i][j];
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
	Print(i_drr_2, ROWS, COLS);
}