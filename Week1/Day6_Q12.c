// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main()
{
    int i, num;

    printf("Enter the integer you want to check:");
    scanf("%d", &num);

    if (num >= 0)
    {
        if (num == 0)
            printf("The number is zero");
        else
            printf("Tne number is positive");
    }
    else
        printf("The number is negative");
}