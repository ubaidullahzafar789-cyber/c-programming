#include <stdio.h>

int main()
{
    FILE *source;
    FILE *destination;
    int character;

    source = fopen("data.txt", "r");

    if (source == NULL)
    {
        printf("Unable to open source file.\n");
        return 1;
    }

    destination = fopen("copy.txt", "w");

    if (destination == NULL)
    {
        printf("Unable to create destination file.\n");
        fclose(source);
        return 1;
    }

    while ((character = fgetc(source)) != EOF)
    {
        fputc(character, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully.\n");

    return 0;
}