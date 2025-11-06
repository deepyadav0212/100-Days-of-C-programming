// Write a program to reverse a given number.

#include <stdio.h>

int main()
{
    int num, reverse = 0;

    printf("Enter the number you want to reverse:");
    scanf("%d", &num);

    while (num != 0)
    {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    printf("The reversed number is %d", reverse);
}