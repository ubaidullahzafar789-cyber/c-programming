#include <stdio.h>

struct Address
{
    char city[50];
    int houseNumber;
};

struct Student
{
    char name[50];
    int age;
    struct Address address;
};

int main()
{
    struct Student student;

    printf("Enter student name: ");
    scanf("%49s", student.name);

    printf("Enter age: ");
    scanf("%d", &student.age);

    printf("Enter city: ");
    scanf("%49s", student.address.city);

    printf("Enter house number: ");
    scanf("%d", &student.address.houseNumber);

    printf("\nStudent Information\n");
    printf("Name = %s\n", student.name);
    printf("Age = %d\n", student.age);
    printf("City = %s\n", student.address.city);
    printf("House Number = %d\n", student.address.houseNumber);

    return 0;
}