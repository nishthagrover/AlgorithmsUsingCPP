//C++ implementation of bubble sort

#include<iostream>

using namespace std;

//print array
void printArray(int *arr, int n)
{
	for (int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
}

void bubbleSort(int *arr, int n)
{
	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<n-i; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}


int main()
{
	int n = 8;
	int arr[] = {8, 5, 4, 3, 9, 7, 2, 0};
	
	cout<<"Unsorted array: ";
	printArray(arr, n);	
	
	bubbleSort(arr, n);
	
	cout<<"Sorted array: ";
	printArray(arr, n);
	return 0;
}
