// C program to implement Quick Sort Algorithm 
#include <stdio.h> 

// Function to swap two elements 
void swap(int* a, int* b) 
{ 
	int temp = *a; 
	*a = *b; 
	*b = temp; 
} 

// Partition function 
int partition(int arr[], int low, int high) 
{ 

	// initialize pivot to be the first element 
	int pivot = arr[low]; 
	int i = low; 
	int j = high; 

	while (i < j) { 

		// condition 1: find the first element greater than 
		// the pivot (from starting) 
		while (arr[i] <= pivot && i <= high - 1) { 
			i++; 
		} 

		// condition 2: find the first element smaller than 
		// the pivot (from last) 
		while (arr[j] > pivot && j >= low + 1) { 
			j--; 
		} 
		if (i < j) { 
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[low], &arr[j]); 
	return j; 
} 

// QuickSort function 
void quickSort(int arr[], int low, int high) 
{ 
	if (low < high) { 

		// call Partition function to find Partition Index 
		int partitionIndex = partition(arr, low, high); 

		// Recursively call quickSort() for left and right 
		// half based on partition Index 
		quickSort(arr, low, partitionIndex - 1); 
		quickSort(arr, partitionIndex + 1, high); 
	} 
} 

void main() 
{ 
    int n;
    printf("Enter the size of Array:\t");
    scanf("%d",&n);
	int arr[n];
    printf("Enter the elts 1by1:\t");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
	quickSort(arr, 0, n - 1); 

	printf("\nSorted array: "); 
	for (int i = 0; i < n; i++) { 
		printf("%d ",arr[i]); 
	} 
}
