// Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float root1, root2;
    int D;
    printf("Enter the cofficent of x^2:");
    scanf("%d", &a);

    printf("Enter the cofficent of x:");
    scanf("%d", &b);

    printf("Enter the constant term:");
    scanf("%d", &c);

    root1 = ((-b) + sqrt((b * b) - (4 * a * c))) / (2 * a);
    root2 = ((-b) - sqrt((b * b) - (4 * a * c))) / (2 * a);
    D = (b * b) - (4 * a * c);

    if (D > 0)
        printf("The roots of equation %dx^2 +%dx+ %c is %f, %f", a, b, c, root1, root2);
    else
        printf("The roots of the quadratic equation are non-real(complex) ");
}