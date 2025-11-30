// Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>
enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};
int main()
{
    enum Status currentStatus;

    // Assign a value to the status
    currentStatus = SUCCESS;

    // Print the message based on the status value
    switch (currentStatus)
    {
    case SUCCESS:
        printf("Operation was successful.\n");
        break;
    case FAILURE:
        printf("Operation failed.\n");
        break;
    case TIMEOUT:
        printf("Operation timed out.\n");
        break;
    default:
        printf("Unknown status.\n");
    }

    return 0;
}