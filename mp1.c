/*MP1. Create a program that accepts a 2D array of strings (e.g., 5 words with a max length of 20
characters each). Determines if each word (row) is a palindrome. Outputs “Palindrome” or “Not
Palindrome” for each word. A palindrome is a word that reads the same forward and backward.
For example: "madam", "racecar", "level", "radar".*/
#include <stdio.h>
#include <string.h>

void isPalindrome(char word[5][20]){
    char store[5][20]; 
    for (int i=0;i<5;i++){ 
        int count = strlen(word[i]); 
        for (int j=0;j<count; j++){ 
            store[i][j] = word[i][count - j - 1];
        }
        store[i][count] = '\0';   //printf("\n store[%d]: %s",i,store[i]);  
    }//end for
    for(int i=0;i<5;i++){
        printf("\n%s is ",word[i]);    //printf("\nI am store i > store[%d]= %s and word i is word[%d]=%s",i,store[i],i,word[i]);
                                                        
            if(strcmp(store[i], word[i])==0){
                printf("palindrome");
            }else{
                printf("not palindrome");
            }
    }//end for loop
}
int main() {
    char word[5][20] = {"madam","brief","level","david","racecar"}; 
    isPalindrome(word);
    return 0;
}