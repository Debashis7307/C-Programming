#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the size of the list :\n");
    scanf("%d",&a);
    int arr[a];
    printf("\nEnter the elements of the list in the sorted order :\n");
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the tergat elements :\n");
    scanf("%d",&b);
    int i=0,j=a-1;
    while(arr[i]+arr[j]==b){
        if(arr[i]+arr[j]==b){
            printf("\nThe sum of %d and %d is %d\n", arr[i], arr[j],b);
        }
        if(arr[i]+arr[j]>b){
            j--;
        }
        if(arr[i]+arr[j]<b){
            i++;
        }
    }
    return 0;
}