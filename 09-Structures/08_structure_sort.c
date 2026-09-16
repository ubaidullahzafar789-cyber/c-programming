#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    float marks;
};

int main()
{
    struct Student students[5];
    struct Student temp;
    int i;
    int j;

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

    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (students[i].marks > students[j].marks)
            {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("\nStudents sorted by marks:\n");

    for (i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name = %s\n", students[i].name);
        printf("Age = %d\n", students[i].age);
        printf("Marks = %.2f\n", students[i].marks);
    }

    return 0;
}