

#include "pch.h"
#include <iostream>
using namespace std;
int nechet(int *pk)
{

	(*pk) = *pk + 2 ;
		return *pk;
}
int main()
{
  /*Дано целое число N (> 0). Сформировать и вывести целочисленный
массив размера N, содержащий N первых положительных нечетных чисел:
1, 3, 5, ... .*/
	 int N, i;
	 cout << "N=";
	 cin >> N;
	 int k = 1;
	int*arr = new int[N];
	if (N <= 0) {
		cout << "ERROR";
	}
	else 
	{
		for (i = 0; i < N; i++)//проходим по елементам массива 
		{ 
			arr[i] = nechet(&k);
			cout << arr[i] << endl;
		}


	}
}




