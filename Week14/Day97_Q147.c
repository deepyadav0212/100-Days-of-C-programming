// Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>
struct Employee
{
    char name[50];
    int id;
    float salary;
};
int main()
{
    struct Employee emp1, emp2;
    FILE *file;

    // Input employee details
    printf("Enter employee name: ");
    fgets(emp1.name, sizeof(emp1.name), stdin);

    printf("Enter employee ID: ");
    scanf("%d", &emp1.id);

    printf("Enter employee salary: ");
    scanf("%f", &emp1.salary);

    // Write to binary file
    file = fopen("employee.dat", "wb");
    if (file == NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fwrite(&emp1, sizeof(struct Employee), 1, file);
    fclose(file);

    // Read from binary file
    file = fopen("employee.dat", "rb");
    if (file == NULL)
    {
        printf("Error opening file for reading.\n");
        return 1;
    }
    fread(&emp2, sizeof(struct Employee), 1, file);
    fclose(file);

    // Display read employee details
    printf("\nEmployee Details from file:\n");
    printf("Name: %s", emp2.name);
    printf("ID: %d\n", emp2.id);
    printf("Salary: %.2f\n", emp2.salary);

    return 0;
}