#include <stdio.h>  
   
int main() {  
    int costPrice, sellingPrice; 
   
    printf("Enter Cost Price and Selling Price\n");  
    scanf("%d %d", &costPrice, &sellingPrice);
       
    if(costPrice > sellingPrice) {
        /* Loss */   
        printf("Loss = %d\n",costPrice - sellingPrice);  
    } else if(sellingPrice > costPrice) {  
        /* Profit or Gain*/ 
        printf("Profit = %d\n", sellingPrice - costPrice);  
    } else {
        /* No Profit or Loss*/
        printf("No Profit and No Loss\n");  
    }  
   
    return 0;  
} 