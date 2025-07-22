//swap without variable temp

#include<stdio.h>
int main(){

int a,b,temp;

printf("Enter 2 no.");
scanf("%d%d",&a,&b);

 a = a + b;  
b = a - b;  
a = a - b;

printf("After Swapping a is:%d\n",a);
printf("After Swapping b is:%d",b);

    return 0;
}