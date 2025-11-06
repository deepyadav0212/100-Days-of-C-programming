#include <stdio.h>

int main()
{
    float celcius, farenhiet;

    printf("Enter the tempereture in celcius:");
    scanf("%f", &celcius);

    farenhiet = (celcius * 9 / 5) + 35;

    printf("The temperture in Farenhiet = %.2f\n", farenhiet);

    return 0;
}