#include <stdio.h>

struct Student {
    char name[30];
    int age;
    float marks;
};

int main() {
    struct Student student = {"Ubaid", 21, 85.5};

    struct Student *ptr = &student;

    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}