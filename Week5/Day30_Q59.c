// Count even and odd numbers in an array.

#include <stdio.h>

int main()
{
    int n, i, arr[100], even = 0, odd = 0;

    printf("Enter how many elements you want in array:");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("The even numbers in array are:%d\n", even);
    printf("The odd numbers in array are:%d\n", odd);
}