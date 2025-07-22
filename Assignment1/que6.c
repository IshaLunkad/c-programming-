#include<stdio.h>
int main(){

int l,b,h;

printf("Enter l,b,h to calculate surface&volume of cuboid");
scanf("%d%d%d",&l,&b,&h);

int surface =2*(l*b+l*h+b*h);
int volume=l*b*h;

printf(" surface area of cuboid is:%d\n",surface);
printf("volume of cuboid is:%d",volume);

    return 0;
}