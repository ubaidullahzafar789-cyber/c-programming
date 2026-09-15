#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    float marks;
};

int main()
{
    struct Student student = {"Ali", 20, 85.5};
    struct Student *pointer;

    pointer = &student;

    printf("Student Information\n");
    printf("Name = %s\n", pointer->name);
    printf("Age = %d\n", pointer->age);
    printf("Marks = %.2f\n", pointer->marks);

    return 0;
}