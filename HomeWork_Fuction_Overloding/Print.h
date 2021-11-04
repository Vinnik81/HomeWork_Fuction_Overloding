#pragma once
#include"stdafx.h"
#include"Arrs.h"
template<typename T> void Print(T arr[], const unsigned int N);
template<typename T> void Print(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
template<typename T> void ReversePrint(T arr[], const unsigned int N); //¬ыводит массив в обратном направлении;
template<typename T> void ReversePrint(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS); //¬ыводит массив в обратном направлении;