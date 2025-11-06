// Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main()
{
    int num, digits, orignal, product = 1;

    printf("Enter the number:");
    scanf("%d", &num);

    while (num != 0)
    {
        digits = num % 10;
        if (digits % 2 != 0)
        {
            product = product * digits;
        }
        num = num / 10;
    }
    printf("The product of odd digits is %d", product);

    return 0;
}