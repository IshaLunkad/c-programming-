#include<stdio.h>
int main(){
    int x,y,sum=0;
    printf("Enter x and y");
    scanf("%d%d",&x,&y);
    for(int i=x;i<=y;i++){
        sum += i;


    }
printf("Sum of %d to %d is %d", x, y, sum);
    return 0;
}