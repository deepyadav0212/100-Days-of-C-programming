// write a program to fing and  display the sum of first n natural numbers

#include <stdio.h>

int main()
{
    int i, n;
    int sum = 0;
    printf("Enter the limit till which you want to the sum of numbers:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("The sum of natural numbers till %d is %d", n, sum);

    return 0;
}