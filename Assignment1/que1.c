#include<stdio.h>
int main(){

float r;
float pi=3.14;
printf("Enter r to calculate area and circumference of circle");
scanf("%f",&r);
 
float area=pi*r*r;
float circum=2*pi*r;

printf("Area of circle is:%f\n",area);
printf("Circum of circle is:%f",circum );

    return 0;
}