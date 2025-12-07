
#include <stdio.h>
#include <stdbool.h>


bool login();
void showMenu();
void checkBalance(float balance);
float deposit(float balance);
float withdraw(float balance);

int main() {
    float balance = 1000.00; 

    if (!login()) {
        printf("Access denied. Exiting program.\n");
        return 0;
    }

    int choice;
    while (1) {
        showMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance = deposit(balance);
                break;
            case 3:
                balance = withdraw(balance);
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}



void showMenu() {
    printf(" ATM MENU \n");
    printf("1. Balance Inquiry\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
}


void checkBalance(float balance) {
    printf("Your current balance is: %.2f\n", balance);
}

float deposit(float balance) {
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount! Deposit must be positive.\n");
        return balance;
    }

    balance += amount;
    printf("Deposit successful. New balance: %.2f\n", balance);

    return balance;
}

float withdraw(float balance) {
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount! Withdrawal must be positive.\n");
        return balance;
    }

    if (amount > balance) {
        printf("Insufficient funds! Withdrawal denied.\n");
        return balance;
    }

    balance -= amount;
    printf("Withdrawal successful. New balance: %.2f\n", balance);

    return balance;
}
 
