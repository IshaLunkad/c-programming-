#include<stdio.h>
int main(){


float price1,price2,price3,qnt1,qnt2,qnt3,discount,payAmt;

printf("Enter  price of first product");
scanf("%f",&price1);
printf("Enter quantity of first product");
scanf("%f",&qnt1);



printf("Enter  price of second product");
scanf("%f",&price2);
printf("Enter quantity of fsecond product");
scanf("%f",&qnt2);


printf("Enter  price of third product");
scanf("%f",&price3);
printf("Enter quantity of third product");
scanf("%f",&qnt3);

float total=(price1*qnt1)+(price2*qnt2)+(price3*qnt3);

if(total>=100000){
    discount =20;
}
else if(total>=80000){
    discount=15;
}
else if(total>50000){
    discount=8;
}
else if(total>=30000){
    discount=3;
}
else{
    discount=0;
}

 
float discountamt=(total*discount)/100;
payAmt=total-discountamt;

printf("Total Amount is:%f\n",total);
printf("Discounted amounted is:%f\n",discountamt);
printf("Total amount to pay after discount is:%f \n",payAmt);


    return 0;
}