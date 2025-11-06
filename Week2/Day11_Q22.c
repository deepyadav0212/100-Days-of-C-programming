// Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main()
{
    float cp, sp, profit, loss, profit_percent, loss_percent;

    printf("Enter the cost price:");
    scanf("%f", &cp);

    printf("Enter the selling price:");
    scanf("%f", &sp);

    profit = sp - cp;
    loss = cp - sp;
    profit_percent = (profit / cp) * 100;
    loss_percent = (loss / cp) * 100;

    if (loss < 0 && profit > 0)
        printf("The profit percentage is %f", profit_percent);
    else
        printf("The loss percentage is %f", loss_percent);
}