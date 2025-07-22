#include<stdio.h>
int min(){

int x,y,z;
printf("Enter 3 sides of triangle");
scanf("%d%d%d",&x,&y,&z);

if(x+y>z && y+z>x && x+z>y){
    printf("it is triangle");

}
else{
    printf("Not Triangle");
}






     return 0;
}