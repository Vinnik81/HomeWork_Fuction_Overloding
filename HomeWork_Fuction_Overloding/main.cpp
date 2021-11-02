#include <iostream>
using namespace std;

#define GR_FUN "#\t\t\t\t\t\t\tПрямой массив\t\t\t\t\t\t\t\t#\n\n"
#define GR_FUN_O "#\t\t\t\t\t\t\tОбратный массив\t\t\t\t\t\t\t\t#\n\n"
#define GR_FUN_SUM "#\t\t\t\t\t\t\tСумма массива\t\t\t\t\t\t\t\t#\n\n"
#define GR_FUN_ARM "#\t\t\t\t\t\t  Среднее арифметическое массива\t\t\t\t\t\t#\n\n"
#define GR_FUN_MIN "#\t\t\t\t\t\t\tMIN массива\t\t\t\t\t\t\t\t#\n\n"
#define GR_FUN_MAX "#\t\t\t\t\t\t\tMAX массива\t\t\t\t\t\t\t\t#\n\n"
#define GR_FUN_SORT "#\t\t\t\t\t\t\tСортировка массива\t\t\t\t\t\t\t#\n\n"
#define GR_FUN_L "#\t\t\t\t\t\t\tСдвиг массива влево\t\t\t\t\t\t\t#\n\n"
#define GR_FUN_R "#\t\t\t\t\t\t\tСдвиг массива вправо\t\t\t\t\t\t\t#\n\n"
#define  GRATE "###################################################\n\n"
const unsigned int ROWS = 4;
const unsigned int COLS = 5;
int i_arr_2[ROWS][COLS];
double i_brr_2[ROWS][COLS];
float i_crr_2[ROWS][COLS];
char i_drr_2[ROWS][COLS] =
{
	{ 'h','o','u','s','e' },
	{ 'm','o','u','s','e' },
	{ 'r','o','u','t','e' },
	{ 's','t','a','r','t' }
};


