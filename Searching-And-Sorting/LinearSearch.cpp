#include<iostream>

using namespace std;

//if element is found i.e arr[i] equals to element
// Function returns the index of the element in the array
// if the element is not found, it returns -1

//iterative approach
int linearSearch(int *arr, int n, int element)
{
	for(int i=0; i<n; i++)
	{
		if(arr[i] == element)
		{
			return i;
		}
	}
	return -1;
}

// Linear Search using Recursion
int linearSearchRecursive(int *arr, int n, int element)
{
	if(n == -1)
	{
		return(-1);
	}
	if(arr[n-1] == element)
		return n-1;
	else
		return linearSearchRecursive(arr, n-1, element);
	
}



int main()
{
	
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	
	cout<<"\nEnter the elements\n";
	int arr[n];
	for (int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	int element;
	cout<<"Enter the element to search: ";
	cin>>element;
	
	//linear search iterative
	int index1 = linearSearch(arr, n, element);
	index1 != -1? cout<<"\nUsing Iterative approach\nElement is at index : "<< index1 : cout<<"\nElement not found.\n";
	
	//linear search recursive
	int index2 = linearSearchRecursive(arr, n, element);
	index2 != -1? cout<<"\nUsing Recursive approach\nElement is at index : "<< index2 : cout<<"\nElement not found."<<endl;
	
	return 0;	
}
