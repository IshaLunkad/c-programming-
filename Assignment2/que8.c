#include <stdio.h>

int main() {
    char a;

    printf("Enter lowercase character: ");
    scanf(" %c", &a);  

    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
        printf("It is a vowel");
    } else {
        printf("It is a consonant");
    }

    return 0;
}
