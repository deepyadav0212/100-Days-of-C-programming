// Assign explicit values starting from 10 and print them.
#include <stdio.h>
enum Numbers
{
    TEN = 10,
    ELEVEN,
    TWELVE,
    THIRTEEN,
    FOURTEEN
};

int main()
{
    for (enum Numbers num = TEN; num <= FOURTEEN; num++)
    {
        printf("%d\n", num);
    }
    return 0;
}