#include <stdio.h>
void interch(float *a, float *b)
{
    float temp = *a;
    *a = *b;
    *b = temp;
}
void MaxHeapify(float A[], int i, int heap_size)
{
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int largest = i;
    if (l < heap_size && A[l] > A[i])
        largest = l;
    if (r < heap_size && A[r] > A[largest])
        largest = r;
    if (largest != i)
    {
        interch(&A[i], &A[largest]);
        MaxHeapify(A, largest, heap_size);
    }
}
void Build_MaxHeap(float A[], int length)
{
    int heap_size = length;
    for (int i = (length / 2) - 1; i >= 0; i--)
    {
        MaxHeapify(A, i, heap_size);
    }
}
void Heap_Sort(float A[], int length)
{
    Build_MaxHeap(A, length);
    for (int i = length - 1; i >= 1; i--)
    {
        interch(&A[0], &A[i]);
        MaxHeapify(A, 0, i);
    }
}
int main()
{
    int n;
    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);
    float arr[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }
    Heap_Sort(arr, n);
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
    return 0;
}