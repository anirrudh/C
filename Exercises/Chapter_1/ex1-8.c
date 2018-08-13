/* Exercise 1.8 K&R */
#include <stdio.h>

int main()
{       
        
        int c, nl, tb, sp; //init variables, nl = new line, tb = tab, sp = space
        nl = 0;
        tb = 0;
        sp = 0;
        while ((c = getchar()) != EOF)
                if (c == '\n') {
                        ++nl;
                }
                else if (c == ' ') { // ASCII for Space 
                        ++sp;
                }
                else if (c == '\t') { // ASCII for Tabs
                        ++tb;
                }
        printf("Amount of newlines: %d\n", nl);
        printf("Amount of spaces: %d\n", sp);
        printf("Amount of tabs: %d\n", tb);
}

