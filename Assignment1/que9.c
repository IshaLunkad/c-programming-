#include <stdio.h>

int main() {
    int amount, tens, fives, ones;

    printf("Enter amount to withdraw: ");
    scanf("%d", &amount);

    
    tens = amount / 10;
    amount = amount - (tens * 10);

    fives = amount / 5;
    amount = amount - (fives * 5);

    ones = amount;

    
    printf("\nMinimum number of notes:\n");
    printf("10 rupee notes: %d\n", tens);
    printf("5 rupee notes : %d\n", fives);
    printf("1 rupee notes : %d\n", ones);

    return 0;
}
