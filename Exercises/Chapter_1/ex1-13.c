/* K&R Exercise 1-13
 * This will assume that each piece of the input will be defined
 * as a word. We will assume that there is a maximum input of 10 words.
 */

#include <stdio.h>
#define IN 1
#define OUT 0

int main(){
        int c, nw, state;
        state = OUT;
        while ((c = getchar) != EOF) {
            if ( c == ' ' || c == '\n' || c == '\t' ) {
                    state == OUT;
                } 
            else if (state == OUT) {
                        // Now that we kknow that there is a word here...
                        state == IN;
                        printf('=');
                    if ( c == ' ' || c == '\n' || c == '\t' ) {
                        printf('\n');
                        state == OUT;
            }
            }
        }

