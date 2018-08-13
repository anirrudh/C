// K&R's C Section 1 Part 1.4::Symbolic Constants 
#include <stdio.h> 

#define LOWER 0 //Lower Limit of the table 
#define UPPER 300 //Upper Limit 
#define STEP 20 //Step Size 

main() 
{
        int fahr; 
        for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
                printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
