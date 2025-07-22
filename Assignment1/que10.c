#include<stdio.h>
#include<math.h>
int main(){
float x2,x1,y2,y1;
printf("Enter x1 and x2  coordinates");
scanf("%f%f",&x1,&x2);
printf("Enter y1 and y2  coordinates");
scanf("%f%f",&y1,&y2);

 float distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));


printf("Distance between Two points is:%f",distance);

    return 0;
}