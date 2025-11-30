// Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
#include <stdio.h>
enum Days
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};
int main()
{
    for (int day = SUNDAY; day <= SATURDAY; day++)
    {
        printf("Day %d\n", day);
    }
    return 0;
}
