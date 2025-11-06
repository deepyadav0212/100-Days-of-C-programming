// Reverse an array without taking extra space.

#include <stdio.h>

int revarr(int *arr, int n)
{
    int st = 0;
    int end = n - 1;
    int temp;
    while (st < end)
    {
        temp = arr[st];
        arr[st] = arr[end];
        arr[end] = temp;
        st++;
        end--;
    }
    return 0;
}
int main()
{
    int n, i;

    printf("Enter how many elements you want in array:");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    revarr(arr, n);

    printf("The reversed array is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}