/* Write a program that counts blanks, tabs, and newlines */
#include <stdio.h>

int main() {
    int c;
    int blank = 0;
    int tab = 0;
    int nl = 0;
        
    while((c = getchar()) != EOF) {
        if(c == ' ') {
            ++blank;
        }
        else if(c == '\t') {
            ++tab;
        }
        else if(c == '\n'){
            ++nl;
        }
    }
    printf("blank: %d, tab: %d, nl: %d", blank, tab, nl);

    return 0;
}
