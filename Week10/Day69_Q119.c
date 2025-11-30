// Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (one element will be repeated): ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int seen[100000] = {0}; // Assuming input elements are in the range 0 to 99999

    for (int i = 0; i < n; i++)
    {
        if (seen[arr[i]] == 1)
        {
            printf("The repeated element is: %d\n", arr[i]);
            return 0; // Exit after finding the repeated element
        }
        seen[arr[i]] = 1; // Mark this element as seen
    }

    printf("No repeated element found.\n");
    return 0;
}