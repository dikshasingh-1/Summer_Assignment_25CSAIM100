#include <stdio.h>

int main() {
    int choice;
    float balance = 10000, amount;

    do {
        printf("\n1.Check Balance\n2.Deposit\n3.Withdraw\n4.Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Balance = %.2f\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                balance += amount;
                break;

            case 3:
                printf("Enter withdraw amount: ");
                scanf("%f", &amount);
                if (amount <= balance)
                    balance -= amount;
                else
                    printf("Insufficient Balance\n");
                break;

            case 4:
                break;

            default:
                printf("Invalid Choice\n");
        }
    } while (choice != 4);

    return 0;
}