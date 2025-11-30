// Show that enums store integers by printing assigned values.
#include <stdio.h>
enum ExampleEnum
{
    FIRST = 1,
    SECOND = 2,
    THIRD = 3,
    FOURTH = 4,
    FIFTH = 5
};

int main()
{
    for (enum ExampleEnum value = FIRST; value <= FIFTH; value++)
    {
        printf("Value: %d\n", value);
    }
    return 0;
}