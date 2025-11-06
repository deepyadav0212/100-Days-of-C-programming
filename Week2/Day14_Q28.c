// Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter the value of n:");
    scanf("%d", &n);

    for (i = 0; i <= 2 * n; i += 2)
    {
        sum += i;
    }
    printf("The sum of first %d even numbers is %d", n, sum);
}