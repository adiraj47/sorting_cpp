#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int arr1[20], n, gap;
	cout << "Enter the size of array"<<endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the value of " << i+1 << " of array" << endl;
		cin >> arr1[i];
	}
	gap = n / 2;
	while(gap>=1)
	{
		for (int j = gap; j < n; j++)
		{
			for (int i = j - gap; i >= 0; i - gap)
			{
				if (arr1[i + gap] > arr1[i])
				{
					break;
				}
				else
				{
					int temp = arr1[i];
					arr1[i] = arr1[i + gap];
					arr1[i + gap] = temp;
				}
			}
		}
		gap = gap / 2;
	}
	cout << "sorted array "<<endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr1[i]<<" ";
	}
	_getch();
	return;
}