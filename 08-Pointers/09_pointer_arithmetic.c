#include <stdio.h>

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};
    int *pointer = numbers;
    int i;

    printf("Array elements using pointer arithmetic:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", *(pointer + i));
    }

    return 0;
}