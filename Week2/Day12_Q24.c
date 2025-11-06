/*Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at ₹5/unit
Next 100 units at ₹7/unit
Next 100 units at ₹10/unit
Above at ₹12/unit
*/

#include <stdio.h>

int main()
{
    int units, bill;
    printf("Enter the no of units consumed:");
    scanf("%d", &units);

    if (units > 0 && units <= 100)
    {
        bill = 5 * units;
        printf("The electricity bill for %d units is Rs.%d", units, bill);
    }
    else if (units > 100 && units <= 200)
    {
        bill = (7 * (units - 100)) + (5 * 100);
        printf("The electricity bill for %d units is Rs.%d", units, bill);
    }
    else if (units > 200 && units <= 300)
    {
        bill = (10 * (units - 200)) + (7 * 100) + (5 * 100);
        printf("The electricity bill for %d units is Rs.%d", units, bill);
    }
    else if (units > 300)
    {
        bill = (12 * (units - 300)) + (10 * 100) + (7 * 100) + (5 * 100);
        printf("The electricity bill for %d units is Rs.%d", units, bill);
    }
}