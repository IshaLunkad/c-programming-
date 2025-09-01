#include<stdio.h>
int main() {
int n,num;
printf("Enter number");
scanf("%d", &n);    
printf("Enter number to print table");
scanf("%d", &num);
for(int i=1;i<=n;i++){
     printf("%d ",num*i);
    
}
printf("\n");


return 0;
}
