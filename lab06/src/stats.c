#include <stdio.h>

// function to calculate array statistics
int stats(double* array, int* n, double* min, double* mean, double* max) {
    if (array == NULL || n == NULL || min == NULL || mean == NULL || max == NULL) {
        return 1;
    }
    // check array for proper size
    if (*n <= 0){
        return 1;
    }

    // declare objects
    *min = array[0];
    *max = array[0];
    double sum = 0;

// iterate over array and assign value to min or max if applicable.
// add all to sum and find mean by dividng by n
    for (int i = 0; i < *n; i++){
        if (array[i] < *min){
            *min = array[i];
        }
        if (array[i] > *max){
            *max = array[i];
        }
        sum += array[i];
    }

    *mean = sum / (*n);
    return 0;
}

int main(void){

// test case 1
double array1[] = {10.0, 15.0, 20.0, 25.0, 30};
int n1 = 5;
double min1, max1, mean1;
int result1 = stats(array1, &n1, &min1, &mean1, &max1);

if (result1 == 0){
    printf("Array: {10.0, 15.0, 20.0, 25.0, 30}\n");
    printf("Min: %.2f. Max: %.2f. Mean: %.2f.\n\n", min1, max1, mean1);
} else {
    printf("Error.");
}

// test case 2
double array2[] = {-5.0, -7.5, 100.0, 50.0, -1000.0, 100000.0, 55.8, 4.0};
int n2 = 7;
double min2, max2, mean2;
int result2 = stats(array2, &n2, &min2, &mean2, &max2);

if (result2 == 0){
    printf("Array: {-5.0, -7.5, 100.0, 50.0, -1000.0, 100000.0, 55.8, 4.0}\n");
    printf("Min: %.2f. Max: %.2f. Mean: %.2f.\n\n", min2, max2, mean2);
} else {
    printf("Error.");
}

// test case 3
double array3[] = {-10.0, -100.0, -1000.0, -10000.0, -100000.0, -1000000.0};
int n3 = 6;
double min3, max3, mean3;
int result3 = stats(array3, &n3, &min3, &mean3, &max3);

if (result3 == 0){
    printf("Array: {-10.0, -100.0, -1000.0, -10000.0, -100000.0, -1000000.0} \n");
    printf("Min: %.2f. Max: %.2f. Mean: %.2f.\n\n", min3, max3, mean3);
} else {
    printf("Error.");
}

return 0;
}