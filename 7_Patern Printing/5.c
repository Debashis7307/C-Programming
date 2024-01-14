#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    printf("*\n");
    for (int i = 1; i <= n-1; i++) {
        for (int j = 1; j <= i * 2; j++) {
            printf("*");
        }
        printf("\n");
    }
}
