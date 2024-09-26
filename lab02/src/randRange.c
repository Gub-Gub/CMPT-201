#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void)
{
    int R_Min=0, R_Max=20; 
    //seeds new number at current time
    srand(time(0));
    // calculate number between 0-12 via modulator and adjusts end point
    int randomnumber = (rand() % (R_Max - R_Min + 1)) + R_Min;
    printf("Your random number is between %i and %i is: %i\n", R_Min, R_Max, randomnumber);
    return 0;

    


}
