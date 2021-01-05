#include<iostream>
#include<conio.h>
using namespace std;
void Sinsert(int[], int);
void main()
{
	int arr[30], size;
	cout << "enter size of element  ";
	cin >> size;
	for (int i = 0;i < size;i++)
	{
		cout << "enter the no: " << i + 1<<"  ";
		cin >> arr[i];
	}
	Sinsert(arr , size);
	cout << "sorted array is";
	for (int i = 0;i < size;i++)
	{
		cout << arr[i] << endl;
	}
	_getch();
	return;
}
void Sinsert(int arr[30], int size)
{
	int temp,j;
	for (int i = 1;i < size;i++)
	{
		temp = arr[i];
		j = i - 1;
		while (temp < arr[j])
		{
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = temp;
		cout << "array after pass " << i<<endl;
		for (int k = 0;k < size;k++)
		{
			cout << arr[k]<<endl;
		}
	}
	
}