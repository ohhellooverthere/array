﻿/*Дан массив размера N. Найти номера тех элементов массива, которые
больше своего правого соседа, и количество таких элементов. Найденные
номера выводить в порядке их возрастания.*/

#include "pch.h"
#include <iostream>
using namespace std;
#include<ctime>

int main()
{
	srand(time(NULL));
	int count = 0;//  количество таких элементов, которые больше своего правого соседа
	int N;
	cout << "Enter N:";
	cin >> N;
	int *arr = new int[N];
	/////////////////////////////
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 20 + 1;
	}
	for (int i = 0; i < N; i++)
	{
		cout<<arr[i]<<'\t';
	}
	cout << endl;
	/////////////////////////////
	cout << "Numbers of elements,which are bigger then their right neighbor: ";
	for (int i = 0; i < N; i++)
	{
		if (i == (N - 1))
		{
			break;
		}
		if (arr[i] > arr[i + 1])
		{
			int k=i+1;
			count++;
			cout << k<<',';
		}
	}	
	cout << endl;
	cout<<"Total number of those elements:"<<count<< endl;
	delete arr;
}

