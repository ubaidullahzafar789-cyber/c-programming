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

    printf("Student Name = %s\n", student.name);
    printf("Student Age = %d\n", student.age);
    printf("Student Marks = %.2f\n", student.marks);

    return 0;
}