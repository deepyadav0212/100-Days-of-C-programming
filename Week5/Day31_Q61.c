// Search for an element in an array using linear search.

#include <stdio.h>

int linearsearch(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n, i, key;
    printf("Enter the number n:");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elemnt:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to search:");
    scanf("%d", &key);

    int result = linearsearch(arr, n, key);

    if (result != -1)
    {
        printf("Element found at position %d\n", result + 1);
    }
    else
    {
        printf("Element not found in the array");
    }
}
