#include <stdio.h>
/*
int main() {
    int a, b, c;

    
    printf("Enter three numbers (a, b, c): ");
    scanf("%d%d%d", &a,&b,&c);

    
    if ((a>b&& a<c) || (a>c&&a<b)) {
        printf("%d is between %d and %d.\n", a, b, c);
    } else {
        printf("%d is Not between %d and %d.\n", a, b, c);
    }

    return 0;
}

*/

int main() {
    int a, b, c;

    
    printf("Enter three numbers (a, b, c): ");
    scanf("%d%d%d", &a,&b,&c);

    
    if ((a>b&& a<c) || (a>c&&a<b)) {
        printf("%d is between %d and %d.\n", a, b, c);
    } else if((b>a&& b<c) || (b>c&&b<a)){
        printf("%d is  between %d and %d.\n", b, a, c);
    }
    else ((c>a&& c<b) || (c>b&&c<a)){
        printf("%d is between %d and %d.\n", c, a, b);
    }

    return 0;
}
