//Import all required librarys
#include "math_constants.h"
#include "trig.h"
#include <stdio.h>
#include <math.h>

float main (void)
{
    //define variables
    float q;
    
    q=sin(N*PI)+cos(N*PI)+cos((N*PI)/2);

    printf("The answer is: %f",q);
    return 0;
}