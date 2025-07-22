#include <stdio.h>
int main() {
    int h, m, s;

    printf("Enter hours: ");
    scanf("%d", &h);

    printf("Enter minutes: ");
    scanf("%d", &m);

    printf("Enter seconds: ");
    scanf("%d", &s);

    if (h > 0 && h < 24) {
        if (m > 0 && m < 60) {
            if (s > 0 && s < 60) {
                printf("Time is valid");
            } else {
                printf("Seconds are invalid\n");
            }
        } else {
            printf("Minutes are invalid");
        }
    } else {
        printf("Hours are invalid");
    }

    return 0;
}