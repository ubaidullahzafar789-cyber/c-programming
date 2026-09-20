#include <stdio.h>

int main()
{
    FILE *file;
    int character;
    int count = 0;

    file = fopen("data.txt", "r");

    if (file == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    while ((character = fgetc(file)) != EOF)
    {
        count++;
    }

    fclose(file);

    printf("Number of characters = %d\n", count);

    return 0;
}