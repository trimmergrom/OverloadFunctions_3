#include "stdafx.h"
#include "Constants.h"
#include "Statistics.h"

template<typename T> T Summ(T arr[], const unsigned int n)
{
	T summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += arr[i];
	}
	return summ;
}
template<typename T> T Summ(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	T summ = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			summ += arr[i][j];
		}
	}
	return summ;
}
template<typename T> T Avg(T summ, const unsigned int n)
{
	return (double)summ / n;
}
template<typename T> T Avg(T summ, const unsigned int ROWS, const unsigned int COLS)
{
	return (double)summ / (ROWS * COLS);
}

template<typename T> T MaxValue(T arr[], const unsigned int n)
{
	T max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i]) { max = arr[i]; }
	}
	return max;
}
template<typename T> T MinValue(T arr[], const unsigned int n)
{
	T min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i]) { min = arr[i]; }
	}
	return min;
}
template<typename T> T MaxValue(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	T max = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; j++)
		{
			if (max < arr[i][j]) { max = arr[i][j]; }
		}
	}
	return max;
}
template<typename T> T MinValue(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	T min = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; j++)
		{
			if (min > arr[i][j]) { min = arr[i][j]; }
		}
	}
	return min;
}

template<typename T> void SortArr(T arr[], const unsigned int n)
{
	int j = 0;
	T tmp = 0;
	for (int i = 0; i < n; i++)
	{
		j = i;
		for (int k = i; k < n; k++)
		{
			if (arr[j] > arr[k]) { j = k; }
		}
		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << "The array is sorted in ascending order" << std::endl;
}
template<typename T> void SortArr(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	for (int k = 0; k < ROWS; k++)
	{
		for (int s = 0; s < COLS; s++)
		{
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					if (arr[k][s] < arr[i][j])
					{
						T tmp = arr[k][s];
						arr[k][s] = arr[i][j];
						arr[i][j] = tmp;
					}
				}
			}
		}
	}
}