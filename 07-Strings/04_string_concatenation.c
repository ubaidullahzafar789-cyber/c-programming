#include <stdio.h>
#include <string.h>

int main()
{
    char first[100];
    char second[100];

    printf("Enter first string: ");
    fgets(first, sizeof(first), stdin);

    printf("Enter second string: ");
    fgets(second, sizeof(second), stdin);

    first[strcspn(first, "\n")] = '\0';
    second[strcspn(second, "\n")] = '\0';

    strcat(first, " ");
    strcat(first, second);

    printf("Concatenated string: %s\n", first);

    return 0;
}