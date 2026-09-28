#include <stdio.h>

struct Student
{
    char name[50];
    int rollNumber;
    float marks;
};

float calculateAverage(float marks1, float marks2, float marks3)
{
    return (marks1 + marks2 + marks3) / 3;
}

char calculateGrade(float average)
{
    if (average >= 80)
        return 'A';
    else if (average >= 70)
        return 'B';
    else if (average >= 60)
        return 'C';
    else if (average >= 50)
        return 'D';
    else
        return 'F';
}

int main()
{
    struct Student student;
    float marks1, marks2, marks3;
    float average;
    char grade;

    printf("===== Student Grade Management =====\n");

    printf("Enter student name: ");
    scanf("%49s", student.name);

    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter marks for Subject 1: ");
    scanf("%f", &marks1);

    printf("Enter marks for Subject 2: ");
    scanf("%f", &marks2);

    printf("Enter marks for Subject 3: ");
    scanf("%f", &marks3);

    average = calculateAverage(marks1, marks2, marks3);
    grade = calculateGrade(average);

    printf("\n===== Student Result =====\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Average: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}