void FillRand(int arr[], const unsigned int N, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const unsigned int N, int minRand = 0, int maxRand = 100);
void FillRand(float arr[], const unsigned int N, int minRand = 0, int maxRand = 100);
void FillRand(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int minRand, int maxRand);
void FillRand(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int minRand, int maxRand);
void FillRand(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int minRand, int maxRand);
template<typename T>void Print(T arr[], const unsigned int N);
template<typename T>void Print(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
template<typename T>void ReversePrint(T arr[], const unsigned int N); //Выводит массив в обратном направлении;
template<typename T>void ReversePrint(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS); //Выводит массив в обратном направлении;
template<typename T>T Sum(T arr[], const unsigned int N); //Возвращает сумму элементов массива;
template<typename T>T Sum(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
template<typename T>double Avg(T arr[], const unsigned int N); //Возвращает среднее арифметическое элементов массива;
double Avg(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
double Avg(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
float Avg(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
double Avg(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
template<typename T>T minValueIn(T arr[], const unsigned int N); //Возвращает минимальное значение из массива;
template<typename T>T minValueIn(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
template<typename T>T maxValueIn(T arr[], const unsigned int N); //Возвращает максимальное значение из массива;
template<typename T>T maxValueIn(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
template<typename T>void Sort(T arr[], const unsigned int N); //Сортирует массив в порядке возрастания;
void Sort(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
void Sort(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
void Sort(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
void Sort(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
template<typename T>void shiftLeft(T arr[], const unsigned int N, int k); //Выполняет циклический сдвиг массива влево, на заданное число элементов; 
void shiftLeft(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, int shift_L);
void shiftLeft(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, double shift_L);
void shiftLeft(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, float shift_L);
void shiftLeft(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, char shift_L);
template<typename T>void shiftRight(T arr[], const unsigned int N, int k); //Выполняет циклический сдвиг массива вправо, на заданное число элементов;
void shiftRight(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, int shift_R);
void shiftRight(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, double shift_R);
void shiftRight(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, float shift_R);
void shiftRight(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, char shift_R);

void main()
{
	setlocale(LC_ALL, "Russian");
	const unsigned int N = 5;
	int arr[N];
	double brr[N];
	float crr[N];
	char drr[N] = { 'h','o','u','s','e' };
	int minRand = 0, maxRand = 100;
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
	cout << "Сумма элементов int массива:\n" << Sum(arr, N) << endl;
	cout << "Сумма элементов double массива:\n" << Sum(brr, N) << endl;
	cout << "Сумма элементов float массива:\n" << Sum(crr, N) << endl;
	cout << "Сумма элементов char массива:\n" << Sum(drr, N) << endl;
	cout << "Сумма элементов двойного int массива:\n" << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Сумма элементов двойного double массива:\n" << Sum(i_brr_2, ROWS, COLS) << endl;
	cout << "Сумма элементов двойного float массива:\n" << Sum(i_crr_2, ROWS, COLS) << endl;
	cout << "Сумма элементов двойного char массива:\n" << Sum(i_drr_2, ROWS, COLS) << endl;
	cout << GRATE;
	cout << GR_FUN_ARM;
	cout << "Среднее арифметическое int массива:\n" << Avg(arr, N) << endl;
	cout << "Среднее арифметическое double массива:\n" << Avg(brr, N) << endl;
	cout << "Среднее арифметическое float массива:\n" << Avg(crr, N) << endl;
	cout << "Среднее арифметическое char массива:\n" << Avg(drr, N) << endl;
	cout << "Среднее арифметическое двойного int массива:\n" << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое двойного double массива:\n" << Avg(i_brr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое двойного float массива:\n" << Avg(i_crr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое двойного char массива:\n" << Avg(i_drr_2, ROWS, COLS) << endl;
	cout << GRATE;
	cout << GR_FUN_MIN;
	cout << "Минимальное значение int массива:\n" << minValueIn(arr, N) << endl;
	cout << "Минимальное значение double массива:\n" << minValueIn(brr, N) << endl;
	cout << "Минимальное значение float массива:\n" << minValueIn(crr, N) << endl;
	cout << "Минимальное значение char массива:\n" << minValueIn(drr, N) << endl;
	cout << "Минимальное значение двойного int массива:" << endl;
	minValueIn(i_arr_2, ROWS, COLS);
	cout << "Минимальное значение двойного double массива:" << endl;
	minValueIn(i_brr_2, ROWS, COLS);
	cout << "Минимальное значение двойного float массива:" << endl;
	minValueIn(i_crr_2, ROWS, COLS);
	cout << "Минимальное значение двойного char массива:" << endl;
	minValueIn(i_drr_2, ROWS, COLS);
	cout << GRATE;
	cout << GR_FUN_MAX;
	cout << "Максимальное значение int массива:\n" << maxValueIn(arr, N) << endl;
	cout << "Максимальное значение double массива:\n" << maxValueIn(brr, N) << endl;
	cout << "Максимальное значение float массива:\n" << maxValueIn(crr, N) << endl;
	cout << "Максимальное значение char массива:\n" << maxValueIn(drr, N) << endl;
	cout << "Максимальное значение двойного int массива:" << endl;
	maxValueIn(i_arr_2, ROWS, COLS);
	cout << "Максимальное значение двойного double массива:" << endl;
	maxValueIn(i_brr_2, ROWS, COLS);
	cout << "Максимальное значение двойного float массива:" << endl;
	maxValueIn(i_crr_2, ROWS, COLS);
	cout << "Максимальное значение двойного char массива:" << endl;
	maxValueIn(i_drr_2, ROWS, COLS);
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
	shiftLeft(arr, N, k);
	cout << GRATE;
	cout << "Введите число сдвига элементов: "; cin >> k;
	cout << "Результат сдвига double массива влево:" << endl;
	shiftLeft(brr, N, k);
	cout << GRATE;
	cout << "Введите число сдвига элементов: "; cin >> k;
	cout << "Результат сдвига float массива влево:" << endl;
	shiftLeft(crr, N, k);
	cout << GRATE;
	cout << "Введите число сдвига элементов: "; cin >> k;
	cout << "Результат сдвига char массива влево:" << endl;
	shiftLeft(drr, N, k);
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
	shiftRight(arr, N, k);
	cout << GRATE;
	cout << "Введите число сдвига элементов: "; cin >> k;
	cout << "Результат сдвига double массива вправо:" << endl;
	shiftRight(brr, N, k);
	cout << GRATE;
	cout << "Введите число сдвига элементов: "; cin >> k;
	cout << "Результат сдвига float массива вправо:" << endl;
	shiftRight(crr, N, k);
	cout << GRATE;
	cout << "Введите число сдвига элементов: "; cin >> k;
	cout << "Результат сдвига char массива вправо:" << endl;
	shiftRight(drr, N, k);
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

template<typename T>void Print(T arr[], const unsigned int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
//двумерный
template<typename T>void Print(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
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

template<typename T>void ReversePrint(T arr[], const unsigned int N)
{
	for (int i = N - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template<typename T>void ReversePrint(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
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

template<typename T>T Sum(T arr[], const unsigned int N)
{
	T sum = T();
	for (int i = 0; i < N; i++)
	{
		sum += arr[i];
	}

	return sum;
}

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

template<typename T>double Avg(T arr[], const unsigned int N)
{
	double avg;
	avg = (double)Sum(arr, N) / N;
	
	return avg;
}

//int_2
double Avg(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	double avg;
	avg = (double)Sum(i_arr_2, ROWS, COLS) / ROWS + COLS;
	return avg;
}
//doble_2
double Avg(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	double avg;
	avg = Sum(i_brr_2, ROWS, COLS) / ROWS + COLS;

	return avg;
}
//float_2
float Avg(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	float avg;
	avg = Sum(i_crr_2, ROWS, COLS) / ROWS + COLS;

	return avg;
}
//char_2
double Avg(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	char avg;
	avg = Sum(i_drr_2, ROWS, COLS) / ROWS + COLS;

	return avg;
}
//int
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

template<typename T>void Sort(T arr[], const unsigned int N)
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

template<typename T>void shiftLeft(T arr[], const unsigned int N, int k)
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

template<typename T>void shiftRight(T arr[], const unsigned int N, int k)
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

//int_2
void shiftRight(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, int shift_R)
{
	for (int a = 0; a < k; a++)
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = COLS - 1; j >= 0; j--)
			{
				(j == COLS -1) ? shift_R = arr[i][COLS - 1] : arr[i][j + 1] = arr[i][j];
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