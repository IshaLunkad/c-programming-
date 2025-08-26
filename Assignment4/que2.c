#include<stdio.h>
int main(){
    int n;
    printf("Enter a no. to print Hello n times");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        printf("Hello\n");
    }
    return 0;
}