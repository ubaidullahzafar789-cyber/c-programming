#include <stdio.h>

int main()
{
    FILE *file;

    file = fopen("data.txt", "w");

    if (file == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    fprintf(file, "Hello, C Programming!\n");
    fprintf(file, "This text is stored in a file.\n");

    fclose(file);

    printf("Data written successfully.\n");

    return 0;
}