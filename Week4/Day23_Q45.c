/*Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.*/

#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0, series;

    printf("Enter the value of n:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        series = (2.0 * i) / ((4.0 * i) - 1);
        sum = sum + series;
    }

    printf("The sum of the series 2/3 + 4/7 + 6/11 + 8/15 + ... up to n is %f", sum);
}
