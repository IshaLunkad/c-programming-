#include <stdio.h>


int main() {
    float radius,PI=3.14;
    int choice;

    printf("Enter the radius: ");
    scanf("%f%d", &radius,&choice);

    
    printf("\nChoose an option:\n");
    printf("1: Area of Circle\n");
    printf("2: Circumference of Circle\n");
    printf("3: Volume of Sphere\n");
    printf("Enter your choice (1–3): ");
    

    switch (choice) {
        case 1:
            printf("Area of Circle = %f\n", PI * radius * radius);
            break;

        case 2:
            printf("Circumference of Circle = %f\n", 2 * PI * radius);
            break;

        case 3:
            printf("Volume of Sphere = %f\n", (4.0 / 3) * PI * radius * radius * radius);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
