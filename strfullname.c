#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
//#include <cs50.h>

// Function prototypes (if needed)
char getstring();

int main(int argc, char *argv[]) {
    // Check for command-line arguments
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <input>\n", argv[0]);
        return EXIT_FAILURE;
    }

    // Example: Print the input argument
    printf("Your name is: %s\n", argv[1]);

    // Call example function (if defined)
    getstring();

    return EXIT_SUCCESS;
}

char getstring() {
    char name[100];
    printf("\nEnter any name/place/animal/thing: ");
    fgets(name,sizeof(name),stdin);

    printf("\nYour name is %s",name);
}//...................0..........0000000000011
