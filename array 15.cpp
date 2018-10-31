/*Дан массив A размера N. Вывести вначале его элементы с нечетными
номерами в порядке возрастания номеров, а затем — элементы с четными
номерами в порядке убывания номеров.

A1, A3, A5, ..., A6, A4, A2.

Условный оператор не использовать.*/

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int N,i;
	cout << "N=";
	cin >> N;
	int *arr = new int[N];
	
	for( i=0;i<N;++i)
	{
		arr[i] = rand()%11;
	}
	for (i = 0; i < N; i += 2)
		cout <<"arr"<<i<<"="<< arr[i]<<"\t";
	for (i = N - (N % 2) - 1; i >= 1; i -= 2)
	cout  << "arr" << i << "="<<arr[i] << "\t";
}

