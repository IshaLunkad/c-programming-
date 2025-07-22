#include <stdio.h>

int main() {
    int days, books, finePerBook = 0, totalFine;

    printf("Enter number of books: ");
    scanf("%d", &books);

    printf("Enter number of days : ");
    scanf("%d", &days);

    if (days <= 0) {
        printf("No fine. Books returned on time.\n");
    }
    else if (days < 5) {
        finePerBook = 5 * days;
    }
    else if (days <= 10) {
        finePerBook = 20 * days;
    }
    else {
        finePerBook = 50* days;
    }

    totalFine = finePerBook * books;

    
    printf("Total fine for %d book(s) = %d\n", books, totalFine);

    return 0;
}
