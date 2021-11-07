#include"Statistics.h"
//Sum
template<typename T>T Sum(T arr[], const unsigned int N)
{
	T sum = T();
	for (int i = 0; i < N; i++)
	{
		sum += arr[i];
	}

	return sum;
}
//двумерный
template<typename T>T Sum(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	T sum = T();
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}

	return sum;
}
//Avg
template<typename T> double Avg(T arr[], const unsigned int N)
{
	double avg;
	avg = (double)Sum(arr, N) / N;

	return avg;
}
//двумерный
template<typename T> double Avg(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	T sum = T();
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	double avg;
	avg = (double)sum / ROWS + COLS;
	return avg;
}
//minValue
template<typename T>T minValueIn(T arr[], const unsigned int N)
{
	T min = T();
	min = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (min > arr[i]) min = arr[i];
	}

	return min;
}
//двумерный
template<typename T>T minValueIn(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	T min = T();
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
//maxValue
template<typename T>T maxValueIn(T arr[], const unsigned int N)
{
	T max = T();
	max = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (max < arr[i]) max = arr[i];
	}

	return max;
}
//двумерный
template<typename T>T maxValueIn(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	T max = T();
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