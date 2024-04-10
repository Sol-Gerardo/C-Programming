/*
    A program that copies its input to its output 
    one character at a time.
*/

#include <stdio.h>
/* copy input to output; 1st version */
int main() {
    int c;
    printf("Enter input: ");
    c = getchar(); // gets first character 
    while(c != EOF){
        putchar(c); // displays character
        c = getchar(); // gets next character from user
    }
}
