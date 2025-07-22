#include <stdio.h>

int main() {
    int num;

   
    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num % 5 == 0 || num % 7 == 0) {
        if (num % 5 == 0 && num % 7 == 0) {
            printf("The number %d is divisible by both 5 and 7.\n", num);
        } else if (num % 5 == 0) {
            printf("The number %d is only divisible by 5.\n", num);
        } else {
            printf("The number %d is only divisible by 7.\n", num);
        }
    } else {
        printf("The number %d is Not divisible by 5 or 7.\n", num);
    }

    return 0;
}
