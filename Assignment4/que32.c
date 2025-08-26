#include <stdio.h>

int main() {
    int n, count = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);


    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {   
            printf("%d ", i);  
            count++;           
            sum += i;          
        }
    }
    printf("Factors of %d are: ", n);
    printf("\nTotal number of factors = %d\n", count);
    printf("Sum of factors = %d\n", sum);

    return 0;
}
