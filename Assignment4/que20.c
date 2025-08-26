#include<stdio.h>
int main(){
   
    int n,x,power=1;
    printf("Enter n and x");
    scanf("%d%d", &n, &x);
    for(int i=1;i<=n;i++){
        power *=x;
    }
    printf("The value for x^n is %d", power);
    return 0;
}