// Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main()
{
    int num, first, last, temp, divisor = 1;

    printf("Enter the number for which you want to swap first and last digits:");
    scanf("%d", &num);

    temp = num;
    last = num % 10;

    while (temp >= 10)
    {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    first = temp;

    num = num % divisor;
    num = num / 10;

    num = (last * divisor) + num * 10 + first;

    printf("The number after swaping the first and last digits of the number is %d", num);

    return 0;
}