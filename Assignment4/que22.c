#include<stdio.h>
int main(){

    int n,count=0;
    printf("Enter a no.");
    scanf("%d",&n);
    if(n==0){
        count=1;
}
    else{
        while(n!=0){
            n=n/10; // Remove the last digit
            count++; 
        }
    }
    printf("Total count od digits is%d",count);
    return 0;
}