// Write a program to input time in seconds and convert it to hours:minutes:seconds format

#include <stdio.h>

int main()
{
    int sec, hours, minutes, reamining_seconds;
    printf("Enter the time in seconds:");
    scanf("%d", &sec);

    hours = sec / 3600;
    minutes = (sec % 3600) / 60;
    reamining_seconds = sec % 60;

    printf("The time is %d:%d:%d", hours, minutes, reamining_seconds);

    return 0;
}