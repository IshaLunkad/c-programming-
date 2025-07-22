//if-else
#include<stdio.h>
int main(){
int a,b;
printf("enter 2 no.");
scanf("%d%d",&a,&b);
if(a>b){
    printf("a is greater%d",a);
}
    else{
        printf("b is greate%d",b);
    }
    return 0;
}

//ternary operator

int main(){
    int a,b;
    printf("Enter a no.");
    scanf("%d%d",&a,&b);
  printf("Max no is %d",(a>b)?a:b);
    return 0;
}


//else-if

int main() {
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("Maximum = %d\n", a);
    else if (b >= a && b >= c)
        printf("Maximum = %d\n", b);
    else
        printf("Maximum = %d\n", c);

    return 0;
}

