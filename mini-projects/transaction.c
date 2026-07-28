#include <stdio.h>

float deposit(float balance) {
    float amount;

    printf("Enter the amount to deposit: ");
    scanf("%f", &amount);

    balance = balance + amount;

    printf("Deposit successful.\n");
    return balance;
}

float withdraw(float balance) {
    float amount;

    printf("Enter the amount to withdraw: ");
    scanf("%f", &amount);

    if (amount > balance) {
        printf("Your balance is insufficient to withdraw that amount of money.\n");
    } else {
        balance = balance - amount;
        printf("Withdrawal successful.\n");
    }

    return balance;
}

void checkBalance(float balance) {
    printf("Your balance is %.2f\n", balance);
}

int main() {
    float balance = 40000;
    int choice;

    printf("Welcome to the ABC Bank!\n\n");

    printf("Select one of the options from the following list and enter the number\n");
    printf("1. Deposit\t");
    printf("2. Withdraw\t");
    printf("3. Check Balance\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    switch(choice){
    case 1:
        balance = deposit(balance);
        break;
    case 2:
        balance = withdraw(balance);
        break;

    case 3:
        checkBalance(balance);
        break;

    default:
        printf("Invalid choice!\n");
    }

    return 0;
}
