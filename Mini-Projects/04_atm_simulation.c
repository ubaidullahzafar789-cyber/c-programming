#include <stdio.h>

int main()
{
    int pin;
    int choice;
    float balance = 50000.0;
    float amount;

    printf("===== ATM Simulation =====\n");

    printf("Enter your PIN: ");
    scanf("%d", &pin);

    if (pin != 1234)
    {
        printf("Incorrect PIN.\n");
        return 0;
    }

    printf("Login successful.\n");

    do
    {
        printf("\n===== ATM Menu =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Current Balance = %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                if (amount <= 0)
                {
                    printf("Invalid amount.\n");
                }
                else
                {
                    balance += amount;
                    printf("Deposit successful.\n");
                    printf("New Balance = %.2f\n", balance);
                }

                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= 0)
                {
                    printf("Invalid amount.\n");
                }
                else if (amount > balance)
                {
                    printf("Insufficient balance.\n");
                }
                else
                {
                    balance -= amount;
                    printf("Withdrawal successful.\n");
                    printf("Remaining Balance = %.2f\n", balance);
                }

                break;

            case 4:
                printf("Thank you for using the ATM.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}
