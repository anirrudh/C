/* K&R Exercise 1-7 from ch 1 section 5 */
#include <stdio.h> 

int main(){
        int c;
        c = (getchar() == EOF);
        printf("%d", c);
}
