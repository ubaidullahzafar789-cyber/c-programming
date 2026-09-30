#include <stdio.h>

int main()
{
    int answer;
    int score = 0;

    printf("===== C Programming Quiz =====\n\n");

    printf("1. Which symbol is used to end a C statement?\n");
    printf("1. :\n");
    printf("2. ;\n");
    printf("3. .\n");
    printf("4. ,\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is 2.\n");
    }

    printf("\n2. Which function is used to print output in C?\n");
    printf("1. scanf()\n");
    printf("2. input()\n");
    printf("3. printf()\n");
    printf("4. print()\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is 3.\n");
    }

    printf("\n3. Which data type is used to store decimal numbers?\n");
    printf("1. int\n");
    printf("2. char\n");
    printf("3. float\n");
    printf("4. void\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is 3.\n");
    }

    printf("\n4. Which loop executes at least once?\n");
    printf("1. for\n");
    printf("2. while\n");
    printf("3. do-while\n");
    printf("4. if\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is 3.\n");
    }

    printf("\n5. Which operator is used to get the address of a variable?\n");
    printf("1. *\n");
    printf("2. &\n");
    printf("3. #\n");
    printf("4. @\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is 2.\n");
    }

    printf("\n===== Quiz Result =====\n");
    printf("Your score: %d/5\n", score);

    if (score == 5)
    {
        printf("Excellent!\n");
    }
    else if (score >= 3)
    {
        printf("Good job!\n");
    }
    else
    {
        printf("Keep practicing!\n");
    }

    return 0;
}
