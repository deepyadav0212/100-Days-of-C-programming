// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main()
{
    int n, i;
    float series, sum = 0;
    ;

    printf("Enter the value of n:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        series = ((2.0 * i) - 1) / (2 * i);
        sum = sum + series;
    }

    printf("The sum of the series 1 + 3/4 + 5/6 + 7/8 + … is %f", sum);
}