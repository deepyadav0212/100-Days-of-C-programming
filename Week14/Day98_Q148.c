// Take two structs as input and check if they are identical.
#include <stdio.h>
struct Point
{
    int x;
    int y;
};
int main()
{
    struct Point p1, p2;

    printf("Enter coordinates for Point 1 (x y): ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("Enter coordinates for Point 2 (x y): ");
    scanf("%d %d", &p2.x, &p2.y);

    if (p1.x == p2.x && p1.y == p2.y)
    {
        printf("The two points are identical.\n");
    }
    else
    {
        printf("The two points are not identical.\n");
    }

    return 0;
}