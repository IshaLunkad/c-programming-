#include<stdio.h>
int main(){ 
int n,evensum=0;
printf("Enter a number");
scanf("%d", &n);
    for(int i=1;i<=n;i++){
      if(i%2==0){
         evensum  +=i;
      }
    }
    printf("sum is %d", evensum);
    return 0;   
}