#include <stdio.h>

int main(){
//Declare variables with correct data types	
	float height;
	double bankBalance;
	char phoneNumber[15];
	
	//Prompt the user for inputs
	printf("Enter your height(in metres):");
	scanf("%f",&height);
	
	printf("Enter your bankBalance(in KES):");
	scanf("%lf",&bankBalance);
	
	printf("Enter your phoneNumber:");
	scanf("%s",&phoneNumber);
	
	//Display back in a formatted manner
	printf("\n--- Your Details---\n");
	printf("Height: %.2f metres\n",height);
	printf("bankBalance: KES %.2lf\n",bankBalance);
	printf("phoneNumber: %s\n",phoneNumber);
	
	return 0;
	
}