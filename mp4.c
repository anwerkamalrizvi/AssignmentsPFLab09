/*Write a C program with a user-defined function calculate to perform basic arithmetic operations
such as addition, subtraction, multiplication, and division. The program should take two
numbers and an operation choice as input, and then use the function to perform the operation.*/
#include <stdio.h>

void operation(int a, int b, int choice) {
    printf("\n\t\tRamson Basic Calculator\nEnter:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nYour choice(1-4):  ");
    scanf("%d",&choice); float div = 0; int c = 0;
    switch(choice){
        case 1: printf("\nResult: %d ",a+b); break;
        case 2: printf("\nResult: %d ",a-b); break;
        case 3: c = a*b; printf("\nResult: %d ",c); break;
        case 4: div = (float)a/b; printf("\nResult: %.2f", div); break;
    }
}
int main() {
    int a, b, choice;
    printf("\nEnter number 1: "); scanf("%d",&a);
    printf("\nEnter number 2: "); scanf("%d",&b); 
    operation(a,b,choice);
    return 0;
}