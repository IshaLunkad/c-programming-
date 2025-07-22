#include <stdio.h>

int main() {
    float costprice, sellingprice;

    
    printf("Enter Cost Price,selling_price: ");
    scanf("%f%f", &costprice,&sellingprice);

    
    // Logic using if-else
    if (sellingprice > costprice) {
       float amount = sellingprice - costprice;
        printf("Profit of %f\n", amount);
    } else { 
        
        printf("Loss of %f\n", amount);
    } 

    return 0;
}
