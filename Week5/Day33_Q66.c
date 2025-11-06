// Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main()
{
    int size, i, newElement, position;

    printf("Enter how many numbers you have : ");
    scanf("%d", &size);

    int arr[100];

    printf("Enter %d numbers in sorted order:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number you want to insert: ");
    scanf("%d", &newElement);

    position = size;
    for (i = 0; i < size; i++)
    {
        if (newElement < arr[i])
        {
            position = i;
            break;
        }
    }

    for (i = size; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position] = newElement;
    size++;

    printf("\nAfter inserting %d, your sorted list looks like this:\n", newElement);
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
