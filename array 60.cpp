/*Дан массив A размера N. Сформировать новый массив B того же раз-
мера по следующему правилу: элемент BK равен сумме элементов массива

A с номерами от K до N.*/

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int N;
	cout << "Enter N:";
	cin >> N;
	int K;

	int *A = new int[N];
	int *B = new int[N];

	for (int i = 0; i < N; i++)
	{
		A[i] = rand() % 10 + 1;
	}
	for (int i = 0; i < N; i++)
	{
		cout << A[i] << '\t';
	}
	cout << endl;

	for (int K = 0; K < N; K++)
	{
		int sum = 0;
		for (int i= K; i < N; i++)
		{
			sum = sum + A[i];
		}
		B[K] = sum;
		sum = 0;
	}
	for (int i = 0; i < N; i++)
	{
			cout << B[i]<<'\t';
	}


	delete[]A;
	delete[]B;
}
