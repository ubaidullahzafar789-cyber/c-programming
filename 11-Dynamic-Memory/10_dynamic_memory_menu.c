#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numbers = NULL;
    int size = 0;
    int choice;
    int i;

    do
    {
        printf("\n===== Dynamic Memory Menu =====\n");
        printf("1. Allocate Memory\n");
        printf("2. Enter Numbers\n");
        printf("3. Display Numbers\n");
        printf("4. Resize Memory\n");
        printf("5. Free Memory\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                if (numbers != NULL)
                {
                    printf("Memory is already allocated.\n");
                    break;
                }

                printf("Enter array size: ");
                scanf("%d", &size);

                numbers = (int *)malloc(size * sizeof(int));

                if (numbers == NULL)
                {
                    printf("Memory allocation failed.\n");
                    size = 0;
                }
                else
                {
                    printf("Memory allocated successfully.\n");
                }

                break;

            case 2:
                if (numbers == NULL)
                {
                    printf("Please allocate memory first.\n");
                    break;
                }

                printf("Enter %d numbers:\n", size);

                for (i = 0; i < size; i++)
                {
                    scanf("%d", &numbers[i]);
                }

                break;

            case 3:
                if (numbers == NULL)
                {
                    printf("No memory is allocated.\n");
                    break;
                }

                printf("Numbers:\n");

                for (i = 0; i < size; i++)
                {
                    printf("%d ", numbers[i]);
                }

                printf("\n");

                break;

            case 4:
                if (numbers == NULL)
                {
                    printf("Please allocate memory first.\n");
                    break;
                }

                printf("Enter new array size: ");
                scanf("%d", &size);

                numbers = (int *)realloc(numbers, size * sizeof(int));

                if (numbers == NULL)
                {
                    printf("Memory reallocation failed.\n");
                    size = 0;
                }
                else
                {
                    printf("Memory resized successfully.\n");
                }

                break;

            case 5:
                if (numbers == NULL)
                {
                    printf("No memory to free.\n");
                    break;
                }

                free(numbers);
                numbers = NULL;
                size = 0;

                printf("Memory released successfully.\n");

                break;

            case 6:
                if (numbers != NULL)
                {
                    free(numbers);
                    numbers = NULL;
                }

                printf("Program ended.\n");

                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 6);

    return 0;
}
