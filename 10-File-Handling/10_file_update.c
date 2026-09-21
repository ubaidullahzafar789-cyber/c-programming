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
    FILE *tempFile;

    struct Student student;

    char searchName[50];
    float newMarks;

    int found = 0;

    file = fopen("students.txt", "r");

    if (file == NULL)
    {
        printf("Unable to open students.txt\n");
        return 1;
    }

    tempFile = fopen("temp.txt", "w");

    if (tempFile == NULL)
    {
        printf("Unable to create temporary file.\n");
        fclose(file);
        return 1;
    }

    printf("Enter student name to update: ");
    scanf("%49s", searchName);

    printf("Enter new marks: ");
    scanf("%f", &newMarks);

    while (fscanf(file, "%49s %d %f",
                  student.name,
                  &student.age,
                  &student.marks) == 3)
    {
        if (strcmp(student.name, searchName) == 0)
        {
            student.marks = newMarks;
            found = 1;
        }

        fprintf(tempFile, "%s %d %.2f\n",
                student.name,
                student.age,
                student.marks);
    }

    fclose(file);
    fclose(tempFile);

    remove("students.txt");
    rename("temp.txt", "students.txt");

    if (found)
    {
        printf("Student marks updated successfully.\n");
    }
    else
    {
        printf("Student not found.\n");
    }

    return 0;
}