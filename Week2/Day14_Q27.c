// Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter the value of n:");
    scanf("%d", &n);

    for (i = 1; i <= ((2 * n) - 1); i += 2)
    {
        sum += i;
    }
    printf("The sum of first %d odd numbers is:%d", n, sum);
}