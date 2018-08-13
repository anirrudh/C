/* K&R C Exercise 1-6 from ch 1 section 5.1 */
/* Verify expression getchar() != EOF is either 0 or 1 */
#include <stdio.h>
int main() 
{
        int d;
        d = (getchar() != EOF);
        printf("%d", d); // should always return 0 or 1
}
                
