// Write a program to print all factors of a given number.

#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter the number you want the factors of:");
    scanf("%d", &num);

    printf("The factors are:");

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf(" %d", i);
        }
    }

    return 0;
}