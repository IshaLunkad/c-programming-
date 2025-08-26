#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {   
            sum += i;       
        }
    }

    printf("Sum of factors of %d is %d\n", n, sum);

    return 0;
}
