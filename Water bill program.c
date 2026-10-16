/*NAME:PETERSON MURIUKI
REG NO:CT100/G/30653/26
*/

// program display water bill

#include<stdio.h>

int main(){
	float units;
	float totalwaterbill;
	
	printf("Enter water units consumed: \t");
	scanf("%f", &units);
	
	if (units >= 0 && units <30){
		totalwaterbill = (units * 20);
		printf("Total water bill is: %.2f\n", totalwaterbill);
		
	}else if (units <30 && units >60){
		totalwaterbill = units *25;
		printf("Total water bill is: %.2f\n", totalwaterbill);
		
	}else if (units >60){
		totalwaterbill = units * 60;
		printf("Total water bill is: %.2f\n", totalwaterbill);

	}
	
	return 0;
}