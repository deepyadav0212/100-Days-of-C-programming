// Write a program to calculate the area and circumference of a circle given its radius

#include <stdio.h>

int main()
{
    int radius, area, circumference;

    printf("Enter the radius of the circle:");
    scanf("%d", &radius);

    printf("The area of circle with radius %d is %f\n", radius, 3.14 * (radius * radius));
    printf("The circumference of the circle with radius %d is %f\n", radius, 2 * 3.14 * radius);

    return 0;
}