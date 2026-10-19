#include <stdio.h>

// Function to calculate bill
float calculateElectricBill(int units) {
    float bill = 0;
    
    if (units <= 100) {
        bill = units * 10;
    }
    else if (units <= 200) {
        bill = (100 * 10) + (units - 100) * 15;
    }
    else {
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20;
    }
    
    return bill;
}

int main() {
    int units;
    
    printf("Enter units consumed: ");
    scanf("%d", &units);
    
    float total = calculateElectricBill(units);
    
    printf("Total bill is KSh. %.0f", total);
    
    return 0;
}