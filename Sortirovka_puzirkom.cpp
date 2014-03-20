// Sortirovka_puzirkom.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
	/**
	Функция реализации сортировки методом пузырька
	*/
void puzirek(int n, char *list)
{
	int j, min, f;
	char temp;
	for (int j = 0; j < n - 1; j++)
	{
		f = 0;
		min = j;
		for(int i=j; i < (n-j-1); i++)
		{
			if (list[i] > list[i+1])
			{
				temp = list[i];
				list[i] = list[i+1];
				list[i+1] = temp;
				f = 1;
			}
			if (list[i] < list[min])
				min = i;
		}
		if (f == 0)
			break;
		if (min != j)
		{
			temp = list[j];
			list[j] = list[min];
			list[min] = temp;
		}
	}
}
