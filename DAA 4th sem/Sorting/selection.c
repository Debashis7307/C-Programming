#include<stdio.h>
int main()      {
    int n,t;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    float a[n];
    printf("Enter the element of the array: \n");
    for(int i = 0; i<n; i++)
        scanf("%f",&a[i]);
    for(int i=0; i<n-1;i++){
        int min =i;
        for(int j=i+1; j<n;j++)
            if(a[j]<a[min])
                min =j;
        float t = a[i];
        a[i]= a[min];
        a[min]=t;   }
    printf("The final array is:\n");
    for(int i=0; i<n; i++)
        printf("%.2f,",a[i]);
    printf("\n");
    return 0;   }