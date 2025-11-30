// Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>
enum Operation
{
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    enum Operation op;
    int a, b;

    // Assign values to a and b
    a = 10;
    b = 5;

    // Assign a value to the operation
    op = ADD;

    // Perform the operation based on the enum value
    switch (op)
    {
    case ADD:
        printf("Result: %d\n", a + b);
        break;
    case SUBTRACT:
        printf("Result: %d\n", a - b);
        break;
    case MULTIPLY:
        printf("Result: %d\n", a * b);
        break;
    default:
        printf("Invalid operation\n");
    }

    return 0;
}