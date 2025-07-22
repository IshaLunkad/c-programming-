#include<stdio.h>
int main(){

int a,b;

printf("Enter a,b");
scanf("%d%d",&a,&b);

int AM=a+b*(2);
int HM=a*b/(a+b);

printf(" Arthmitc mean  is:%d\n",AM);
printf("HArmonic meanis:%d",HM);

    return 0;
}