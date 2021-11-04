#include "Constants.h"
#include "stdafx.h"
#include "Shift.h"
template<typename T> void ShiftManager(T arr[], T arr_1[], const unsigned int n)
{
	int shift;
	char e;
	do
	{
		std::cout << "Enter Shift from 1 to " << n - 1 << "\n";
		std::cout << "To shift the array to the right, enter a positive number" << std::endl;
		std::cout << "To shift the aray to the left, enter a negative namber" << std::endl;
		std::cin >> shift;
		shift >= 0 ? Shift_Rigth(arr, arr_1, n, shift) : Shift_Left(arr, arr_1, n, shift);
		std::cout << "\n\n To continue press any key, to exit press Esc" << std::endl;
		e = _getch();
	} while (e != 27);
}
template<typename T> void Shift_Rigth(T arr[], T arr_1[], const unsigned int n, int shift)
{
	for (int j = 0; j < shift; j++)
	{
		arr[j] = arr_1[n - shift + j];
	}
	for (int j = shift; j < n; j++)
	{
		arr[j] = arr_1[j - shift];
	}
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << "The array is shifted to the rigth by " << shift << " elements" << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << arr_1[i] << "\t";
	}
}
template<typename T> void Shift_Left(T arr[], T arr_1[], const unsigned int n, int shift)
{
	for (int j = 0; j < n - abs(shift); j++)
	{
		arr[j] = arr_1[j + abs(shift)];
	}
	for (int j = n - abs(shift); j < n; j++)
	{
		arr[j] = arr_1[j - n + abs(shift)];
	}
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << "The array is shifted to the left by " << abs(shift) << " elements" << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << arr_1[i] << "\t";
	}
}
template<typename T> void ShiftManager(T arr[ROWS][COLS], T arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	int shift;
	char e;
	do
	{
		std::cout << "Enter Shift from 1 to " << COLS - 1 << "\n";
		std::cout << "To shift the array to the right, enter a positive number" << std::endl;
		std::cout << "To shift the aray to the left, enter a negative namber" << std::endl;
		std::cin >> shift; std::cout << std::endl;
		shift >= 0 ? Shift_Rigth(arr, arr_1, ROWS, COLS, shift) : Shift_Left(arr, arr_1, ROWS, COLS, shift);
		std::cout << "\n\n To continue the shift, press any key, to continue the program, press Esc" << std::endl;
		e = _getch();
	} while (e != 27);
}
template<typename T> void Shift_Rigth(T arr[ROWS][COLS], T arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < shift; j++)
		{
			arr[i][j] = arr_1[i][COLS - shift + j];
		}
		for (int j = shift; j < COLS; j++)
		{
			arr[i][j] = arr_1[i][j - shift];
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}
	std::cout << " The DOUBLE 2D Array is shifted to the RIGTH by " << shift << " elements\n" << std::endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			std::cout << arr_1[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}
template<typename T> void Shift_Left(T arr[ROWS][COLS], T arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS - abs(shift); j++)
		{
			arr[i][j] = arr_1[i][j + abs(shift)];
		}
		for (int j = COLS - abs(shift); j < COLS; j++)
		{
			arr[i][j] = arr_1[i][j - COLS + abs(shift)];
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}
	std::cout << " The DOUBLE 2D Array is shifted to the LEFT by " << abs(shift) << " elements\n" << std::endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			std::cout << arr_1[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}