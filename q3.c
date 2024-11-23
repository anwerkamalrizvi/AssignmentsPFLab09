/*Write a program that takes a destination string and a source string as input. Then, take
an integer n as input and append only the first n characters of the source string to the
destination. Print the new concatenated string.*/
#include <stdio.h>
#include <string.h>
#include <conio.h>
#define size 100

void stringInput(char *destination_str,char *source_str, int n){
    printf("\nEnter the destination string: ");
    scanf("%s",destination_str);
    printf("\nEnter the source string: ");
    scanf(" %s",source_str);
    destination_str = strncat(destination_str
    ,source_str,n);
    printf("%s",destination_str);
}
int main() {
    char destination_str[size]; 
    char source_str[size]; 
    int n;
    printf("\nEnter the n value to stop the string till that location: ");
    scanf("%d",&n);
    stringInput(destination_str,source_str,n);
    return 0;
}