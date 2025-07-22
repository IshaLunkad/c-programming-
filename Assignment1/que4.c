#include<stdio.h>
int main(){

int u,a,t;

printf("Enter u,a,t");
scanf("%d%d%d%d%d",&u,&a,&t);

int velocity=u+a*t;
int distance=u+a*t*t;

printf(" of circle is:%d\n",velocity);
printf("kelvin of circle is:%d",distance);

    return 0;
}