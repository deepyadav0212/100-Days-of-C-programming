// Write a program to find the sum of digits of a number.

#include <stdio.h>

int main()
{
    int num, place, sum = 0;

    printf("Enter the number:");
    scanf("%d", &num);

    while (num != 0)
    {
        place = num % 10;
        sum = sum + place;
        num = num / 10;
    }

    printf("The sum of digits is: %d", sum);

    return 0;
}