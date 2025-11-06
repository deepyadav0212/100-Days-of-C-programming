// Write a program to check if a number is a perfect number.

#include <stdio.h>

int main()
{
    int num, i, product = 1;

    printf("Enter the number you want to check for perfect number:");
    scanf("%d", &num);

    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            product = product * i;
        }
    }

    if (product == num)
    {
        printf("The number is a perfect number");
    }
    else
    {
        printf("The number is not a perfect number");
    }
}