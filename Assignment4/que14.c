#include<stdio.h>
int main(){
    int x,y,sum=0;
    printf("Enter x and y");
    scanf("%d%d",&x,&y);
    for(int i=x;i<=y;i++){
       if(i%2==0){
            printf("%d is even\n", i);
        } else {
            printf("%d is odd\n", i);
        }


    }

    return 0;
}