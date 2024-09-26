//Create directives
#include <stdio.h>
#include <math.h>
//Define main function
float main (void)
{
    int A; 
    float B,D;

    A=4; 
    B=2.2;

    //use type cast to change varA to float
    D=log10f(B)/log10f((float)A);

    printf("The answer is: %f\n",D);
    return 0;
}