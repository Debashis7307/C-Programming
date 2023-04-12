#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the three numbers :");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("The greatest number is :%d", a);
    }
    if (b > c && a <b)
    {
        printf("The greatest number is :%d", b);
    }
    if (c > a && b < c)
    {
        printf("The greatest number is :%d", c);
    }
    return 0;
}