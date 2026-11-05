#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];
    int i, j;
    int occupied, vacant;
    
    srand(time(0)); // for random numbers
    
    // Fill random data 0 or 1
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2;
        }
    }
    
    // Check per floor
    for(i = 0; i < 5; i++) {
        occupied = 0;
        vacant = 0;
        for(j = 0; j < 10; j++) {
            if(occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d: Occupied = %d, Vacant = %d\n", i+1, occupied, vacant);
    }
    
    return 0;
}