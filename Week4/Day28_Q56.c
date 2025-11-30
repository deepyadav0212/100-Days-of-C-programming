//Read and print elements of a one-dimensional array.

#include <stdio.h>

int main() {
    int n, i;

    printf("Hey there! How many numbers would you like to enter? ");
    scanf("%d", &n);

    int arr[n];

    printf("Alright, please enter %d numbers below:\n", n);
    for (i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nThanks! Here’s what you entered:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d → %d\n", i + 1, arr[i]);
    }

    printf("\nAll done — that’s your array!\n");

    return 0;
}
