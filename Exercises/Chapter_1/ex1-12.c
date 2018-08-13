/* K&R C Exercises, Ex 1-12 */ 

#include <stdio.h>

// States based definitions
#define IN 1;
#define OUT 0;

int main()
{
        int c , state;
        state = OUT;
        while ((c = getchar()) != EOF) {
                // Handle the area at which states we are in. 
                // Not fool proof, but demonstrates the understanding of
                // the exercise, since this only accounts for these cases.
                if (c != ' ' && c != '\n' && c != '\t'){
                        state = IN;
                        putchar(c); // Print the characters where the character is valid
                }
                else if  (state == IN) {
                        putchar('\n');
                        state = OUT;
                }
        }
}
