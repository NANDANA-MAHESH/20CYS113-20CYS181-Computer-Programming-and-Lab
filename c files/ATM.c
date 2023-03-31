#include <stdio.h>

int main() {
    char name[100];
    int accNo, i, pin, pin1, pin2;
    float balance, amount;

    printf("Enter your name\n");
    scanf("%s", name);

    printf("Enter your account no\n");
    scanf("%d", &accNo);

    printf("Enter your account balance\n");
    scanf("%f", &balance);

    printf("Enter choice\n");
    printf("1.Withdrawal\n");
    printf("2.Deposit\n");
    printf("3.Check Balance\n");
    printf("4.Pin Change\n");

    scanf("%d", &i);

    if (i == 1) {
        if (balance > 500) {
            printf("Enter your pin\n");
            scanf("%d", &pin);

            printf("Enter amount to be withdrawn\n");
            scanf("%f", &amount);

            balance = balance - amount;

            if (balance > 100) {
                printf("Your current balance is %.2f\n", balance);
            }
            else {
                printf("Amount can't be withdrawn\n");
            }
        }
        else {
            printf("Enter amount to be withdrawn\n");
            scanf("%f", &amount);

            balance = balance - amount;

            if (balance > 100) {
                printf("Your current balance is %.2f\n", balance);
            }
            else {
                printf("Amount can't be withdrawn\n");
            }
        }
    }
    else if (i == 2) {
        printf("Enter Amount to be deposited\n");
        scanf("%f", &amount);

        balance = balance + amount;

        printf("Your current balance is %.2f\n", balance);
    }
    else if (i == 3) {
        printf("The current balance is %.2f\n", balance);
    }
    else if (i == 4) {
        printf("Enter current pin\n");
        scanf("%d", &pin1);

        printf("Enter the pin you want to change to\n");
        scanf("%d", &pin2);

        pin1 = pin2;

        printf("Your new pin is %d\n", pin1);
    }
    else {
        printf("Choice is not available\n");
    }

    printf("THANKS FOR USING OUR ATM\n");

    return 0;
}
