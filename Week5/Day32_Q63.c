// Merge two arrays.

#include <stdio.h>
void merge(int *arr1, int n, int *arr2, int m)
{
    int t = m + n;
    int copyarr[t];
    for (int i = 0; i < n; i++)
    {
        copyarr[i] = arr1[i];
    }

    for (int i = 0; i < m; i++)
    {
        copyarr[n + i] = arr2[i];
    }

    for (int i = 0; i < t; i++)
    {
        printf("%d ", copyarr[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the no of elements for first array:");
    scanf("%d", &n);
    int arr1[n];
    printf("ENter %d element:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    int m;
    printf("Enter the number of elements for second array:");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter %d element:\n", m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    merge(arr1, n, arr2, m);
    return 0;
}