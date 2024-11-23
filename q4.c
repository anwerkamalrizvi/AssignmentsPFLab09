/*Write a program that initializes a 2D character array with a list of words. Then, take a
word as input from the user and check if it exists in the array. Display "Found" if it’s there,
otherwise display "Not Found".*/
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define STRING_SIZE 16 
#define LETTERS 100    

void ifThereIsWord(char str[STRING_SIZE][LETTERS]) {
    char word[LETTERS];

    printf("\nEnter the word to search: ");
    scanf("%s", word);


    for (int i=0; i<strlen(word); i++) {
        word[i] = toupper(word[i]);
    }

    for (int i=0; i<STRING_SIZE; i++) {
        if (strcmp(str[i], word) == 0) {
            printf("\nFound");
            return;
        }
    }
    printf("\nNot Found\n"); 
}

int main() {
    char str[STRING_SIZE][LETTERS] = {
        "LAB", "KEY", "FIN", "NOW", "SOON", "ASAP", "READ", "ROLE",
        "PIE", "BYE", "HEY", "LIE", "GO", "DIE", "HELL", "IN"};
    system("cls");
    ifThereIsWord(str);
    return 0;
}
