#include "stdafx.h"
#include "Constants.h"
#include "FillRand.h"
#include "Print.h"
#define delimiter "\n===================================================================\n"



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

template<typename T> void ShiftManager(T arr[], T arr_1[], const unsigned int n);
template<typename T> void Shift_Rigth(T arr[], T arr_1[], const unsigned int n, int shift);
template<typename T> void Shift_Left(T arr[], T arr_1[], const unsigned int n, int shift);
template<typename T> void ShiftManager(T arr[ROWS][COLS], T arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);
template<typename T> void Shift_Rigth(T arr[ROWS][COLS], T arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift);
template<typename T> void Shift_Left(T arr[ROWS][COLS], T arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int shift);

int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord;
	SetConsoleDisplayMode(hConsole, CONSOLE_FULLSCREEN_MODE, &coord);
	
	int arr[n], arr_1[n];
	double  arr_DB[n], arr_1DB[n];
	int arr_2[ROWS][COLS], arr1_2[ROWS][COLS];
	double arr_2DB[ROWS][COLS], arr1_2DB[ROWS][COLS];
	int minRand, maxRand;
	
	srand(3);
	std::cout << " Enter minRand\t"; std::cin >> minRand;
	std::cout << " Enter maxRand\t"; std::cin >> maxRand;
	ArrRand(arr, arr_1, n, minRand, maxRand);
	std::cout << " Parent INTEGER Array\n";
	Print(arr, n);
	std::cout << " Revers INTEGER Array\n";
	//ReversPrint(arr, n);
	SortArr(arr, n);
	std::cout << " Summa INTEGER Array = " << Summ(arr, n) << std::endl;
	std::cout << " Arithmetic average of INTEGER Array elements  = " << Avg((double)Summ(arr, n), n) << std::endl;
	std::cout << " MAX value of INTEGER Array elements = " << MaxValue(arr, n) << std::endl;
	std::cout << " MIN value of INTEGER Array elements = " << MinValue(arr, n) << std::endl;
	ShiftManager(arr, arr_1, n);
	std::cout << delimiter;
	ArrRand(arr_DB, arr_1DB, n, minRand, maxRand);
	std::cout << " Parent DOUBLE Array\t"; //Print(arr_DB, n);
	std::cout << " Revers DOUBLE Array\t"; //ReversPrint(arr_DB, n);
	SortArr(arr_DB, n);
	std::cout << " Summa DOUBLE Array = " << Summ(arr_DB, n) << std::endl;
	std::cout << " Arithmetic average of INTEGER Array elements  = " << Avg(Summ(arr_DB, n), n) << std::endl;
	std::cout << " MAX value of DOUBLE Array elements = " << MaxValue(arr_DB, n) << std::endl;
	std::cout << "MIN value of DOUBLE Array elements = " << MinValue(arr_DB, n) << std::endl;
	ShiftManager(arr_DB, arr_1DB, n);
	std::cout << delimiter;
	ArrRand(arr_2, arr1_2, ROWS, COLS, minRand, maxRand);
	std::cout << "Parent INTEGER 2D Array:\n"; //Print(arr_2, ROWS, COLS);
	std::cout << "\nRevers INTEGER 2D Array:\n"; //ReversPrint(arr_2, ROWS, COLS);
	SortArr(arr_2, ROWS, COLS); std::cout << " Sorted INTEGER 2D Array:\n"; //Print(arr_2, ROWS, COLS);
	std::cout << " Summa INTEGER 2D Array = " << Summ(arr_2, ROWS, COLS) << std::endl;
	std::cout << " Arithmetic average of INTEGER 2D Array elements  = " << Avg(Summ(arr_2, ROWS, COLS), ROWS, COLS) << std::endl;
	std::cout << "\tMAX value of INTEGER 2D Array elements = " << MaxValue(arr_2, ROWS, COLS) << std::endl;
	std::cout << "\tMIN value of INTEGER 2D Array elements = " << MinValue(arr_2, ROWS, COLS) << std::endl;
	ShiftManager(arr_2, arr1_2, ROWS, COLS);
	std::cout << delimiter;
	ArrRand(arr_2DB, arr1_2DB, ROWS, COLS, minRand, maxRand);
	std::cout << "Parent DOUBLE 2D Array:\n"; //Print(arr_2DB, ROWS, COLS);
	std::cout << "\nRevers DOUBLE 2D Array:\n"; //ReversPrint(arr_2DB, ROWS, COLS);
	SortArr(arr_2DB, ROWS, COLS); std::cout << "\nSorted DOUBLE 2D Array:\n"; //Print(arr_2DB, ROWS, COLS);
	std::cout << " Summa DOUBLE 2D Array = " << Summ(arr_2DB, ROWS, COLS) << std::endl;
	std::cout << " Arithmetic average of DOUBLE 2D Array elements  = " << Avg(Summ(arr_2DB, ROWS, COLS), ROWS, COLS) << std::endl;
	std::cout << "\tMAX value of DOUBLE 2D Array elements = " << MaxValue(arr_2DB, ROWS, COLS) << std::endl;
	std::cout << "\tMIN value of DOUBLE 2D Array elements = " << MinValue(arr_2DB, ROWS, COLS) << std::endl;
	ShiftManager(arr_2DB, arr1_2DB, ROWS, COLS);
	std::cout << delimiter;

	return 0;
}

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
	return (double)summ/ n;
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
		for(int j = 1; j < COLS; j++)
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