// Write a program to check if a number is an Armstrong number.

#include <stdio.h>

int main()
{
    int num, digit, armstrong = 0, orignal;

    printf("Enter the number you want to check for armstrong number:");
    scanf("%d", &num);

    orignal = num;

    while (num != 0)
    {
        digit = num % 10;
        armstrong = digit * digit * digit + armstrong;
        num = num / 10;
    }

    if (orignal == armstrong)
        printf("The number is Armstrong");
    else
        printf("The number is not armstrong");
    return 0;
}