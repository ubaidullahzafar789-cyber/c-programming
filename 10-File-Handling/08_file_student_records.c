#include <stdio.h>

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
    int i;

    file = fopen("students.txt", "w");

    if (file == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    for (i = 0; i < 3; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%49s", student.name);

        printf("Enter age: ");
        scanf("%d", &student.age);

        printf("Enter marks: ");
        scanf("%f", &student.marks);

        fprintf(file, "%s %d %.2f\n",
                student.name,
                student.age,
                student.marks);

        printf("\n");
    }

    fclose(file);

    file = fopen("students.txt", "r");

    if (file == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    printf("Student Records:\n\n");

    while (fscanf(file, "%49s %d %f",
                  student.name,
                  &student.age,
                  &student.marks) == 3)
    {
        printf("Name = %s\n", student.name);
        printf("Age = %d\n", student.age);
        printf("Marks = %.2f\n\n", student.marks);
    }

    fclose(file);

    return 0;
}