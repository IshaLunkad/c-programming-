#include<stdio.h>

int main() {
    int evenSum = 0;

    for(int i = 100; i <= 200; i++) {
        if(i % 2 == 0) {
            evenSum += i;
        }
    }

    printf("Sum of even numbers is = %d\n", evenSum);
   

    return 0;
}
