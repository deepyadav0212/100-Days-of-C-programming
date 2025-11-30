// Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>
struct Student
{
    char name[50];
    int roll_no;
    float marks;
};
int main()
{
    struct Student *student = (struct Student *)malloc(sizeof(struct Student));

    if (student == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter name: ");
    fgets(student->name, sizeof(student->name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &student->roll_no);

    printf("Enter marks: ");
    scanf("%f", &student->marks);

    printf("\nStudent Details:\n");
    printf("Name: %s", student->name);
    printf("Roll Number: %d\n", student->roll_no);
    printf("Marks: %.2f\n", student->marks);

    free(student); // Free allocated memory
    return 0;
}