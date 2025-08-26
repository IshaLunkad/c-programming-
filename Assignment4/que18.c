#include<stdio.h>
int main(){
    int x,y,evensum=0;
    printf("Enter x and y");
    scanf("%d%d",&x,&y);
    for(int i=x;i<=y;i++){
        if(i%2==0){
evensum += i;
        }


    }
printf("Sum of %d to %d is %d", x, y, evensum);
    return 0;
}