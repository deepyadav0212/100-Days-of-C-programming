// Find the digit that occurs the most times in an integer number.

#include <stdio.h>
int main()
{
    long long num;
    int digitcount[10] = {0};

    printf("Enter the integer number: ");
    scanf("%lld", &num);

    if (num < 0)
    {
        num = -num;
    }

    if (num == 0)
    {
        digitcount[0] = 1;
    }
    while (num > 0)
    {
        int digit = num % 10;
        digitcount[digit]++;
        num /= 10;
    }

    int maxdigit = 0;
    for (int i = 0; i < 10; i++)
    {
        if (digitcount[i] > digitcount[maxdigit])
        {
            maxdigit = i;
        }
    }

    printf("Digit that occur max is %d", maxdigit);

    return 0;
}