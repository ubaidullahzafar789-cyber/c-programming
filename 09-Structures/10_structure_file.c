#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    float marks;
};

int main()
{
    struct Student student;
    FILE *file;

    printf("Enter student name: ");
    scanf("%49s", student.name);

    printf("Enter age: ");
    scanf("%d", &student.age);

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    file = fopen("student.txt", "w");

    if (file == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    fprintf(file, "Name: %s\n", student.name);
    fprintf(file, "Age: %d\n", student.age);
    fprintf(file, "Marks: %.2f\n", student.marks);

    fclose(file);

    printf("\nStudent information saved successfully.\n");

    file = fopen("student.txt", "r");

    if (file == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    printf("\nData from file:\n");

    char line[100];

    while (fgets(line, sizeof(line), file) != NULL)
    {
        printf("%s", line);
    }

    fclose(file);

    return 0;
}