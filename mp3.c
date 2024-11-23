/*Implement a function that checks if a given integer is a prime number. Use this function in the
main program to check if numbers entered by the user are prime.*/
#include <stdio.h>

void isPrime(int n){
    int flag =0;
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            flag =1;
            break;
        }else {flag =0; continue; }
    }//end for loop
    if(flag == 0){
        printf("\nPrime ");
    }else { printf("\nNot Prime ");
    return;}
}//end isPrime()
int main() {
    int n; printf("\nEnter any number greater than 1: "); scanf("%d",&n);
    isPrime(n);
    return 0;
}//end main 