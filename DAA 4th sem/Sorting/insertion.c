#include <stdio.h>

void insert_Sort(float arr[], int n) {
    int j, i;
    float key;
    for (j = 1; j < n; j++) {
        key = arr[j];
        i = j - 1;

        
        while (i >= 0 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i = i - 1;
        }
        arr[i + 1] = key;
    }
}

int main() {
    
    int n;
    printf("Enter the array size:");
    scanf("%d", &n);
    float arr[n];
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    {
    scanf("%f", &arr[i]);
    }
    insert_Sort(arr, n);

    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%.1f ", arr[i]);
    }
    return 0;
}

