#include"Shift.h"
#include"Print.h"


//int
void shiftLeft(int arr[], const unsigned int N, int k, int shift_L)
{
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
//double
void shiftLeft(double brr[], const unsigned int N, int k, double shift_L)
{
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j <= N - 1; j++)
		{
			(j == 0) ? shift_L = brr[0] : brr[j - 1] = brr[j];
		}
		brr[N - 1] = shift_L;
	}

	Print(brr, N);
}
//float
void shiftLeft(float brr[], const unsigned int N, int k, float shift_L)
{
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j <= N - 1; j++)
		{
			(j == 0) ? shift_L = brr[0] : brr[j - 1] = brr[j];
		}
		brr[N - 1] = shift_L;
	}

	Print(brr, N);
}
//char
void shiftLeft(char arr[], const unsigned int N, int k, char shift_L)
{
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
//int_2
void shiftLeft(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, int shift_L)
{
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

	Print(i_arr_2, ROWS, COLS);
}
//double_2
void shiftLeft(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, double shift_L)
{
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

	Print(i_brr_2, ROWS, COLS);
}
//float_2
void shiftLeft(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, float shift_L)
{
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

	Print(i_crr_2, ROWS, COLS);
}
//char_2
void shiftLeft(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, char shift_L)
{
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

	Print(i_drr_2, ROWS, COLS);
}
//int
void shiftRight(int arr[], const unsigned int N, int k, int shift_R)
{
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
//double
void shiftRight(double brr[], const unsigned int N, int k, double shift_R)
{
	for (int i = 0; i < k; i++)
	{
		for (int j = N - 1; j >= 0; j--)
		{
			(j == N - 1) ? shift_R = brr[N - 1] : brr[j + 1] = brr[j];
		}
		brr[0] = shift_R;
	}

	Print(brr, N);
}
//float
void shiftRight(float brr[], const unsigned int N, int k, float shift_R)
{
	for (int i = 0; i < k; i++)
	{
		for (int j = N - 1; j >= 0; j--)
		{
			(j == N - 1) ? shift_R = brr[N - 1] : brr[j + 1] = brr[j];
		}
		brr[0] = shift_R;
	}

	Print(brr, N);
}
//char
void shiftRight(char arr[], const unsigned int N, int k, char shift_R)
{
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
//int_2
void shiftRight(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, int shift_R)
{
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

	Print(i_arr_2, ROWS, COLS);
}
//double_2
void shiftRight(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, double shift_R)
{
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

	Print(i_brr_2, ROWS, COLS);
}
//float_2
void shiftRight(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, float shift_R)
{
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

	Print(i_crr_2, ROWS, COLS);
}
//char_2
void shiftRight(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, char shift_R)
{
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

	Print(i_drr_2, ROWS, COLS);
}