#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int rollNumber;
    char name[50];
    float marks;
};

int main()
{
    struct Student *students;
    int count;
    int i;

    printf("Enter number of students: ");
    scanf("%d", &count);

    students = (struct Student *)malloc(count * sizeof(struct Student));

    if (students == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < count; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Name: ");
        scanf("%49s", students[i].name);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nStudent Records:\n");

    for (i = 0; i < count; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    free(students);

    return 0;
}
