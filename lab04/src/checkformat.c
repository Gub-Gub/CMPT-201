#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// note: if there are blank lines after line 5 it will say invalid, unsure how to fix issue

int main(int argc, char *argv[]) {
    char line[256];
    int number_entries, i;
    FILE *fp;

    // check if ends with ".dat"
    if ( argc != 2 || strcmp(argv[1] + strlen(argv[1])- 4, ".dat") != 0) {
        printf("File not valid\n");
        return 0;
    }
    
    // open file
    fp = fopen(argv[1], "r");
    if (!fp) { 
        printf("File not valid\n");
        return 0;
    }

    // read header
    if (!fgets(line, sizeof(line), fp)) {
        printf("File not valid\n");
        fclose(fp);
        return 0;
    }

    // read entries in line 2
    if (fscanf(fp, "%d", &number_entries) != 1) {
        printf("File not valid\n");
        fclose(fp);
        return 0;
    }

    // validate entries line 3-5
    for (i = 0; i< number_entries; i++) {
        int num1, num2;
        if (fscanf(fp, "%d,%d", &num1, &num2) != 2) {
            printf("File not valid\n");
            fclose(fp);
            return 0;
        }
    }

    // confirm no extra items in file
    if (fscanf(fp, "%s", line) != EOF) {
        printf("File not valid\n");
        fclose(fp);
        return 0;
    }

    // if all functions pass
    printf("file valid\n");
    fclose(fp);
    return 0;

}