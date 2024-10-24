#include <stdio.h>

int sec2hms(double* totalSec, int* hr, int* min, int* sec) {
    if (totalSec == NULL || hr == NULL || min == NULL || sec == NULL) {
    return 1; // function didnt work
    }

    if (*totalSec < 0) {
        return 1; // invalid time
    }

    int total = (int)(*totalSec);

    // calc time values
    *hr = total / 3600;
    total %= 3600;
    *min = total / 60;
    *sec = total % 60;

    return 0;
}

int main(void) {
    double test1 = 4567.0;
    double test2 = 129.9;
    double test3 = -1023938.2;

    // declare variables
    int hr, min, sec;
    int result;

    //test case 1
    result = sec2hms(&test1, &hr, &min, &sec);
    if (result == 0){
        printf("%f seconds is: %d hr, %d min, %d sec.\n", test1, hr, min, sec);
    } else{
        printf("Error, function failed.\n");
        return 1;
    }

    // test case 2
    result = sec2hms(&test2, &hr, &min, &sec);
    if (result == 0){
        printf("%f seconds is: %d hr, %d min, %d sec.\n", test2, hr, min, sec);
    } else{
        printf("Error, function failed.\n");
        return 1;
    }

    // test case 3
    result = sec2hms(&test3, &hr, &min, &sec);
    if (result == 0){
        printf("%f seconds is: %d hr, %d min, %d sec.\n", test3, hr, min, sec);
    } else{
        printf("Error, function failed.\n");
        return 1;
    }

}