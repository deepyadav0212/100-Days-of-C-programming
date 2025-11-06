// Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter the first number:");
    scanf("%d", &num1);

    printf("Enter the second number:");
    scanf("%d", &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("the swapped numbers are %d and %d", num1, num2);

    return 0;
}