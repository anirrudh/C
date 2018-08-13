/* K&R Chapter 1 Exersice 1.9 */
int c; 
while ((c = getchar()) != EOF) { 
        if (c == ' ') { 
                while ((c = getchar()) == ' ') { 
                        putchar(' '); 
                        if (c == EOF) { 
                                break; 
                        } 
                }
            putchar(c); 
        }
}

