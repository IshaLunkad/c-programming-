#include<stdio.h>
#include<math.h>
int main() {
int cnt=0,n,result=0;
printf("Enter no.: ");
scanf("%d", &n);
int temp=n;
while(n>0){
    cnt++;
    n=n/10;
}
n=temp;
while (n>0){
int rem=n%10;
result=result+(int)pow(rem,cnt);
n=n/10;
}
if(temp==result){
    printf("Armstrong no.");
}
else{
    printf("Not an Armstrong no.");
}

return 0;




}