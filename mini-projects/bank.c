#include <stdio.h>

int main() {

    float balance = 40000.0;

    int choice;
    float amount;

    printf("Welcome to the ABC Bank!\n\n");

    printf("Select one of the options from the following list and enter the number\n");
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Check Balance\n");

    printf("Your choice: ");
    scanf("%d", &choice);

    if(choice == 1) {

        printf("Enter the amount to deposit: ");
        scanf("%f", &amount);

        balance = balance + amount;

        printf("Deposit successful!\n");
        printf("Your new balance is %.2f\n", balance);
    }

    else if(choice == 2) {

        printf("Enter the amount to withdraw: ");
        scanf("%f", &amount);

        if(amount > balance) {

            printf("Your balance is insufficient to withdraw that amount of money\n");

        } else {

            balance = balance - amount;

            printf("Withdrawal successful!\n");
            printf("Your remaining balance is %.2f\n", balance);
        }
    }

    else if(choice == 3) {

        printf("Your balance is %.2f\n", balance);
    }

    else {

        printf("Invalid choice!\n");
    }

    return 0;
}
