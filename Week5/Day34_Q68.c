// Delete an element from an array.

#include <stdio.h>

int main()
{
    int arr[100];
    int n, pos, i;

    printf("Enter the no of elements you want in your array; ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 1 || pos > n)
    {
        printf("Invalid position! Please run the program again.\n");
    }

    for (i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("\nArray after deleting element at position %d:\n", pos);
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}
