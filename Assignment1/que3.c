#include<stdio.h>
int main(){

float fahrenheit;

printf("Enter  a tenp in fahrenheit");
scanf("%f",&fahrenheit);
 
float celsius=5.0/9.0*(fahrenheit- 32);
float kelvin=celsius+273.15;

printf("temp in celsius is:%f\n",celsius);
printf(" temp in kelvin is:%f",kelvin );

    return 0;
}