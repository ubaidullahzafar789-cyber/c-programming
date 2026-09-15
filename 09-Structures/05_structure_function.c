#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    float marks;
};

void displayStudent(struct Student student)
{
    printf("\nStudent Information\n");
    printf("Name = %s\n", student.name);
    printf("Age = %d\n", student.age);
    printf("Marks = %.2f\n", student.marks);
}

int main()
{
    struct Student student;

    printf("Enter student name: ");
    scanf("%49s", student.name);

    printf("Enter age: ");
    scanf("%d", &student.age);

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    displayStudent(student);

    return 0;
}