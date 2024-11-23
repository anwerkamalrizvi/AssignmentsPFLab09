/*Write a c function that takes two numbers as input and returns their product.*/
#include <stdio.h>

int productOfNumbers(int product){
    int a; printf("\nEnter first number: "); scanf("%d",&a);
    int b; printf("\nEnter second number: "); scanf("%d",&b);
    product = a * b;
    printf("\nThe product is: %d ",product);
    return product;
}//end function 
int main() {
    int product = 0;
    productOfNumbers(product);
    return 0;
}//end main