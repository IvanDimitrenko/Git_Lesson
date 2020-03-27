#include"Prototype.h"

void main()
{
	cout << endl << "\t\tInt" << endl;
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);

	cout << endl << "\t\tDouble" << endl;
	const int m = 8;
	double brr[m];
	FillRand(brr, m);
	Print(brr, m);
	Sort(brr, m);
	Print(brr, m);

	cout << endl << "\t\tInt" << endl;
	int A[ROWS][COLS];
	FillRand(A, ROWS, COLS);
	Print(A, ROWS, COLS);
	Sort(A, ROWS, COLS);
	Print(A, ROWS, COLS);

	cout << endl << "\t\tDouble" << endl;

	double mat[ROWS][COLS];
	FillRand(mat, ROWS, COLS);
	Print(mat, ROWS, COLS);
	Sort(mat, ROWS, COLS);
	Print(mat, ROWS, COLS);
}


