#include <stdio.h>

int main() {
    double balance, withdraw;
    printf("Enter account balance: ");
    scanf("%lf", &balance);

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%lf", &withdraw);
        balance = balance - withdraw;
        printf("Remaining balance: %.2f\n", balance);
    }
    printf("Balance is zero or negative. No more withdrawals.\n");
    return 0;
}