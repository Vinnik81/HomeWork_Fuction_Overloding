#pragma once
#include"stdafx.h"
#include"Const.h"
template<typename T>T Sum(T arr[], const unsigned int N); //Возвращает сумму элементов массива;
template<typename T>T Sum(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
template<typename T> double Avg(T arr[], const unsigned int N); //Возвращает среднее арифметическое элементов массива;
template<typename T> double Avg(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
template<typename T>T minValueIn(T arr[], const unsigned int N); //Возвращает минимальное значение из массива;
template<typename T>T minValueIn(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
template<typename T>T maxValueIn(T arr[], const unsigned int N); //Возвращает максимальное значение из массива;
template<typename T>T maxValueIn(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);