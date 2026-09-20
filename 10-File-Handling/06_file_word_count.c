#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *file;
    int character;
    int words = 0;
    int inWord = 0;

    file = fopen("data.txt", "r");

    if (file == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    while ((character = fgetc(file)) != EOF)
    {
        if (isspace(character))
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            words++;
            inWord = 1;
        }
    }

    fclose(file);

    printf("Number of words = %d\n", words);

    return 0;
}