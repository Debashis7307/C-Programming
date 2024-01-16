#include<stdio.h>
#include<stdlib.h>

// selection_sort

void selection_sort(int *array, int array_size) {
    for (int i = 0; i < array_size; i++) {
        int min_idx = i;
        for (int j = i + 1; j < array_size; j++) {
            if (array[j] < array[min_idx]) {
                min_idx = j;
            }
        }
        int temp = array[i];
        array[i] = array[min_idx];
        array[min_idx] = temp;
    }
}

// insertion_sort

void insertion_sort(int *array, int array_size) {
    for (int i = 1; i < array_size; i++) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

// bubble_sort

void bubble_sort(int *array, int array_size) {
    for (int i = 0; i < array_size - 1; i++) {
        for (int j = 0; j < array_size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// merge_sort

void merge_sort(int *array, int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;
        merge_sort(array, start, mid);
        merge_sort(array, mid + 1, end);
        merge(array, start, mid, end);
    }
}

void merge(int *array, int start, int mid, int end) {
    int i, j, k;
    int n1 = mid - start + 1;
    int n2 = end - mid;
}

// quick_sort

void quick_sort(int *array, int start, int end) {
    if (start < end) {
        int pivot = partition(array, start, end);
        quick_sort(array, start, pivot - 1);
        quick_sort(array, pivot + 1, end);
    }
}

int partition(int *array, int start, int end) {
    int pivot = array[start];
    int i = start + 1;
    int j = end;
}

int main() {
    int array_size;
    printf("Enter the size of the array: ");
    scanf("%d", &array_size);
    int array[array_size];
    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < array_size; i++) {
        scanf("%d", &array[i]);
    }
    
    // Call selection sort
printf("Selection sort:\n");
    selection_sort(array, array_size);
    for (int i = 0; i < array_size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n\n");
    
    // Call insertion sort
printf("Insertion sort:\n");
    insertion_sort(array, array_size);
    for (int i = 0; i < array_size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n\n");
    
    // Call the rest of the sorting functions...
    printf("Bubble sort:\n");
    bubble_sort(array, array_size);
    for (int i = 0; i < array_size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n\n");
    
    printf("Quick sort:\n");
    quick_sort(array, 0, array_size - 1);
    for (int i = 0; i < array_size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n\n");
    
    printf("Merge sort:\n");
    merge_sort(array, 0, array_size - 1);
    for (int i = 0; i < array_size; i++) {
        printf("%d ", array[i]);
    }
}
