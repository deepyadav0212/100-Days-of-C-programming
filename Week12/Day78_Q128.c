// Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *file;
    char filename[100];
    char ch;
    int vowelCount = 0, consonantCount = 0;

    // Get the filename from the user
    printf("Enter the filename to read: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF)
    {
        // Convert character to lowercase for uniformity
        ch = tolower(ch);

        // Check if character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vowelCount++;
        }
        // Check if character is a consonant
        else if (ch >= 'a' && ch <= 'z')
        {
            consonantCount++;
        }
    }

    // Close the file
    fclose(file);

    // Print the results
    printf("Total Vowels: %d\n", vowelCount);
    printf("Total Consonants: %d\n", consonantCount);

    return 0;
}