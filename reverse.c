#include <stdio.h>
#include <string.h>

int main() { // start main
    char name[100];
    int length;
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    length = strlen(name);
    if (name[length - 1] == '\n') {
        name[length - 1] = '\0';
    }

    printf("Reversed name: ");
    for (int i = length - 1; i >= 0; i--) {
        putchar(name[i]);
    }
    printf("\n");

    return 0;
} // end main