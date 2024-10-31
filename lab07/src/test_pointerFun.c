#include <stdio.h>
#include "pointerFun.h"

void test_polynomial() {
    //test
    double xdata[] = {1.0f,2.0f,3.0f,4.0f};
    double coeff[] = {1.0f,2.0f};
    int nc = 1;
    int na = 4;
    double y[4];

    polynomial(coeff, xdata, y, &nc, &na);

    printf("Equation: %.1lf + %.1lfx\n", coeff[0], coeff[1]);
    printf("x values: [");
    for(int i = 0; i < na; i++){
        printf(" %.1lf,", xdata[i]);
    }
    printf(" ]\n");
    printf("y values: [");
    for(int i = 0; i < na; i++) {
        printf(" %.1lf", y[i]);
    }
    printf(" ]\n");
}

void test_str_reverso(){
    // test
    char str[] = "This is a test.";
    int n = 0;

    printf("Your string is: %s\n", str);

    str_reverso(str, &n);

    printf("Your string reverse is: %s\n", str);
}

void test_str_center() {
    // test 1
    char str1[9] = "The";
    int n1 = sizeof(str1) - 1;

    str_center(str1, &n1);
    printf("The Title is: \"%s\"\n", str1);

    //test 2
    char str2[10] = "xxxxxxThe";
    int n2 = sizeof(str2) - 1;

    str_center(str2, &n2);
    printf("The Title is: \"%s\"\n", str2);  
}

int main(){ 
    // run functions
    test_polynomial();
    printf("\n");
    test_str_reverso();
    printf("\n");
    test_str_center();

   return 0;
}