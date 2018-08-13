/* K&R's C Chapter 1 Section 1.3 Program 1*/

#include <stdio.h>

main() 
{
        int fahr;
        for (fahr = 300; fahr >=0; fahr = fahr - 20) 
                printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
