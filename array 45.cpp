/*Дан массив размера N. Найти номера двух ближайших элементов из
этого массива (то есть элементов с наименьшим модулем разности) и вы-
вести эти номера в порядке возрастания.*/

#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int N;
	cout << "N=";
	cin >> N;
	int*arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 10 + 1;
	}
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
	int min = abs(arr[0] - arr[1]);
	int I = 0;
	int J = 0;
	int i=0;
	int j;
	while (i < N - 1)
	{
		j = i + 1;
		if (abs(arr[i] - arr[j]) < min)
		{
			min = abs(arr[i] - arr[j]);
			I = i; J = j;
		}
		i++;
	}
	
	cout << I << '\t' << J;
	delete[] arr;
}


