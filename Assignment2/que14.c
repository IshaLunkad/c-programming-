#include<stdio.h>
int main(){
    int x,y;
    printf("Enter x and y");
    scanf("%d%d",&x,&y);

    if(x==0 && y==0){
        printf("Points at origin");
    }
    else if(x>0 && y>0){
        printf("Points liesin Quadrant I");
    }
    else if(x<0 && y>0){
        printf("Points lies in Quadrant II");
    }
    else if(x<0 && y<0){
        printf("Points lies in Quadrant III");
    }
    else{
        printf("points lies in  Quadrant IV ");
    }
    return 0;
}