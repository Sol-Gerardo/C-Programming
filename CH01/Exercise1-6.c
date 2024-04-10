/* Verify that the expression getchar() != EOF is 0 or 1 */
#include <stdio.h>

int main() {
    int c;

    printf("Please enter characters, press CTRL+D (EOF) to stop:\n" );

    while(1) {
        c = getchar();

        if(c == EOF) {
            printf("EOF reached. The expression getchar() != EOF is 0\n");
            break;
        } else if(c == '\n') {
            continue;
        }
    

        // Print the value of the expression getchar() != EOF (0 or 1) 
        printf("The expression getchar() != EOF is: %d\n", c != EOF);

        // Use putchar to echo the character
        putchar(c);
        printf("\n");
    }

    return 0;
}
