#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter any alphabet: ");
    scanf(" %c", &ch);  

    if (isupper(ch)) {
        ch = tolower(ch);
        printf("Lowercase: %c\n", ch);
    }
    else if (islower(ch)) {
        ch = toupper(ch);
        printf("Uppercase: %c\n", ch);
    }
    else {
        printf("Not a valid alphabet letter.\n");
    }

    return 0;
}
