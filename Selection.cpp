//source file
#include"h.h"
void SelSort(int arr[50], int size)
{
	int small, position,temp;
	for (int i = 0;i < size - 1;i++)
	{
		small = arr[i];
		position = i;
		for (int j = i + 1;j < size;j++)
		{
			if (arr[j] < small)
			{
				small = arr[j];
				position = j;
			}
			
		}
		temp = arr[i];
		arr[i] = arr[position];
		arr[position] = temp;
		cout << "after interation " << i + 1;
	for (int j = 0;j < size;j++) // to see how it wil change the position
		{
			cout << " "<< arr[j]<<endl;
		}
	}
	return;
}
