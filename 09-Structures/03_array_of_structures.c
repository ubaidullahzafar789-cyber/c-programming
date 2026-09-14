#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    float marks;
};

int main()
{
    struct Student students[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%49s", students[i].name);

        printf("Enter age: ");
        scanf("%d", &students[i].age);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    printf("Student Information\n");

    for (i = 0; i < 3; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name = %s\n", students[i].name);
        printf("Age = %d\n", students[i].age);
        printf("Marks = %.2f\n", students[i].marks);
    }

    return 0;
}