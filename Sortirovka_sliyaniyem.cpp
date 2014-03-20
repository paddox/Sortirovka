// Sortirovka_sliyaniyem.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
using namespace std;
	/**
		Функция реализации сортировки методом слияния
	*/
void Merge(char *A, int first, int last)
{
	int middle, start, final, j;
	int *mas=new int[100];
	/**
	Вычисление среднего элемента
	*/
	middle=(first+last)/2; 
	/**
	Начало левой части
	*/
	start=first; 
	/**
	Начало правой части
	*/
	final=middle+1; 
	/**
	Выполняется от начала до конца
	*/
	for(j=first; j<=last; j++) 
		if ((start<=middle) && ((final>last) || (A[start]<A[final])))
		{
			mas[j]=A[start];
			start++;
		}
		else
		{
			mas[j]=A[final];
			final++;
		}
		/**
		Возвращение результата в список
		*/
		for (j=first; j<=last; j++) A[j]=mas[j];
		delete[]mas;
};
/**
Рекурсивная процедура сортировки
*/
void MergeSort(char *A, int first, int last)
{
	{
		if (first<last)
		{
			/**
			Сортировка левой части
			*/
			MergeSort(A, first, (first+last)/2); 
			/**
			Сортировка правой части
			*/
			MergeSort(A, (first+last)/2+1, last); 
			/** 
			Слияние двух частей
			*/
			Merge(A, first, last); 
		}
	}
};
