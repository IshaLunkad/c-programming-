#include <stdio.h>

int main() {
    int emp_id;
    float basic, take_home;

    
    printf("Enter Employee ID: ");
    scanf("%d", &emp_id);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    
    float hra = 0.10 * basic;       
    float da  = 0.30 * basic;       
    float tax = 0.05 * basic;       

    take_home = basic + hra + da - tax;

  
    printf("\n--- Salary Slip ---\n");
    printf("Employee ID        : %d\n", emp_id);
    printf("Basic Salary is:     : %f\n", basic);
    printf("HRA is:         : %f\n", hra);
    printf("DA is:         : %f\n", da);
    printf("Professional Tax is:   : %f\n", tax);
    printf("Take Home Salary is:  : %f\n", take_home);

    return 0;
}
