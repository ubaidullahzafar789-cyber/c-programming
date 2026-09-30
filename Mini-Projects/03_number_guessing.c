#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secretNumber;
    int guess;
    int attempts = 0;

    srand(time(NULL));

    secretNumber = (rand() % 100) + 1;

    printf("===== Number Guessing Game =====\n");
    printf("I have selected a number between 1 and 100.\n");

    do
    {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secretNumber)
        {
            printf("Too high! Try again.\n");
        }
        else if (guess < secretNumber)
        {
            printf("Too low! Try again.\n");
        }
        else
        {
            printf("\nCongratulations!\n");
            printf("You guessed the number in %d attempts.\n", attempts);
        }

    } while (guess != secretNumber);

    return 0;
}
