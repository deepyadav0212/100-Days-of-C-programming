// Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
#include <stdio.h>
int main()
{
    FILE *file;
    char filename[100];
    char ch;
    // Get the filename from the user
    printf("Enter the filename to read: ");
    scanf("%s", filename);
    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error: File does not exist or cannot be opened!\n");
        return 1;
    }
    // Read and display the file content
    printf("Contents of %s:\n", filename);
    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch);
    }
    // Close the file
    fclose(file);
    return 0;
}