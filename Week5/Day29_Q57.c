// Find the sum of array elements.

#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter the number of elements you want in array :");
    scanf("%d", &n);

    int arr[n];

    printf("Now enter %d numbers:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("Sum of the elements of the array is: %d", sum);
}