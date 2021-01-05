#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int a[20] = { 0,1,1,0,2,5,4,0,2,8,7,7,9,2,0,1,9 },b[20],count[20];
	int n = 17, k=9;
	for (int i = 0; i < 20; i++)
	{
		count[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		++count[a[i]];
	}
	for (int i = 1; i <= k; i++)
	{
		count[i] = count[i] + count[i - 1];
	}
	for (int i = n - 1; i >= 0; i--)
	{
		b[--count[a[i]]] = a[i];
	}
	
	for (int i = 0; i < n; i++)
	{
		a[i] = b[i];
	}
	cout << "\nSorted array is: ";
	for (int i = 0; i < n; i++)
	{
		cout<<a[i]<<" ";
	}
	_getch();
	return;
}