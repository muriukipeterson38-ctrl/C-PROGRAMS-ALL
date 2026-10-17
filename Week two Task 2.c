#include <stdio.h>

int main(){
	int age;
	float income;
	
	printf("Enter your age:");
	scanf("%d",&age);
	
	printf("Enter your income(sh):");
	scanf("%f",&income);
	
	if(age>=21&&income>=21000){
		printf("congratulations you qualify for a loan.\n");
	}
	else{
		printf("unfortunately,we are unable to offer you a loan at this time.\n");
	}
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
}





















