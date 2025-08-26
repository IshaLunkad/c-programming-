#include <stdio.h>

int main() {
    int n, evencount = 0, oddcount = 0, zero = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        zero = 1;  
    } else {
        while (n != 0) {
            int digit = n % 10;  // Extract last digit

            if (digit == 0) {
                zero++;
            } else if (digit % 2 == 0) {
                evencount++;
            } else {
                oddcount++;
            }

            n = n / 10;  
    }
}

    printf("Count of zeros %d\n", zero);
    printf("Count of even digits (excluding 0): %d\n", evencount);
    printf("Count of odd digits: %d\n", oddcount);

    return 0;
}
