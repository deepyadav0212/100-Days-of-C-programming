// Write a program to calculate the factorial of a number.

#include <stdio.h>

int main()
{
    int num, factorial = 1;

    printf("Enter the number you want the factorial of:");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    printf("Factorial of %d is %d", num, factorial);
}