// Write a program to check if a number is prime.

#include <stdio.h>

int main()
{
    int num, i, prime = 1;

    printf("Enter the number you want to check for prime number:");
    scanf("%d", &num);

    if (num <= 1)
        printf("The number is not a prime number");

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 1)
        printf("the number is a prime number");
    else
        printf("The number is not a prime number");

    return 0;
}