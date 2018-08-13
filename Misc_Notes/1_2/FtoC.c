#include <stdio.h>
/* K&R C Farenheit-Celcius Table, Chapter 1, Section 1.2*/
main()
{
        float fahr, celcius; 
        int lower, upper, step; 

        lower = 0; //Lower Limit of Temperature 
        upper = 300; //Upper Limit of Temperature
        step = 20; //Step Size 

        fahr = lower; //Set lower bound to the farenheit 
        printf("====================== Farenheit to Celcius Conversion Chart ========================\n");
        while (fahr <= upper) {
                celcius = (5.0/9.0) * (fahr-32.0);
                printf("%3.0f %6.1f\n", fahr, celcius); 
                fahr = fahr + step; 
        }
}
