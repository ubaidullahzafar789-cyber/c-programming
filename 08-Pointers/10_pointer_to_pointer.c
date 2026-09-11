#include <stdio.h>

int main()
{
    int number = 50;
    int *pointer = &number;
    int **doublePointer = &pointer;

    printf("Value of number = %d\n", number);
    printf("Value using pointer = %d\n", *pointer);
    printf("Value using double pointer = %d\n", **doublePointer);

    return 0;
}