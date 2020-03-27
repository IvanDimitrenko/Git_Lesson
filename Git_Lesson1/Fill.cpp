#include"Prototype.h"
template<typename T1>void FillRand(T1 arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = (rand() % 100) * 0.1;
		}
	}
}
template<typename T>
void FillRand(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = (rand() % 100) * 0.1;
	}
}
