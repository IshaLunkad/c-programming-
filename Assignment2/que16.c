#include<stdio.h>
int main() {
    int roll;
    char name[100], sub1[100], sub2[100], sub3[100];
    float m1, m2, m3, total, avg;
    char grade;
    


    // Input Section
    printf("Enter Student Details:\n");

    printf("Roll Number     : ");
    scanf("%d", &roll);

    printf("Name            : ");
    scanf("%s", name);

    printf("Subject 1 Name  : ");
    scanf("%s", sub1);

    printf("Subject 2 Name  : ");
    scanf("%s", sub2);

    printf("Subject 3 Name  : ");
    scanf("%s", sub3);

    printf("Marks of %s     : ", sub1);
    scanf("%f", &m1);

    printf("Marks of %s     : ", sub2);
    scanf("%f", &m2);

    printf("Marks of %s     : ", sub3);
    scanf("%f", &m3);

    // Calculation Section
    total = m1 + m2 + m3;
    avg = total / 3;

    // Grade Calculation
    if (avg <= 100 && avg >= 90)
        grade = 'O';
    else if (avg < 90 && avg >= 80)
        grade = 'A';
    else if (avg < 80 && avg >= 70)
        grade = 'B';
    else if (avg < 70 && avg >= 60)
        grade = 'C';
    else if (avg < 60 && avg >= 50)
        grade = 'D';
    else if (avg < 50 && avg >= 35)
        grade = 'E';
    else
        grade = 'F';

    // Output Section
    printf("\n------------- Result -------------\n");
    printf("Roll Number       : %d\n", roll);
    printf("Name              : %s\n", name);

    printf("Subject 1         : %s\n", sub1);
    printf("Marks of %s       : %f\n", sub1, m1);

    printf("Subject 2         : %s\n", sub2);
    printf("Marks of %s       : %.2f\n", sub2, m2);

    printf("Subject 3         : %s\n", sub3);
    printf("Marks of %s       : %f\n", sub3, m3);

    printf("Total             : %f\n", total);
    printf("Average           : %f\n", avg);
    printf("Grade             : %c\n", grade);

    return 0;
}