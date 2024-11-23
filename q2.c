/*Write a function that checks if a given number is even or odd.*/
#include <stdio.h>

char* evenOrOdd(int number){
    if(number%2==0){
        return "Even";
    }
    else{
        return "Odd";
    }
}//end function

int main() {
    int number; printf("\nEnter any number: ");
    scanf("%d",&number);
    evenOrOdd(number);
    printf("\nThe number is %s ",evenOrOdd(number));
    return 0;
}//end main