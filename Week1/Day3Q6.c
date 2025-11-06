#include <stdio.h>

int main()
{
    int num1, num2, a;

    printf("Enter the value of num1: ");
    scanf("%d", &num1);

    printf("Enter the value of num2:");
    scanf("%d", &num2);

    a = num1;
    num1 = num2;
    num2 = a;

    printf("\n After swapping:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}