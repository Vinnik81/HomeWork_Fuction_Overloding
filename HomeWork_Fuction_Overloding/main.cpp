﻿#include"Define.h"
#include"FillRand.h"
#include"Print.h"
#include"Statistics.h"
#include"Sort.h"
#include"Shift.h"

void main()
{
	setlocale(LC_ALL, "Russian");
	const unsigned int N = 5;
	int arr[N];
	double brr[N];
	float crr[N];
	char drr[N] = { 'h','o','u','s','e' };
	int minRand = 0, maxRand = 100;
	int sum = 0;
	double avg = 0;
	int min = 0;
	int max = 0;
	int k = 0;
	int shift_L = 0;
	int shift_R = 0;
	cout << GR_FUN;
	FillRand(arr, N, minRand, maxRand);
	cout << "Прямой массив int:" << endl;
	Print(arr, N);
	cout << GRATE;
	FillRand(brr, N, minRand, maxRand);
	cout << "Прямой массив double:" << endl;
	Print(brr, N);
	cout << GRATE;
	FillRand(crr, N, minRand, maxRand);
	cout << "Прямой массив float:" << endl;
	Print(crr, N);
	cout << GRATE;
	cout << "Прямой массив char:" << endl;
	Print(drr, N);
	cout << GRATE;
    FillRand(i_arr_2, ROWS, COLS, minRand, maxRand);
	cout << "Прямой двойной массив:" << endl;
	Print(i_arr_2, ROWS, COLS);
	cout << GRATE;
	FillRand(i_brr_2, ROWS, COLS, minRand, maxRand);
	cout << "Прямой двойной double массив:" << endl;
	Print(i_brr_2, ROWS, COLS);
	cout << GRATE;
	FillRand(i_crr_2, ROWS, COLS, minRand, maxRand);
	cout << "Прямой двойной float массив:" << endl;
	Print(i_crr_2, ROWS, COLS);
	cout << GRATE;
	cout << "Прямой двойной char массив:" << endl;
	Print(i_drr_2, ROWS, COLS);
	cout << GRATE;
	cout << GR_FUN_O;
	cout << "Обратный int массив:" << endl;
	ReversePrint(arr, N);
	cout << GRATE;
	cout << "Обратный double массив:" << endl;
	ReversePrint(brr, N);
	cout << GRATE;
	cout << "Обратный float массив:" << endl;
	ReversePrint(crr, N);
	cout << GRATE;
	cout << "Обратный char массив:" << endl;
	ReversePrint(drr, N);
	cout << GRATE;
	cout << "Обратный двойной int массив:" << endl;
	ReversePrint(i_arr_2, ROWS, COLS);
	cout << GRATE;
	cout << "Обратный двойной double массив:" << endl;
	ReversePrint(i_brr_2, ROWS, COLS);
	cout << GRATE;
	cout << "Обратный двойной float массив:" << endl;
	ReversePrint(i_crr_2, ROWS, COLS);
	cout << GRATE;
	cout << "Обратный двойной char массив:" << endl;
	ReversePrint(i_drr_2, ROWS, COLS);
	cout << GRATE;
	cout << GR_FUN_SUM;
	cout << "Сумма элементов int массива:\n" << Sum(arr, N, sum) << endl;
	cout << "Сумма элементов double массива:\n" << Sum(brr, N, sum) << endl;
	cout << "Сумма элементов float массива:\n" << Sum(crr, N, sum) << endl;
	cout << "Сумма элементов char массива:\n" << Sum(drr, N, sum) << endl;
	cout << "Сумма элементов двойного int массива:\n" << Sum(i_arr_2, ROWS, COLS, sum) << endl;
	cout << "Сумма элементов двойного double массива:\n" << Sum(i_brr_2, ROWS, COLS, sum) << endl;
	cout << "Сумма элементов двойного float массива:\n" << Sum(i_crr_2, ROWS, COLS, sum) << endl;
	cout << "Сумма элементов двойного char массива:\n" << Sum(i_drr_2, ROWS, COLS, sum) << endl;
	cout << GRATE;
	cout << GR_FUN_ARM;
	cout << "Среднее арифметическое int массива:\n" << Avg(arr, N, avg, sum) << endl;
	cout << "Среднее арифметическое double массива:\n" << Avg(brr, N, avg, sum) << endl;
	cout << "Среднее арифметическое float массива:\n" << Avg(crr, N, avg, sum) << endl;
	cout << "Среднее арифметическое char массива:\n" << Avg(drr, N, avg, sum) << endl;
	cout << "Среднее арифметическое двойного int массива:\n" << Avg(i_arr_2, ROWS, COLS, avg, sum) << endl;
	cout << "Среднее арифметическое двойного double массива:\n" << Avg(i_brr_2, ROWS, COLS, avg, sum) << endl;
	cout << "Среднее арифметическое двойного float массива:\n" << Avg(i_crr_2, ROWS, COLS, avg, sum) << endl;
	cout << "Среднее арифметическое двойного char массива:\n" << Avg(i_drr_2, ROWS, COLS, avg, sum) << endl;
	cout << GRATE;
	cout << GR_FUN_MIN;
	cout << "Минимальное значение int массива:\n" << minValueIn(arr, N, min) << endl;
	cout << "Минимальное значение double массива:\n" << minValueIn(brr, N, min) << endl;
	cout << "Минимальное значение float массива:\n" << minValueIn(crr, N, min) << endl;
	cout << "Минимальное значение char массива:\n" << minValueIn(drr, N, min) << endl;
	cout << "Минимальное значение двойного int массива:" << endl;
	minValueIn(i_arr_2, ROWS, COLS, min);
	cout << "Минимальное значение двойного double массива:" << endl;
	minValueIn(i_brr_2, ROWS, COLS, min);
	cout << "Минимальное значение двойного float массива:" << endl;
	minValueIn(i_crr_2, ROWS, COLS, min);
	cout << "Минимальное значение двойного char массива:" << endl;
	minValueIn(i_drr_2, ROWS, COLS, min);
	cout << GRATE;
	cout << GR_FUN_MAX;
	cout << "Максимальное значение int массива:\n" << maxValueIn(arr, N, max) << endl;
	cout << "Максимальное значение double массива:\n" << maxValueIn(brr, N, max) << endl;
	cout << "Максимальное значение float массива:\n" << maxValueIn(crr, N, max) << endl;
	cout << "Максимальное значение char массива:\n" << maxValueIn(drr, N, max) << endl;
	cout << "Максимальное значение двойного int массива:" << endl;
	maxValueIn(i_arr_2, ROWS, COLS, max);
	cout << "Максимальное значение двойного double массива:" << endl;
	maxValueIn(i_brr_2, ROWS, COLS, max);
	cout << "Максимальное значение двойного float массива:" << endl;
	maxValueIn(i_crr_2, ROWS, COLS, max);
	cout << "Максимальное значение двойного char массива:" << endl;
	maxValueIn(i_drr_2, ROWS, COLS, max);
	cout << GRATE;
	cout << GR_FUN_SORT;
	cout << "int Массив в порядке возрастания:" << endl;
	Sort(arr, N);
	cout << GRATE;
	cout << "double Массив в порядке возрастания:" << endl;
	Sort(brr, N);
	cout << GRATE;
	cout << "float Массив в порядке возрастания:" << endl;
	Sort(crr, N);
	cout << GRATE;
	cout << "char Массив в порядке возрастания:" << endl;
	Sort(drr, N);
	cout << GRATE;
	cout << "Двойной int массив в порядке возрастания:" << endl;
	Sort(i_arr_2, ROWS, COLS);
	cout << GRATE;
	cout << "Двойной double массив в порядке возрастания:" << endl;
	Sort(i_brr_2, ROWS, COLS);
	cout << GRATE;
	cout << "Двойной float массив в порядке возрастания:" << endl;
	Sort(i_crr_2, ROWS, COLS);
	cout << GRATE;
	cout << "Двойной char массив в порядке возрастания:" << endl;
	Sort(i_drr_2, ROWS, COLS);
	cout << GRATE;
	cout << GR_FUN_L;
	cout << "Введите число сдвига элементов: "; cin >> k;
	cout << "Результат сдвига int массива влево:" << endl;
	shiftLeft(arr, N, k, shift_L);
	cout << GRATE;
	cout << "Введите число сдвига элементов: "; cin >> k;
	cout << "Результат сдвига double массива влево:" << endl;
	shiftLeft(brr, N, k, shift_L);
	cout << GRATE;
	cout << "Введите число сдвига элементов: "; cin >> k;
	cout << "Результат сдвига float массива влево:" << endl;
	shiftLeft(crr, N, k, shift_L);
	cout << GRATE;
	cout << "Введите число сдвига элементов: "; cin >> k;
	cout << "Результат сдвига char массива влево:" << endl;
	shiftLeft(drr, N, k, shift_L);
	cout << GRATE;
	cout << "Введите число сдвига элементов: "; cin >> k;
	cout << "Результат сдвига двойного int массива влево:" << endl;
	shiftLeft(i_arr_2, ROWS, COLS, k, shift_L);
	cout << GRATE;
	cout << "Введите число сдвига элементов: "; cin >> k;
	cout << "Результат сдвига двойного double массива влево:" << endl;
	shiftLeft(i_brr_2, ROWS, COLS, k, shift_L);
	cout << GRATE;
	cout << "Введите число сдвига элементов: "; cin >> k;
	cout << "Результат сдвига двойного float массива влево:" << endl;
	shiftLeft(i_crr_2, ROWS, COLS, k, shift_L);
	cout << GRATE;
	cout << "Введите число сдвига элементов: "; cin >> k;
	cout << "Результат сдвига двойного char массива влево:" << endl;
	shiftLeft(i_drr_2, ROWS, COLS, k, shift_L);
	cout << GRATE;
	cout << GR_FUN_R;
	cout << "Введите число сдвига элементов: "; cin >> k;
	cout << "Результат сдвига int массива вправо:" << endl;
	shiftRight(arr, N, k, shift_R);
	cout << GRATE;
	cout << "Введите число сдвига элементов: "; cin >> k;
	cout << "Результат сдвига double массива вправо:" << endl;
	shiftRight(brr, N, k, shift_R);
	cout << GRATE;
	cout << "Введите число сдвига элементов: "; cin >> k;
	cout << "Результат сдвига float массива вправо:" << endl;
	shiftRight(crr, N, k, shift_R);
	cout << GRATE;
	cout << "Введите число сдвига элементов: "; cin >> k;
	cout << "Результат сдвига char массива вправо:" << endl;
	shiftRight(drr, N, k, shift_R);
	cout << GRATE;
	cout << "Введите число сдвига элементов: "; cin >> k;
	cout << "Результат сдвига двойного int массива вправо:" << endl;
	shiftRight(i_arr_2, ROWS, COLS, k, shift_R);
	cout << GRATE;
	cout << "Введите число сдвига элементов: "; cin >> k;
	cout << "Результат сдвига двойного double массива вправо:" << endl;
	shiftRight(i_brr_2, ROWS, COLS, k, shift_R);
	cout << GRATE;
	cout << "Введите число сдвига элементов: "; cin >> k;
	cout << "Результат сдвига двойного float массива вправо:" << endl;
	shiftRight(i_crr_2, ROWS, COLS, k, shift_R);
	cout << GRATE;
	cout << "Введите число сдвига элементов: "; cin >> k;
	cout << "Результат сдвига двойного char массива вправо:" << endl;
	shiftRight(i_drr_2, ROWS, COLS, k, shift_R);
	cout << GRATE;
}