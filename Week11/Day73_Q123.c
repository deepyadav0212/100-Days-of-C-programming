// Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <stdio.h>
int main()
{
    FILE *file;
    char filename[100];
    char ch;
    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0; // flag to track if we are inside a word

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
        charCount++;

        // Check for new lines
        if (ch == '\n')
        {
            lineCount++;
        }

        // Check for word boundaries
        if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            inWord = 0; // we are outside a word
        }
        else if (inWord == 0)
        {
            inWord = 1; // we have entered a word
            wordCount++;
        }
    }

    // If the file is not empty, count the last line if it doesn't end with a newline
    if (charCount > 0 && ch != '\n')
    {
        lineCount++;
    }

    // Close the file
    fclose(file);

    // Print the results
    printf("Total Characters: %d\n", charCount);
    printf("Total Words: %d\n", wordCount);
    printf("Total Lines: %d\n", lineCount);

    return 0;
}