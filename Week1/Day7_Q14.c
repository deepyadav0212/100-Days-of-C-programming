// Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>

int main()
{
    char alpha;

    printf("Enter the character you want to check for vowel or consonant:");
    scanf("%c", &alpha);

    if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u' || alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U')
        printf("The character %c is vowel", alpha);
    else
        printf("The character %c is consonant", alpha);
}