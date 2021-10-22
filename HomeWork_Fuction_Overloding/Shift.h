#pragma once
#include"stdafx.h"
#include"ConstArrs.h"
void shiftLeft(int arr[], const unsigned int N, int k, int shift_L); //¬ыполн€ет циклический сдвиг массива влево, на заданное число элементов; 
void shiftLeft(double brr[], const unsigned int N, int k, double shift_L); //¬ыполн€ет циклический сдвиг массива влево, на заданное число элементов; 
void shiftLeft(float brr[], const unsigned int N, int k, float shift_L); //¬ыполн€ет циклический сдвиг массива влево, на заданное число элементов; 
void shiftLeft(char arr[], const unsigned int N, int k, char shift_L); //¬ыполн€ет циклический сдвиг массива влево, на заданное число элементов; 
void shiftLeft(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, int shift_L);
void shiftLeft(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, double shift_L);
void shiftLeft(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, float shift_L);
void shiftLeft(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, char shift_L);
void shiftRight(int arr[], const unsigned int N, int k, int shift_R); //¬ыполн€ет циклический сдвиг массива вправо, на заданное число элементов;
void shiftRight(double brr[], const unsigned int N, int k, double shift_R); //¬ыполн€ет циклический сдвиг массива вправо, на заданное число элементов;
void shiftRight(float brr[], const unsigned int N, int k, float shift_R); //¬ыполн€ет циклический сдвиг массива вправо, на заданное число элементов;
void shiftRight(char arr[], const unsigned int N, int k, char shift_R); //¬ыполн€ет циклический сдвиг массива вправо, на заданное число элементов;
void shiftRight(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, int shift_R);
void shiftRight(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, double shift_R);
void shiftRight(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, float shift_R);
void shiftRight(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k, char shift_R);
