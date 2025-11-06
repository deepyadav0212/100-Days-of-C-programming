// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main()
{
    int a, b, result;
    char ch;

    printf("Enter the first number:");
    scanf("%d", &a);

    printf("Enter the second number:");
    scanf("%d", &b);

    printf("Enter the character(+, -, *, /,%%): ");
    scanf(" %c", &ch);

    switch (ch)
    {
    case '+':
        result = a + b;
        printf("The sum of %d and %d is %d", a, b, result);
        break;
    case '-':
        result = a - b;
        printf("The difference of %d and %d is %d", a, b, result);
        break;
    case '*':
        result = a * b;
        printf("The product of %d and %d is %d", a, b, result);
        break;
    case '/':
        result = a / b;
        printf("The division of %d and %d is %d", a, b, result);
        break;
    case '%':
        result = a % b;
        printf("The modulus of %d and %d is %d", a, b, result);
        break;
    default:
        printf("You entered an invalid character");
    }
}