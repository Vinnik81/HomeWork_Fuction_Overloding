#pragma once
#include"stdafx.h"
#include"ConstArrs.h"
void FillRand(int arr[], const unsigned int N, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const unsigned int N, int minRand = 0, int maxRand = 100);
void FillRand(float arr[], const unsigned int N, int minRand = 0, int maxRand = 100);
void FillRand(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int minRand, int maxRand);
void FillRand(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int minRand, int maxRand);
void FillRand(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int minRand, int maxRand);