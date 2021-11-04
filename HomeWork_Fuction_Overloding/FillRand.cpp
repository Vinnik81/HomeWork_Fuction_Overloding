#include"FillRand.h"
//int
void FillRand(int arr[], const unsigned int N, int minRand, int maxRand)
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
//double
void FillRand(double arr[], const unsigned int N, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + (long long)minRand;
		arr[i] /= 100;
	}
}
//двумерный
void FillRand(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}
//double_2
void FillRand(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + (long long)minRand;
			arr[i][j] /= 100;
		}
	}
}
//float 
void FillRand(float arr[], const unsigned int N, int minRand, int maxRand)
{
	{
		minRand *= 100;
		maxRand *= 100;
		for (int i = 0; i < N; i++)
		{
			arr[i] = rand() % (maxRand - minRand) + (long long)minRand;
			arr[i] /= 100;
		}
	}
}
//float_2
void FillRand(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
			arr[i][j] /= 100;
		}
	}
}