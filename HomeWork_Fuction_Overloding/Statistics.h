#pragma once
#include"stdafx.h"
#include"ConstArrs.h"
int Sum(int arr[], const unsigned int N, int sum = 0); //���������� ����� ��������� �������;
double Sum(double brr[], const unsigned int N, double sum = 0); //���������� ����� ��������� �������;
float Sum(float brr[], const unsigned int N, float sum = 0); //���������� ����� ��������� �������;
char Sum(char arr[], const unsigned int N, char sum); //���������� ����� ��������� �������;
int Sum(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int sum = 0);
double Sum(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, double sum = 0);
float Sum(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, float sum = 0);
char Sum(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, char sum = 0);
double Avg(int arr[], const unsigned int N, double avg, int sum); //���������� ������� �������������� ��������� �������;
double Avg(double brr[], const unsigned int N, double avg, double sum); //���������� ������� �������������� ��������� �������;
float Avg(float brr[], const unsigned int N, float avg, float sum); //���������� ������� �������������� ��������� �������;
double Avg(char arr[], const unsigned int N, char avg, char sum); //���������� ������� �������������� ��������� �������;
double Avg(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, double avg, int sum);
double Avg(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, double avg, double sum);
float Avg(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, float avg, float sum);
double Avg(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, char avg, char sum);
int minValueIn(int arr[], const unsigned int N, int min); //���������� ����������� �������� �� �������;
double minValueIn(double brr[], const unsigned int N, double min); //���������� ����������� �������� �� �������;
float minValueIn(float brr[], const unsigned int N, float min); //���������� ����������� �������� �� �������;
char minValueIn(char arr[], const unsigned int N, char min); //���������� ����������� �������� �� �������;
int minValueIn(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int min);
double minValueIn(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, double min);
float minValueIn(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, float min);
char minValueIn(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, char min);
int maxValueIn(int arr[], const unsigned int N, int max); //���������� ������������ �������� �� �������;
double maxValueIn(double brr[], const unsigned int N, double max); //���������� ������������ �������� �� �������;
float maxValueIn(float brr[], const unsigned int N, float max); //���������� ������������ �������� �� �������;
char maxValueIn(char arr[], const unsigned int N, char max); //���������� ������������ �������� �� �������;
int maxValueIn(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int max);
double maxValueIn(double arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, double max);
float maxValueIn(float arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, float max);
char maxValueIn(char arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, char max);
