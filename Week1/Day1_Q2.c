// Write a program to input two numbers and print their sum, difference, product, quotient

#include <stdio.h>

int main()
{
    int num1, num2, sum, diff, product, quotient;

    printf("Enter the first number:");
    scanf("%d", &num1);

    printf("Enter the second number:");
    scanf("%d", &num2);
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    printf("The sum of %d and %d is %d\n", num1, num2, sum);
    printf("The difference of %d and %d is %d\n", num1, num2, diff);
    printf("The product of %d and %d is %d\n", num1, num2, product);

    if (num2 == 0)
        printf("The result of quotient is undefined as num2 is 0\n");
    else
        printf("The quotient of %d and %d is %d\n", num1, num2, quotient);

    return 0;
}