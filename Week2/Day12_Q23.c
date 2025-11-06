/*Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.*/

#include <stdio.h>

int main()
{
    int days, fine = 0;

    printf("Enter the number of days by which the book sumbission is late:");
    scanf("%d", &days);

    if (days > 0 && days <= 5)
    {
        fine = 2 * days;
        printf("The fine for %d days is Rs.%d", days, fine);
    }

    else if (days > 5 && days <= 10)
    {
        fine = (4 * (days - 5)) + (2 * 5);
        printf("The fine for %d days is Rs.%d", days, fine);
    }

    else if (days > 10 && days <= 30)
    {
        fine = (6 * (days - 10)) + (4 * 5) + (2 * 5);
        printf("The fine for %d days is Rs.%d", days, fine);
    }
    else if (days > 30)
    {
        printf("Your membership is cancelled");
    }
    else
        printf("The no of days you entered is invalid");
}