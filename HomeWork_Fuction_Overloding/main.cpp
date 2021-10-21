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
void Print(int arr[], const unsigned int N);
void Print(double arr[], const unsigned int N);
void Print(float arr[], const unsigned int N);
void Print(char arr[], const unsigned int N);
void Print(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
void Print(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
void Print(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
void Print(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
void ReversePrint(int arr[], const unsigned int N); //Выводит массив в обратном направлении;
void ReversePrint(double brr[], const unsigned int N); //Выводит массив в обратном направлении;
void ReversePrint(float brr[], const unsigned int N); //Выводит массив в обратном направлении;
void ReversePrint(char arr[], const unsigned int N); //Выводит массив в обратном направлении;
void ReversePrint(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS); //Выводит массив в обратном направлении;
void ReversePrint(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS); //Выводит массив в обратном направлении;
void ReversePrint(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS); //Выводит массив в обратном направлении;
void ReversePrint(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS); //Выводит массив в обратном направлении;
int Sum(int arr[], const unsigned int N, int sum = 0); //Возвращает сумму элементов массива;
double Sum(double brr[], const unsigned int N, double sum = 0); //Возвращает сумму элементов массива;
float Sum(float brr[], const unsigned int N, float sum = 0); //Возвращает сумму элементов массива;
char Sum(char arr[], const unsigned int N, char sum); //Возвращает сумму элементов массива;
int Sum(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int sum = 0);
double Sum(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, double sum = 0);
float Sum(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, float sum = 0);
char Sum(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, char sum = 0);
double Avg(int arr[], const unsigned int N, double avg, int sum); //Возвращает среднее арифметическое элементов массива;
double Avg(double brr[], const unsigned int N, double avg, double sum); //Возвращает среднее арифметическое элементов массива;
float Avg(float brr[], const unsigned int N, float avg, float sum); //Возвращает среднее арифметическое элементов массива;
double Avg(char arr[], const unsigned int N, char avg, char sum); //Возвращает среднее арифметическое элементов массива;
double Avg(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, double avg, int sum);
double Avg(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, double avg, double sum);
float Avg(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, float avg, float sum);
double Avg(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, char avg, char sum);
int minValueIn(int arr[], const unsigned int N, int min); //Возвращает минимальное значение из массива;
double minValueIn(double brr[], const unsigned int N, double min); //Возвращает минимальное значение из массива;
float minValueIn(float brr[], const unsigned int N, float min); //Возвращает минимальное значение из массива;
char minValueIn(char arr[], const unsigned int N, char min); //Возвращает минимальное значение из массива;
int minValueIn(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int min);
double minValueIn(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, double min);
float minValueIn(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, float min);
char minValueIn(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, char min);
int maxValueIn(int arr[], const unsigned int N, int max); //Возвращает максимальное значение из массива;
double maxValueIn(double brr[], const unsigned int N, double max); //Возвращает максимальное значение из массива;
float maxValueIn(float brr[], const unsigned int N, float max); //Возвращает максимальное значение из массива;
char maxValueIn(char arr[], const unsigned int N, char max); //Возвращает максимальное значение из массива;
int maxValueIn(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int max);
double maxValueIn(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, double max);
float maxValueIn(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, float max);
char maxValueIn(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, char max);
void Sort(int arr[], const unsigned int N); //Сортирует массив в порядке возрастания;
void Sort(double brr[], const unsigned int N); //Сортирует массив в порядке возрастания;
void Sort(float brr[], const unsigned int N); //Сортирует массив в порядке возрастания;
void Sort(char arr[], const unsigned int N); //Сортирует массив в порядке возрастания;
void Sort(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
void Sort(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
void Sort(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
void Sort(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
void shiftLeft(int arr[], const unsigned int N, int k, int shift_L); //Выполняет циклический сдвиг массива влево, на заданное число элементов; 
void shiftLeft(double brr[], const unsigned int N, int k, double shift_L); //Выполняет циклический сдвиг массива влево, на заданное число элементов; 
void shiftLeft(float brr[], const unsigned int N, int k, float shift_L); //Выполняет циклический сдвиг массива влево, на заданное число элементов; 
void shiftLeft(char arr[], const unsigned int N, int k, char shift_L); //Выполняет циклический сдвиг массива влево, на заданное число элементов; 
void shiftLeft(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, int shift_L);
void shiftLeft(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, double shift_L);
void shiftLeft(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, float shift_L);
void shiftLeft(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, char shift_L);
void shiftRight(int arr[], const unsigned int N, int k, int shift_R); //Выполняет циклический сдвиг массива вправо, на заданное число элементов;
void shiftRight(double brr[], const unsigned int N, int k, double shift_R); //Выполняет циклический сдвиг массива вправо, на заданное число элементов;
void shiftRight(float brr[], const unsigned int N, int k, float shift_R); //Выполняет циклический сдвиг массива вправо, на заданное число элементов;
void shiftRight(char arr[], const unsigned int N, int k, char shift_R); //Выполняет циклический сдвиг массива вправо, на заданное число элементов;
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
//int
void Print(int arr[], const unsigned int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
//double
void Print(double arr[], const unsigned int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
//двумерный
void Print(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
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
// double_2
void Print(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
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
//float
void Print(float arr[], const unsigned int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
//float_2
void Print(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
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
//char
void Print(char arr[], const unsigned int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
//char_2
void Print(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
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
//int
void ReversePrint(int arr[], const unsigned int N)
{
	for (int i = N - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
//double
void ReversePrint(double brr[], const unsigned int N)
{
	for (int i = N - 1; i >= 0; i--)
	{
		cout << brr[i] << "\t";
	}
	cout << endl;
}
//float
void ReversePrint(float brr[], const unsigned int N)
{
	for (int i = N - 1; i >= 0; i--)
	{
		cout << brr[i] << "\t";
	}
	cout << endl;
}
//char
void ReversePrint(char arr[], const unsigned int N)
{
	for (int i = N - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
//int_2
void ReversePrint(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
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
//double_2
void ReversePrint(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
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
//float_2
void ReversePrint(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
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
//char_2
void ReversePrint(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
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