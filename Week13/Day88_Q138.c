// Print all enum names and integer values using a loop.
#include <stdio.h>

enum Colors
{
    RED,
    GREEN,
    BLUE,
    YELLOW,
    ORANGE
};

int main()
{
    const char *names[] = {"RED", "GREEN", "BLUE", "YELLOW", "ORANGE"};

    for (enum Colors color = RED; color <= ORANGE; color++)
    {
        printf("%s = %d\n", names[color], color);
    }

    return 0;
}
