/*Create a function that reverses a given string and returns the reversed string. Use this function
in the main program to display the reversed string entered by the user.*/

#include <stdio.h>
#include <string.h>

char* revStr(char str[]){
    int count =0; 
    int len = strlen(str);
    for(int i=len-1;i>=0;){
        str[count] = str[i]; 
        i--; count++;
       // printf("\nI am count: %d ",count);
    }/*end for loop*/ //printf("\ncount %d ",count);
    str[count] = '\0'; //printf("\n%s ",str);
    return str;
}
int main() {
    char str[100];
    printf("\nEnter any string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';
    char* rev = revStr(str);
    printf("\n%s",rev);
    return 0;
}