#pragma once
#include "Constants.h"

template<typename T> void ShiftManager(T arr[], T arr_1[], const unsigned int n);
template<typename T> void Shift_Rigth(T arr[], T arr_1[], const unsigned int n, int shift);
template<typename T> void Shift_Left(T arr[], T arr_1[], const unsigned int n, int shift);
template<typename T> void ShiftManager(T arr[ROWS][COLS], T arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
template<typename T> void Shift_Rigth(T arr[ROWS][COLS], T arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift);
template<typename T> void Shift_Left(T arr[ROWS][COLS], T arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift);

//#include"Shift.cpp"