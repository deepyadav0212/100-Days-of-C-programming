// Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter the character you want to check:");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
        printf("The charcter you entered is a lower case character\n");
    else if (ch >= 'A' && ch <= 'Z')
        printf("The character you entered is an uppercase character\n");
    else if (ch >= '0' && ch <= '9')
        printf("The number you enterd is a number\n");
    else
        printf("The character you entered is a special character\n");
}