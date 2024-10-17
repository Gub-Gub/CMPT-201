#include <stdio.h>
#include <stdbool.h>

int main() {
    char input[500];
    bool has_control = false;
    bool has_special = false;
    bool has_number = false;
    bool has_letter = false;

// get input
printf("Please enter a string: ");
fgets(input, sizeof(input), stdin);

// check each character in input string
for (int i = 0; input[i] != '\0'; i++) {
    unsigned char c = input[i];
    if (c == '\n') {
        continue;
    }
    if ((c >= 0 && c <= 31) || c == 127) {
        has_control = true;
    } else if ((c >= 32 && c <= 47 || c >= 58 && c<= 64) || (c >= 91 && c <= 96) || (c >= 123 && c <= 126)) {
        has_special = true;

    } else if (c >= 48 && c <= 57) {
        has_number = true;
    } else if ((c >= 65 && c <= 90) || (c >= 97 && c<= 122)) {
        has_letter = true;
    }

}
 // count how many different charcters given
 int count = has_control + has_special + has_number + has_letter;

 if (has_letter && !has_number && !has_special && !has_control) {
    printf("Contains all letters\n");
 } else if (has_letter && (has_number + has_control + has_special) == 1) {
    printf("Contains letters and ");
    if (has_number) {
        printf("a number\n");
    } else if (has_control) {
        printf("control characters\n");
    } else if (has_special) {
        printf("and special characters\n");
    }
 } else {
    printf("Contains ");
    int present = 0;
    const char *types[4];
        if (has_letter) {
            types[present++] = "letters";
        }
        if (has_number) {
            types[present++] = "a number";
        }
        if (has_special) {
            types[present++] = "special characters";
        }
        if (has_control) {
            types[present++] = "control characters";
        }
        for (int i = 0; i < present; i++) {
            if (i > 0 && i == present - 1) {
                printf(" and ");
            } else if (i > 0) {
                printf(", ");
            }
            printf("%s", types[i]);
        }
        printf("\n");
    }

    return 0;
 }


