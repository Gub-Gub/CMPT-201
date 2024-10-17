#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {

// confirm correct umebr of arguments are passed
if (argc != 3) {
    printf("Input format: [Number] [Base]");
    return 1;
}

char* number = argv[1];
int base = atoi(argv[2]);
int length_number = strlen(number);

// store final result
int total = 0;
int i;

for (i = 0; i < length_number; i++) {
    char c = number[i]; // where we are
    int value;

    if (isdigit(c)){
        value = c - '0'; // 0 = 48 in ASCII thus have to convert
    }
    else if (isalpha(c)){
        if (c >= 'A' && c <= 'F'){
            value = c - 'A' + 10; // convert ASCII range to numbers 10+
        } else if (c >= 'a' && c <= 'f'){
            value = c - 'a' + 10; // convert ASCII range to number 10+
        } else {
            printf("Invalid input of number.\n");
            return 1;
        }
    }
    // ensure proper math functioning due to constraints in intergers, binary and hexa
    if (value >= base){
        printf("Invalid input. Number can not be greater than base value.\n");
        return 1;
        }
    total = total * base + value;  
}

printf("%d\n", total);
return 0;
}