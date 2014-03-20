// Main.cpp : Defines the entry point for the console application.
//

/**
@mainpage Программа сортировки пузырьком и слиянием
В данной программе реализуется сортировка массива типа char одним из двух предлагаемых методов: пузырьком или слиянием
*/
#include "stdafx.h"
#include <iostream>
using namespace std;
void MergeSort(char *A, int first, int last); /// Функция реализации сортировки методом слияния
void Merge(char *A, int first, int last); /// Функция реализации сортировки методом пузырька
void puzirek(int n, char *list); 
int _tmain(int argc, _TCHAR* argv[])
{
	int n, j, min, f;
	bool a;
	char *list, temp;
	/**
	 Предлагается выбрать способ сортировки: введите в консоль 0 для сортировки массива методом пузырька, введите 1 если хотите отсортировать слиянием
	*/
	cout <<"Vyberite metod sortirovki (0-puzirek, 1-sliyanie) ->";
	cin >> a;
	if (a == 0)
	{
		/**
		 Программа запрашивает количество сотируемых символов
		*/
		cout <<"Vvedite kolichestvo simvolov (puzirek) -> ";
		cin >> n;
		cout << endl;
		list = new char[n];
		/**
		 Здесь введите символы через пробел
		*/
		cout <<"Vvedite simvoly (puzirek) -> ";
		for(int i=0; i<n; i++) cin >> list[i];
		MergeSort(list, 0, n-1);
		/**
		 Здесь программа выведет отсортированный массив
		*/
		for(int i=0; i<n; i++) cout << list[i] <<" ";
		delete []list;
	}
	else
	{
		/**
		 Программа запрашивает количество сотируемых символов
		*/
		cout << endl<<"Vvedite kolichestvo simvolov (sliyaniye) -> ";
		cin >> n;
		cout << endl;
		list = new char[n];
		/**
		 Здесь введите символы через пробел
		*/
		cout <<"Vvedite simvoly (sliyaniye) -> ";
		for(int i=0; i<n; i++) cin >> list[i];
		puzirek(n, list);
		/**
		 Здесь программа выведет отсортированный массив
		*/
		for(int i=0; i<n; i++) cout << list[i] <<" ";
		delete []list;
	};
	return 0;
}
