#pragma once
#include"stdafx.h"
#include"Const.h"
template<typename T> void shiftLeft(T arr[], const unsigned int N, int k); //��������� ����������� ����� ������� �����, �� �������� ����� ���������; 
template<typename T> void shiftLeft(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k);
template<typename T> void shiftRight(T arr[], const unsigned int N, int k); //��������� ����������� ����� ������� ������, �� �������� ����� ���������;
template<typename T> void shiftRight(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int k);