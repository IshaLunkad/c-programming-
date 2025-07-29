#include<stdio.h>
int main(){

int x,y,choice,num;
printf("Enter two numbers: ");
scanf("%d%d%d",&x,&y,&choice);

printf("\nChoose an operation:\n");
    printf("1: Equality (Check if x == y)\n");
    printf("2: Less Than (Check if x < y)\n");
    printf("3: Quotient and Remainder (x / y)\n");
    printf("4: Range (Check if a number is between x and y)\n");
    printf("5: Swap (Interchange x and y)\n");
    printf("Enter your choice (1–5): ");

    switch (choice) {
        case 1:
            if (x == y)
                printf("x is equal to y.\n");
            else
                printf("x is not equal to y.\n");
            break;

        case 2:
            if (x < y)
                printf("x is less than y.\n");
            else
                printf("x is not less than y.\n");
            break;

        case 3:
            if (y != 0) {
                printf("Quotient: %d\n", x / y);
                printf("Remainder: %d\n", x % y);
            } else {
                printf("Division invalid.\n");
            }
            break;
//range check
        case 4:
            printf("Enter a number to check if it lies between x and y : ");
            scanf("%d", &num);

            if ((num >= x && num <= y) || (num >= y && num <= x))
                printf("The number %d lies between %d and %d.\n", num, x, y);
            else
                printf("The number %d does not lie between %d and %d.\n", num, x, y);
            break;

        case 5:
            // Swapping 
            {
                int temp = x;
                x = y;
                y = temp;
                printf("After swapping:\n");
                printf("x = %d, y = %d\n", x, y);
            }
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}