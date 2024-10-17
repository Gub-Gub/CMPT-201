#include <stdio.h>

// initiliaze argument count and value
int main(int argc, char *argv[]) {


// error handling
if (argc !=2){
    printf("Error.\n");
    return 1;
}
// define variables
char *input = argv[1];
int length = 0;

// repetition to count length of string
while (input[length] != '\0' && input[length] != '\n'){
    length++;
}

printf("The length of %s is %d.\n", input, length);
return 0;

}