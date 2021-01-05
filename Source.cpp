#include<iostream>
#include<conio.h>
using namespace std;
int partition(int a[], int lb, int ub)
{
	int pivot = a[lb];
	int start = lb;
	int end = ub;
	while (start < end)
	{
		while (a[start] <= pivot)
		{
			start++;
		}
		while (a[end] > pivot)
		{
			end--;
		}
		if (start < end)
		{
			int temp = a[start];
			a[start] = a[end];
			a[end] = temp;
		}
	}
	int temp = a[lb];
	a[lb] = a[end];
	a[end] = temp;
	return end;
}
void quicksort(int a[], int lb, int ub)
{
	int loc;
	if (lb < ub)
	{
		loc = partition(a, lb, ub);
		quicksort(a, lb, loc - 1);
		quicksort(a, loc + 1, ub);
	}
	return;
}
void main()
{
	int a[20], lb, ub, n;
	cout << "\nEnter the size of the array: ";
	cin >> n;
	lb = 0;
	ub = n - 1;
	for (int i = 0; i < n; i++)
	{
		cout << "\nEnter the value of array" << i + 1<<": ";
		cin >> a[i];
	}
	quicksort(a, lb, ub);
	for (int i = 0; i < n; i++)
	{
		cout << a[i]<<" ";
	}
	_getch();
	return;

}