// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the first side of the triangle:");
    scanf("%d", &a);

    printf("Enter the second side of the triangle:");
    scanf("%d", &b);

    printf("Enter the third side of the triangle:");
    scanf("%d", &c);

    if (a == b && b == c && a == c)
        printf("The triangle is equilateral");
    else if (a != b && b != c && a != c)
        printf("The triangle is scalene");
    else
        printf("The triangle isosceles");
}
