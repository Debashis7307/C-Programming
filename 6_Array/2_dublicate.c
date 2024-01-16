#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the list :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the list :\n");
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    for(int i =0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("The dublicate element in the list is :\n",i);
                break;
            }
        }
    }
   
    return 0;
}