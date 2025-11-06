// Write a program to check if a number is a strong number.

#include <stdio.h>

int main()
{
    int num, i, sum = 0, digit, product, orignal;

    printf("Enter the number you want to check for strong number:");
    scanf("%d", &num);

    orignal = num;

    while (num != 0)
    {
        digit = num % 10;
        product = 1;
        for (i = 1; i <= digit; i++)
        {
            product = product * i;
        }
        sum = sum + product;
        num = num / 10;
    }

    if (orignal == sum)
    {
        printf("The number is a strong number");
    }
    else
    {
        printf("The number is not a strong number");
    }
}
