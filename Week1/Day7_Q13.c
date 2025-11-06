// Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year you want to check for leap year:");
    scanf("%d", &year);

    if (year % 4 == 0)
        printf("The year is leap year");
    else
        printf("The year is not leap year");
}