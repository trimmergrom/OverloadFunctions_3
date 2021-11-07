#include "stdafx.h"
#include "Constants.h"
#include "FillRand.h"
#include "Print.h"
#include "Print.cpp"
#include "Statistics.h"
#include "Statistics.cpp"
#include "Shift.h"
#include "Shift.cpp"
#define delimiter "\n===================================================================\n"

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
	ReversPrint(arr, n);
	SortArr(arr, n);
	std::cout << " Summa INTEGER Array = " << Summ(arr, n) << std::endl;
	std::cout << " Arithmetic average of INTEGER Array elements  = " << Avg((double)Summ(arr, n), n) << std::endl;
	std::cout << " MAX value of INTEGER Array elements = " << MaxValue(arr, n) << std::endl;
	std::cout << " MIN value of INTEGER Array elements = " << MinValue(arr, n) << std::endl;
	ShiftManager(arr, arr_1, n);
	std::cout << delimiter;
	ArrRand(arr_DB, arr_1DB, n, minRand, maxRand);
	std::cout << " Parent DOUBLE Array\t"; Print(arr_DB, n);
	std::cout << " Revers DOUBLE Array\t"; ReversPrint(arr_DB, n);
	SortArr(arr_DB, n);
	std::cout << " Summa DOUBLE Array = " << Summ(arr_DB, n) << std::endl;
	std::cout << " Arithmetic average of INTEGER Array elements  = " << Avg(Summ(arr_DB, n), n) << std::endl;
	std::cout << " MAX value of DOUBLE Array elements = " << MaxValue(arr_DB, n) << std::endl;
	std::cout << "MIN value of DOUBLE Array elements = " << MinValue(arr_DB, n) << std::endl;
	ShiftManager(arr_DB, arr_1DB, n);
	std::cout << delimiter;
	ArrRand(arr_2, arr1_2, ROWS, COLS, minRand, maxRand);
	std::cout << "Parent INTEGER 2D Array:\n"; Print(arr_2, ROWS, COLS);
	std::cout << "\nRevers INTEGER 2D Array:\n"; ReversPrint(arr_2, ROWS, COLS);
	SortArr(arr_2, ROWS, COLS); std::cout << " Sorted INTEGER 2D Array:\n"; Print(arr_2, ROWS, COLS);
	std::cout << " Summa INTEGER 2D Array = " << Summ(arr_2, ROWS, COLS) << std::endl;
	std::cout << " Arithmetic average of INTEGER 2D Array elements  = " << Avg(Summ(arr_2, ROWS, COLS), ROWS, COLS) << std::endl;
	std::cout << "\tMAX value of INTEGER 2D Array elements = " << MaxValue(arr_2, ROWS, COLS) << std::endl;
	std::cout << "\tMIN value of INTEGER 2D Array elements = " << MinValue(arr_2, ROWS, COLS) << std::endl;
	ShiftManager(arr_2, arr1_2, ROWS, COLS);
	std::cout << delimiter;
	ArrRand(arr_2DB, arr1_2DB, ROWS, COLS, minRand, maxRand);
	std::cout << "Parent DOUBLE 2D Array:\n"; Print(arr_2DB, ROWS, COLS);
	std::cout << "\nRevers DOUBLE 2D Array:\n"; ReversPrint(arr_2DB, ROWS, COLS);
	SortArr(arr_2DB, ROWS, COLS); std::cout << "\nSorted DOUBLE 2D Array:\n"; Print(arr_2DB, ROWS, COLS);
	std::cout << " Summa DOUBLE 2D Array = " << Summ(arr_2DB, ROWS, COLS) << std::endl;
	std::cout << " Arithmetic average of DOUBLE 2D Array elements  = " << Avg(Summ(arr_2DB, ROWS, COLS), ROWS, COLS) << std::endl;
	std::cout << "\tMAX value of DOUBLE 2D Array elements = " << MaxValue(arr_2DB, ROWS, COLS) << std::endl;
	std::cout << "\tMIN value of DOUBLE 2D Array elements = " << MinValue(arr_2DB, ROWS, COLS) << std::endl;
	ShiftManager(arr_2DB, arr1_2DB, ROWS, COLS);
	std::cout << delimiter;

	return 0;
}