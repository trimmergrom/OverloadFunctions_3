#include "stdafx.h"
#include "Constants.h"
#include "FillRand.h"


void ArrRand(int arr[], int arr_1[], const unsigned int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr_1[i] = arr[i];
	}
}
void ArrRand(double arr[], double arr_1[], const unsigned int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
		arr_1[i] = arr[i];
	}
}
void ArrRand(int arr[ROWS][COLS], int arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
			arr_1[i][j] = arr[i][j];
		}
	}
}
void ArrRand(double arr[ROWS][COLS], double arr_1[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
			arr[i][j] /= 100;
			arr_1[i][j] = arr[i][j];
		}
	}
}