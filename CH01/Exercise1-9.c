/* Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank */
#include <stdio.h>
#include <stdlib.h>


int main() {
    int c;
    int last_was_space = 0; // false

    printf("Enter a sequence of characters, CTRL+D to quit:\n");
    while((c = getchar()) != EOF) {
        if(c == ' ') {
            if(!last_was_space) {
                putchar(' ');
                last_was_space = 1;
            }
        }
        else {
            putchar(c);
            last_was_space = 0;
        }
    } 

    return 0;
}
