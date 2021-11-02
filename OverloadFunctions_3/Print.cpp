#include "Constants.h"
#include "stdafx.h"
#include "Print.h"

template<typename T> void Print(T arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}
template<typename T> void Print(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}

template<typename T> void ReversPrint(T arr[], const unsigned n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}
template<typename T> void ReversPrint(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	for (int i = ROWS - 1; i >= 0; i--)
	{
		for (int j = COLS - 1; j >= 0; j--)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}