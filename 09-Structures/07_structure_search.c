#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int age;
    float marks;
};

int main()
{
    struct Student students[5];
    char searchName[50];
    int i;
    int found = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%49s", students[i].name);

        printf("Enter age: ");
        scanf("%d", &students[i].age);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    printf("Enter name to search: ");
    scanf("%49s", searchName);

    for (i = 0; i < 5; i++)
    {
        if (strcmp(students[i].name, searchName) == 0)
        {
            printf("\nStudent found!\n");
            printf("Name = %s\n", students[i].name);
            printf("Age = %d\n", students[i].age);
            printf("Marks = %.2f\n", students[i].marks);

            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nStudent not found.\n");
    }

    return 0;
}