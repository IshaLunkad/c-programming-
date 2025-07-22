#include<stdio.h>
int main(){

float r,h;
float pi=3.14;
printf("Enter r & h to calculate surface area and volume of cylinder");
scanf("%f%f",&r,&h);
 
float surface=2*pi*r*r;
float volume=2*pi*r;

printf("Surface of cylinder is:%f\n",surface);
printf("Volume of cylinder is:%f",volume );

    return 0;
}