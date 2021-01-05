#include<iostream>
#include<conio.h>
using namespace std;
void merge(int a[], int lb, int mid, int ub)
{
	int i = lb, b[20], k = lb;
	int j = mid + 1;
	while (i<=mid && j <= ub)
	{
		if (a[i] <= a[j])
		{
			b[k] = a[i];
			i++;
			k++;
		}
		else
		{
			b[k] = a[j];
			j++;
			k++;
		}
	}
	if (i > mid)
	{
		while (j <= ub)
		{
			b[k] = a[j];
			k++;
			j++;
		}
	}
	else
	{
		while (i <= mid)
		{
			b[k] = a[i];
			i++;
			k++;
		}
	}
	for (int i = lb; i <= ub; i++)
	{
		a[i] = b[i];
	}
}
void sort(int a[], int lb, int ub)
{
	int mid;
	if (lb < ub)
	{
		mid = (lb + ub) / 2;
		sort(a, lb, mid);
		sort(a, mid + 1, ub);
		merge(a, lb, mid, ub);
	}
}

void main()
{
	int a[20], lb, ub, n;
	cout << "\nEnter the size of array ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the values of array " << i + 1<<": ";
		cin >> a[i];
	}
	lb = 0;
	ub = n - 1;
	sort(a, lb, ub);
	for (int i = 0; i < n; i++)
	{
		cout << a[i]<<" ";
	}
	_getch();
	return;
}
