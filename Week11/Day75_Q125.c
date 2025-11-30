// Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>
int main()
{
    FILE *file;
    char text[256];
    // Open the file in append mode
    file = fopen("info.txt", "a");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    // Get a new line of text from the user
    printf("Enter a new line of text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append the text to the file
    fputs(text, file);

    // Close the file
    fclose(file);

    printf("Text appended successfully.\n");

    return 0;
}