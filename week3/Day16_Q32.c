// Write a program to check if a number is a palindrome.

#include <stdio.h>

int main()
{
    int num, palindrome = 0, place, orignal;
    printf("Enter the number you want to check for palindrome:");
    scanf("%d", &num);

    orignal = num;

    while (num != 0)
    {
        place = num % 10;
        palindrome = palindrome * 10 + place;
        num = num / 10;
    }

    if (orignal == palindrome)
        printf("The number is palinrome");
    else
        printf("The number is not palindrome");

    return 0;
}
