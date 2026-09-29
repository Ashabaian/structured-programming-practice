#include <stdio.h>

int main()
{
    int choice;
    int num1, num2, result;

    do
    {
        printf("\n===== CALCULATOR MENU =====\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter first number: ");
            scanf("%d", &num1);

            printf("Enter second number: ");
            scanf("%d", &num2);

            result = num1 + num2;
            printf("Result = %d\n", result);
        }
        else if (choice == 2)
        {
            printf("Enter first number: ");
            scanf("%d", &num1);

            printf("Enter second number: ");
            scanf("%d", &num2);

            result = num1 - num2;
            printf("Result = %d\n", result);
        }
        else if (choice == 3)
        {
            printf("Program ended.\n");
        }
        else
        {
            printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 3);

    return 0;
}
