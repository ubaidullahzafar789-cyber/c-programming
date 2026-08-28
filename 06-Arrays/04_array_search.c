#include <stdio.h>

int main()
{
    int numbers[5];
    int search;
    int found = 0;

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &search);

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] == search)
        {
            printf("%d found at index %d.\n", search, i);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("%d was not found in the array.\n", search);
    }

    return 0;
}