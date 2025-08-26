//Addition with loop
/*
#include<stdio.h>
int main(){ 
int n,sum=0;
printf("Enter a number");
scanf("%d", &n);
    for(int i=1;i<=n;i++){
        sum  +=i;
    }
    printf("sum is %d", sum);
    return 0;   
}
*/

//Addition without loop
#include<stdio.h>   
int main(){
int n, sum=0; 
printf("Enter a number");
scanf("%d", &n);
sum += n*(n+1)/2; 
printf("sum is %d", sum);
return 0;   
}