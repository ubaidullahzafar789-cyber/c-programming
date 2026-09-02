#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    printf("Length of string = %lu\n", strlen(text));

    return 0;
}