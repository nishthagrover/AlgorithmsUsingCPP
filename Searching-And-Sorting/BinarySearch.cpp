#include<iostream>

using namespace std;

//if element is found i.e arr[i] equals to element
// Function returns the index of the element in the array
// if the element is not found, it returns -1

//binary Search using C++
int binarySearch(int *arr, int n, int element)
{
	int left = 0, right = n-1, mid;
	while (left <= right)
	{
		mid = left + ((right -left)/2);
		if (arr[mid] == element)
			return mid;
		else if (arr[mid] < element)
		{
			left = mid + 1 ;			
		}
		else if (arr[mid] > element)
		{
			right = mid - 1 ;			
		}	
	}
	return -1;
}

int main()
{
	int arr[] = {9,12, 15, 18, 21, 24}; //Sorted array
	int n = sizeof(arr)/sizeof(int);
	
	int element;
	cout<<"Enter the element to search: ";
	cin>>element;

	int index1 = binarySearch(arr, n, element);
	index1 != -1? cout<<"\nusing Binary Search\nElement is at index : "<< index1 : cout<<"\nElement not found.\n";
	
	return 0;
}
