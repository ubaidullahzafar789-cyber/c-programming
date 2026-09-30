#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100

struct Contact
{
    char name[50];
    char phone[20];
    char email[50];
};

void addContact(struct Contact contacts[], int *count)
{
    if (*count >= MAX_CONTACTS)
    {
        printf("Contact list is full.\n");
        return;
    }

    printf("\nEnter name: ");
    scanf("%49s", contacts[*count].name);

    printf("Enter phone: ");
    scanf("%19s", contacts[*count].phone);

    printf("Enter email: ");
    scanf("%49s", contacts[*count].email);

    (*count)++;

    printf("Contact added successfully.\n");
}

void displayContacts(struct Contact contacts[], int count)
{
    int i;

    if (count == 0)
    {
        printf("No contacts available.\n");
        return;
    }

    printf("\n===== Contact List =====\n");

    for (i = 0; i < count; i++)
    {
        printf("\nContact %d\n", i + 1);
        printf("Name: %s\n", contacts[i].name);
        printf("Phone: %s\n", contacts[i].phone);
        printf("Email: %s\n", contacts[i].email);
    }
}

void searchContact(struct Contact contacts[], int count)
{
    char searchName[50];
    int i;
    int found = 0;

    printf("\nEnter name to search: ");
    scanf("%49s", searchName);

    for (i = 0; i < count; i++)
    {
        if (strcmp(contacts[i].name, searchName) == 0)
        {
            printf("\nContact found!\n");
            printf("Name: %s\n", contacts[i].name);
            printf("Phone: %s\n", contacts[i].phone);
            printf("Email: %s\n", contacts[i].email);

            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Contact not found.\n");
    }
}

int main()
{
    struct Contact contacts[MAX_CONTACTS];

    int count = 0;
    int choice;

    do
    {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addContact(contacts, &count);
                break;

            case 2:
                displayContacts(contacts, count);
                break;

            case 3:
                searchContact(contacts, count);
                break;

            case 4:
                printf("Goodbye!\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}
