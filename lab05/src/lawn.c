// Create a program named lawn which inputs an integer, x, as a com- mandline argument to the program. The program then approximates the mathematical, using loops

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX_NUMBER 200

// create function to check interger is in range
double math_approx(double x) {
    double total = 0.0;

    for (int k = 1; k <= MAX_NUMBER; k++){
        double eqn = ((pow(-1, k-1) * pow(x-1, k)) / k);
        total += eqn;  
    }
    return total;
    }

int main(int argc, char *argv[1]){

// confirms correct arguments pased via stdin
if(argc != 2){
    printf("Error.\n");
    return 1;
} 
// convert to double
double x = atof(argv[1]);

// error checking, if passes, then run function
if (x <= 0 || x > 1) {
        printf("interger needs to be in range 0 < x <= 1.\n");
        return 1;
    } else{
    double result = math_approx(x);

    printf("The approxiamtion of %f is %f.\n", x, result);
    return 0;
    }
}
