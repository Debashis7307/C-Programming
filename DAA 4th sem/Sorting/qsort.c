#include <stdio.h>
void Qsort(float a[], int m, int n) 
{
    if (m < n) 
    {
        int i = m;
        int j = n + 1;
        float key = a[m];
        while (1) 
        {
            do
                i++;
            while (a[i] < key);
            do 
                j--; 
            while (a[j] > key);
            if (i < j) {
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;}
            else 
                break;
        } 
        float temp = a[m];
        a[m] = a[j];
        a[j] = temp;
        Qsort(a, m, j - 1);
        Qsort(a, j + 1, n);
    }
}
int main() {
    int n; 
    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);
    float arr[n];
    printf("Enter the array elements: ");
    for (int i = 0; i<n ; i++)
        scanf("%f", &arr[i]);
    Qsort(arr, 0, n - 1);
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%.1f ",arr[i]);
    printf("\n");
    return 0;
}