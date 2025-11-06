// Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main()
{
    int a, b, i, hcf;

    printf("Enter the first number:");
    scanf("%d", &a);

    printf("Enter the second number:");
    scanf("%d", &b);

    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }

    printf("The hcf(Gcd) is %d", hcf);

    return 0;
}