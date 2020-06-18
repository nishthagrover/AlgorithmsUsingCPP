//C++ implementation of selection sort
#include<iostream>

using namespace std;

//print array
void printArray(int *arr, int n)
{
	for (int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
}

//selection sort
void selectionSort(int *arr, int n)
{
	for(int i=0; i<n-1; i++)
	{
		int min = i;
		for (int j=i; j<n; j++)	
		{
			if(arr[min] > arr[j])
				min = j;			
		}
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;	
	}	
}

int main()
{
	int n = 8;
	int arr[] = {8, 5, 4, 3, 9, 7, 2, 0};
	
	cout<<"Unsorted array: ";
	printArray(arr, n);	
	
	selectionSort(arr, n);
	
	cout<<"Sorted array: ";
	printArray(arr, n);
	return 0;
}
