#pragma once
#include "Constants.h"

template<typename T> T Summ(T arr[], const unsigned int n);
template<typename T> T Summ(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
template<typename T> T Avg(T summ, const unsigned int n);
template<typename T> T Avg(T summ, const unsigned int ROWS, const unsigned int COLS);
template<typename T> T MaxValue(T arr[], const unsigned int n);
template<typename T> T MinValue(T arr[], const unsigned int n);
template<typename T> T MaxValue(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
template<typename T> T MinValue(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
template<typename T> void SortArr(T arr[], const unsigned int n);
template<typename T> void SortArr(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);