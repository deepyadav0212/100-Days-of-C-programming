// Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int len = strlen(str);

    // Convert first character to uppercase if it's a lowercase letter
    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = str[0] - ('a' - 'A');
    }

    // Convert remaining characters to lowercase if they are uppercase letters
    for (int i = 1; i < len; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + ('a' - 'A');
        }
    }

    printf("Sentence case: %s\n", str);
    return 0;
}