#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int first;
    int second;

    printf("Enter first number: ");
    scanf("%d", &first);

    printf("Enter second number: ");
    scanf("%d", &second);

    printf("Before swapping: first = %d, second = %d\n", first, second);

    swap(&first, &second);

    printf("After swapping: first = %d, second = %d\n", first, second);

    return 0;
}