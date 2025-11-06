// Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>

int main()
{
    float ci, principle, rate, time; // ci is compund interest

    printf("Enter the principle:");
    scanf("%f", &principle);

    printf("Enter the rate:");
    scanf("%f", &rate);

    printf("Enter the time in years:");
    scanf("%f", &time);

    ci = (principle * ((1 + (rate / 100)) * (1 + (rate / 100)))) - principle;

    printf("The compund interest is %f", ci);

    return 0;
}