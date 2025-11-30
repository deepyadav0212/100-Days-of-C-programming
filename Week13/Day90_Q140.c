// Define a struct with enum Gender and print person's gender.
#include <stdio.h>
enum Gender
{
    MALE,
    FEMALE,
    OTHER
};

struct Person
{
    char name[50];
    enum Gender gender;
};

int main()
{
    struct Person person1 = {"Alice", FEMALE};

    printf("Name: %s\n", person1.name);
    printf("Gender: ");
    switch (person1.gender)
    {
    case MALE:
        printf("Male\n");
        break;
    case FEMALE:
        printf("Female\n");
        break;
    case OTHER:
        printf("Other\n");
        break;
    default:
        printf("Unknown\n");
    }

    return 0;
}