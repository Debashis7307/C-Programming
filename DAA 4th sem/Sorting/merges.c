#include <stdio.h>
void merge(float a[], int p, int q, int r) {
    int i, j, k;
    int n1 = q - p + 1;
    int n2 = r - q;
    float L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = a[p + i];
    for (j = 0; j < n2; j++)
        R[j] = a[q + 1 + j];

    i = 0; 
    j = 0; 
   
    for(k=p;k<=r;k++) {
     if(i < n1 && j < n2){
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i= i + 1;
        } else {
            a[k] = R[j];
            j=j+1;
        }
    }
    
    else if(i<n1)
    {
    a[k] = L[i];
        i++;
    }
    else if(j<n2)
    {
    a[k]=R[j];
    j++;
    }
    }
}

void mergeSort(float a[], int p, int r) {
    if (p < r) {       
        int q = (p+r)/ 2;      
        mergeSort(a, p, q);
        mergeSort(a, q + 1, r);
        merge(a, p, q, r);
    }
}

int main() {
    
    int num;
    printf("Enter the size of the array: ");
    scanf("%d", &num);
    float a[num];
    printf("Enter the array elements.");
    for(int i=0; i<num; i++)
    {
    scanf("%f", &a[i]);
    }    
    mergeSort(a, 0, num - 1);
    printf("\nSorted array is \n");
    for (int i = 0; i < num; i++)
        printf("%.1f ", a[i]);
    printf("\n");
    return 0;
}

