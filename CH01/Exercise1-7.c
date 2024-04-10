/* Write a program to print the value of EOF */

#include <stdio.h>

int main() {
    int c;
    int result;

    printf("Enter a character, CTRL+D to exit: \n");

    while((c = getchar()) != EOF) {
        if(c == '\n') {
            continue;
        }

        putchar(c);
        printf("\n");
    }
    printf("The value of EOF is %d\n", EOF);

    return 0;
}
