#include <stdio.h>

int main() {
    float revenue[7];
    float total = 0;
    int i;
    
    // Input
    for(i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i+1);
        scanf("%f", &revenue[i]);
    }
    
    // Calculate total
    for(i = 0; i < 7; i++) {
        total = total + revenue[i];
    }
    
    // Display
    printf("\nTotal weekly revenue = %.2f\n", total);
    printf("Average daily revenue = %.2f\n", total/7);
    
    return 0;
}