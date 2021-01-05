// source file
#include"h.h"
void Bubble (int arr[50], int size)
{
	int temp;
	for (int i = 0;i < size-1;i++)
	{
		for (int j = 0;j < size-i-1;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			cout << "after interation " << i + 1;
			for (int j = 0;j < size;j++) // to see how it wil change the position
			{
				cout << " " << arr[j] ;
				cout << endl;
			}

		}
	}
	return;
}