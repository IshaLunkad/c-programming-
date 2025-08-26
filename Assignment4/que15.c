#include<stdio.h>

int main() {
    int evenSum = 0, oddSum = 0;

    for(int i = 1; i <= 10; i++) {
        if(i % 2 == 0) {
            evenSum += i;
        } else {
            oddSum += i;
        }
    }

    printf("Sum of even numbers is%d\n", evenSum);
    printf("Sum of odd numbers is%d\n", oddSum);

    return 0;
}
