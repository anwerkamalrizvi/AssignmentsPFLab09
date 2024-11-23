/*Create a C program that swaps the values of two integers using a user-defined function,
swapIntegers. The user inputs two integer values, and the program uses the function to swap
them. It should perform the swap and display the updated values.*/

#include <stdio.h>

int swapIntegers(int a,int b){
    printf("\nBefore swapping:\nNumber 1: %d\nNumber 2: %d\n",a,b);
    int temp = a;
    a=b; b=temp;
    printf("\nAfter swapping:\nNumber 1: %d\nNumber 2: %d",a,b);
    return (a,b);
}//end swapIntegerrs
int main() {
    int a,b;
    printf("\nEnter number 1: "); scanf("%d",&a);
    printf("\nEnter number 2: "); scanf("%d",&b);
    swapIntegers(a,b);
    return 0;
}//end main