#include "pointerFun.h"
#include <math.h>
#include <string.h>

void polynomial(double* coef, double* x, double* y, int* nc, int* na){
    for(int j = 0; j < *na; j++){
        y[j] = 0.0;
        for(int i =0; i <= *nc; i++) {
            y[j] += coef[i] * pow(x[j], i);
        }
    }
}

void str_reverso(char* str, int* n){
    // calc length
    int len = 0;
    while (str[len] != '\0'){
        len++;
    }

    *n = len;

    for (int i = 0; i < len / 2; i++) {
        char current = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = current;
    }
}

void str_center(char* str, int* n) {
    int len = *n;
    int len_string = 0;

    // remove leading spaces
    int start = 0;
    while (str[start] == 'x') {
        start++;
    }
    
    // find the end of the string
    int end = start;
    while (str[end] != '\0' && str[end] != ' ' && str[end] != 'x') {
        end++;
    }
    len_string = end - start;

    int left_spaces = (len - len_string) / 2; // middle back
    int right_spaces = len - len_string - left_spaces; // remaining length

    // shift text to center by moving it to the correct spot (backwards)
    for (int i = len_string -1; i >= 0; i--) {
        str[left_spaces + i] = str[start + i];
     }
     
    // fill left spaces
    for (int i = 0; i < left_spaces; i++){
        str[i] = ' ';
    }

     // fill right spaces
     for (int i = left_spaces + len_string; i < len; i++) {
        str[i] = ' ';
     }

     str[len] = '\0';

}