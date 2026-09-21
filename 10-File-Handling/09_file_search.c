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
    FILE *file;
    struct Student student;
    char searchName[50];
    int found = 0;

    file = fopen("students.txt", "r");

    if (file == NULL)
    {
        printf("Unable to open students.txt\n");
        return 1;
    }

    printf("Enter student name to search: ");
    scanf("%49s", searchName);

    while (fscanf(file, "%49s %d %f",
                  student.name,
                  &student.age,
                  &student.marks) == 3)
    {
        if (strcmp(student.name, searchName) == 0)
        {
            printf("\nStudent found!\n");
            printf("Name = %s\n", student.name);
            printf("Age = %d\n", student.age);
            printf("Marks = %.2f\n", student.marks);

            found = 1;
            break;
        }
    }

    fclose(file);

    if (!found)
    {
        printf("\nStudent not found.\n");
    }

    return 0;
}