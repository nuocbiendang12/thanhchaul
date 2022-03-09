#include<iostream>
using namespace std;
void createASquareMatrix(int**& array, int& n)
{
	array = new int* [n];
	for (int i = 0; i < n; i++)
	{
		array[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			cout << "Please input array[" << i << "][" << j << "]\n";
			cin >> array[i][j];
		}
	}
}
void printASquareMatrix(int** array, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
}
void freeASquareMatrix(int**& array,int n)
{
	for (int i = 0; i < n; i++)
	{
		delete array[i];
	}
	delete[]array;
}
void main()
{
	int n;
	cout << "Please input width,lenght of two-dimensional array\n";
	cin >> n;
	int** a = NULL;
	createASquareMatrix(a, n);
	printASquareMatrix(a, n);
	freeASquareMatrix(a, n);
}