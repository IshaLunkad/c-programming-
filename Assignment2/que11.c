#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a and b");
    scanf("%d%d",&a,&b);

    if(a==b){
        printf("%d is equal to b%d",a,b);
    }
    else if(a>b){
        printf("%d is greater than b%d",a,b);
    }
    else{
        printf("%d is less%d",a,b);
    }
    return 0;
}