#include <stdio.h>

int main() {
    char ch;

    printf("Enter any character: ");
    scanf(" %c", &ch); 

    if (ch >= 48 && ch <= 57) {
        printf("It is a digit.\n");
    }
    else if (ch >= 65 && ch <= 90) {
        printf("It is an uppercase alphabet.\n");
    }
    else if (ch >= 97 && ch <= 122) {
        printf("It is a lowercase alphabet.\n");
    }
    else {
        printf("IInvalid Input");
    }

    return 0;
}
