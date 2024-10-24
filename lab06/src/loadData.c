#include <stdio.h>

int loadData(char* filename, int* stationNumber, double* temp, double* pres) {
    if (filename == NULL || stationNumber == NULL || temp == NULL || pres == NULL){
        printf("Invalid file format or file is empty.\n");
        return 1;
    }

    // open file
    FILE *file = fopen(filename, "r");
    if (file == NULL){
    return 1;
    }

    // read content
     int count = fscanf(file, "station: %d\npressure [kPa] : %lf\nTemperature [C]: %lf", stationNumber, pres, temp);

     fclose(file);

    // confirm read correct amount of items
     if (count == 3) {
        return 0;
     } else {
        return 1;
     } 
}

int main(void) {

    //declare variables
    int stationNumber;
    double temp, pres;
    int result;

    // test case 1
    result = loadData("data1.dat", &stationNumber, &temp, &pres);
    if (result == 0){
        printf("Successfully loaded information.\n");
        printf("Station Number: %d\n", stationNumber);
        printf("Pressure: %.1lf\n", pres);
        printf("Temperature: %.1lf\n\n", temp);
    } else{
        printf("Error, can not read contents of file.\n");
    }

    // test case 2
    result = loadData("data2.dat", &stationNumber, &temp, &pres);
    if (result == 0){
        printf("Successfully loaded information.\n");
        printf("Station Number: %d\n", stationNumber);
        printf("Pressure: %.1lf\n", pres);
        printf("Temperature: %.1lf\n\n", temp);
    } else{
        printf("Error, can not read contents of file.\n");
    }

    // test case 3
    result = loadData("data3.dat", &stationNumber, &temp, &pres);
    if (result == 0){
        printf("Successfully loaded information.\n");
        printf("Station Number: %d\n", stationNumber);
        printf("Pressure: %.1lf\n", pres);
        printf("Temperature: %.1lf\n\n", temp);
    } else{
        printf("Error, can not read contents of file.\n");
    }
return 0;
}