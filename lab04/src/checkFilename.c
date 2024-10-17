#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// file format: c m p t 2 0 1 _ Z S  _ l  a  b  0  4  .  t  a  r  .  g  z
//              0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22
int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Enter filename: \n");
        return 1;
    }

// assign argv 2 (argv[1]) to filename and count length of string
char *input = argv[1];
int len = strlen(input);

// check if ends in "".tar.gz"
if (len < 7 || strcmp(input + len - 7, ".tar.gz") != 0) {
    printf("Rename before submitting.\n");
    return 0;
}

// extract filename
char fileName[256];
strncpy(fileName, input, len - 7);
fileName[len - 7] = '\0';

// check starts with cmpt201_
if (strncmp(fileName, "cmpt201_", 8) != 0) {
    printf("Rename before submitting.\n");
    return 0;
}

// find start points
char *initials = fileName + 8; // skip cmpt201_ to initial start point
char *labNumber = strstr(initials, "_lab"); // searches for "_lab" and assigns pointer

// if lab isnt found error handling
if(!labNumber) {
    printf("Rename before submitting.\n");
    return 0;
}

// extract initials
int initials_len = labNumber - initials;
if (initials_len < 2 || initials_len > 3){
    printf("Rename before submitting.\n");
    return 0;
}

// check that initials are letters only
for (int i = 0; i < initials_len; i++) {
    if (!isalpha(initials[i])) {
        printf("Rename before submitting.\n");
        return 0;
    }
}

// check rest of file is lowercase
for (int i = 0; i < len - 7; i++){
// index 10 (pointer to labNumber start) minus index 0 (pointer to start of filename) minus 1
    if ((i < 8 || i > (labNumber - fileName - 1)) && isupper(fileName[i])) {
    printf("Rename before submitting.\n");
    return 0;
    }
}

// check if lab number is digit and is length 2
char *lab_number_str = labNumber + 4;
if (strlen(lab_number_str) != 2 || !isdigit(lab_number_str[0]) || !isdigit(lab_number_str[1])) {
printf("Rename bnefore submitting.\n");
return 0;
}

// confirms lab number between 0 and 13
int lab_number = atoi(lab_number_str);
if (lab_number < 0 || lab_number > 13) {
    printf("Rename before submitting.\n");
    return 0;
}

printf("Good to submit.\n");
return 0;
}