#include"Statistics.h"
#include"Print.h"
//int
int Sum(int arr[], const unsigned int N, int sum)
{
	for (int i = 0; i < N; i++)
	{
		sum += arr[i];
	}

	return sum;
}
//double
double Sum(double brr[], const unsigned int N, double sum)
{
	for (int i = 0; i < N; i++)
	{
		sum += brr[i];
	}

	return sum;
}
//float 
float Sum(float brr[], const unsigned int N, float sum)
{
	for (int i = 0; i < N; i++)
	{
		sum += brr[i];
	}

	return sum;
}
//char
char Sum(char arr[], const unsigned int N, char sum)
{
	for (int i = 0; i < N; i++)
	{
		sum += arr[i];
	}

	return sum;
}
//int_2
int Sum(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int sum)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}

	return sum;
}
//double_2
double Sum(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, double sum)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}

	return sum;
}
//float_2
float Sum(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, float sum)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}

	return sum;
}
//char_2
char Sum(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, char sum)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}

	return sum;
}
//int
double Avg(int arr[], const unsigned int N, double avg, int sum)
{
	avg = (double)Sum(arr, N, sum) / N;

	return avg;
}
//double
double Avg(double brr[], const unsigned int N, double avg, double sum)
{
	avg = Sum(brr, N, sum) / N;

	return avg;
}
//float
float Avg(float brr[], const unsigned int N, float avg, float sum)
{
	avg = Sum(brr, N, sum) / N;

	return avg;
}
//char
double Avg(char arr[], const unsigned int N, char avg, char sum)
{
	avg = Sum(arr, N, sum) / N;

	return avg;
}
//int_2
double Avg(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, double avg, int sum)
{
	avg = (double)Sum(i_arr_2, ROWS, COLS, sum) / ROWS + COLS;

	return avg;
}
//doble_2
double Avg(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, double avg, double sum)
{
	avg = Sum(i_brr_2, ROWS, COLS, sum) / ROWS + COLS;

	return avg;
}
//float_2
float Avg(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, float avg, float sum)
{
	avg = Sum(i_crr_2, ROWS, COLS, sum) / ROWS + COLS;

	return avg;
}
//char_2
double Avg(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, char avg, char sum)
{
	avg = Sum(i_drr_2, ROWS, COLS, sum) / ROWS + COLS;

	return avg;
}
//int
int minValueIn(int arr[], const unsigned int N, int min)
{
	min = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (min > arr[i]) min = arr[i];
	}

	return min;
}
//double
double minValueIn(double brr[], const unsigned int N, double min)
{
	min = brr[0];
	for (int i = 0; i < N; i++)
	{
		if (min > brr[i]) min = brr[i];
	}

	return min;
}
//float
float minValueIn(float brr[], const unsigned int N, float min)
{
	min = brr[0];
	for (int i = 0; i < N; i++)
	{
		if (min > brr[i]) min = brr[i];
	}

	return min;
}
//char
char minValueIn(char arr[], const unsigned int N, char min)
{
	min = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (min > arr[i]) min = arr[i];
	}

	return min;
}
//int_2
int minValueIn(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int min)
{
	for (int i = 0; i < ROWS; i++)
	{
		min = arr[i][0];
		for (int j = 0; j < COLS; j++)
		{
			if (min > arr[i][j]) min = arr[i][j];
		}
		cout << i + 1 << " ряд = " << min << endl;
	}

	return min;
}
//double_2
double minValueIn(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, double min)
{
	for (int i = 0; i < ROWS; i++)
	{
		min = arr[i][0];
		for (int j = 0; j < COLS; j++)
		{
			if (min > arr[i][j]) min = arr[i][j];
		}
		cout << i + 1 << " ряд = " << min << endl;
	}

	return min;
}
//float
float minValueIn(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, float min)
{
	for (int i = 0; i < ROWS; i++)
	{
		min = arr[i][0];
		for (int j = 0; j < COLS; j++)
		{
			if (min > arr[i][j]) min = arr[i][j];
		}
		cout << i + 1 << " ряд = " << min << endl;
	}

	return min;
}
//char_2
char minValueIn(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, char min)
{
	for (int i = 0; i < ROWS; i++)
	{
		min = arr[i][0];
		for (int j = 0; j < COLS; j++)
		{
			if (min > arr[i][j]) min = arr[i][j];
		}
		cout << i + 1 << " ряд = " << min << endl;
	}

	return min;
}
//int
int maxValueIn(int arr[], const unsigned int N, int max)
{
	max = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (max < arr[i]) max = arr[i];
	}

	return max;
}
//double
double maxValueIn(double brr[], const unsigned int N, double max)
{
	max = brr[0];
	for (int i = 0; i < N; i++)
	{
		if (max < brr[i]) max = brr[i];
	}

	return max;
}
//float
float maxValueIn(float brr[], const unsigned int N, float max)
{
	max = brr[0];
	for (int i = 0; i < N; i++)
	{
		if (max < brr[i]) max = brr[i];
	}

	return max;
}
//char
char maxValueIn(char arr[], const unsigned int N, char max)
{
	max = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (max < arr[i]) max = arr[i];
	}

	return max;
}
//int_2
int maxValueIn(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int max)
{
	for (int i = 0; i < ROWS; i++)
	{
		max = arr[i][0];
		for (int j = 0; j < COLS; j++)
		{
			if (max < arr[i][j]) max = arr[i][j];
		}
		cout << i + 1 << " ряд = " << max << endl;
	}

	return max;
}
//double_2
double maxValueIn(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, double max)
{
	for (int i = 0; i < ROWS; i++)
	{
		max = arr[i][0];
		for (int j = 0; j < COLS; j++)
		{
			if (max < arr[i][j]) max = arr[i][j];
		}
		cout << i + 1 << " ряд = " << max << endl;
	}

	return max;
}
//float_2
float maxValueIn(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, float max)
{
	for (int i = 0; i < ROWS; i++)
	{
		max = arr[i][0];
		for (int j = 0; j < COLS; j++)
		{
			if (max < arr[i][j]) max = arr[i][j];
		}
		cout << i + 1 << " ряд = " << max << endl;
	}

	return max;
}
//char_2
char maxValueIn(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, char max)
{
	for (int i = 0; i < ROWS; i++)
	{
		max = arr[i][0];
		for (int j = 0; j < COLS; j++)
		{
			if (max < arr[i][j]) max = arr[i][j];
		}
		cout << i + 1 << " ряд = " << max << endl;
	}

	return max;
}