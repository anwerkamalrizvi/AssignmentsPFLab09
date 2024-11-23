/*Write a program that initializes a 2D character array with a list of words. Then, take a
word as input from the user and check if it exists in the array. Display "Found" if it’s there,
otherwise display "Not Found".*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#define string_size 16
#define letters 100

void ifThereIsWord(char str[string_size][letters]){
    char word[4];
    printf("\nEnter the word to search: ");
    scanf("%s",word); char count[100];
    for(int i=0;i<4;i++){
        word [i]= toupper(word[i]);
    }//end for loop
    int len = strlen(word); int ctr=0; int find=0;
    char store[string_size][letters];
    switch(len){
        case 2:
        for(int i=0;i<string_size;i++){
                int strl = strlen(str[i]);
                if(strl==2){
                    printf("\nFound at %d ",i+1);
                    for(int j=0;j<strl;j++){
                        store[ctr][j] = str[i][j];
                        printf("\nAt i= %d, I am store[%d][%d]: %c ",i,ctr,j,store[ctr][j]);
                    }//end for loop
                    ctr+=1; 
                }
           // }//end for loop
        }//end for loop
            int i=0; int check =0;
            for(int k=0;k<ctr;k++){
                if(store[check][i] == word[i] && store[check][i+1] == word[i+1]){
                    printf("\nFound ");
                }else check++;
                
            }//end for loop
        break;
    }
}//end function
int main() {
    char str[string_size][letters] = {"LAB","KEY","FIN","NOW","SOON","ASAP","READ","ROLE",
                                     "PIE","BYE","HEYE","LIE", "GO","DIE","HELL","IN"};        
    system("cls");
    ifThereIsWord(str);
    return 0;
}
