#pragma once
#include<iostream>
using namespace std;

const int ROWS = 10;
const int COLS = 10;

template<typename T>
void FillRand(T arr[], const int n);
template<typename T>
void FillRand(T  arr[], const int n);

template<typename T1>
void FillRand(T1 arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Print(const T arr[], const int n);

template<typename T1>
void Print(T1 arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Sort(T arr[], const int n);

template<typename T1>
void Sort(T1 arr[ROWS][COLS], const int ROWS, const int COLS);