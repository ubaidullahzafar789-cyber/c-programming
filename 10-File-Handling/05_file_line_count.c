#include <stdio.h>

int main()
{
    FILE *file;
    int character;
    int lines = 0;

    file = fopen("data.txt", "r");

    if (file == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    while ((character = fgetc(file)) != EOF)
    {
        if (character == '\n')
        {
            lines++;
        }
    }

    fclose(file);

    printf("Number of lines = %d\n", lines);

    return 0;
}