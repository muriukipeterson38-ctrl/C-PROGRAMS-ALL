#include <stdio.h>
#include <math.h>

int main(){
	float principal,time,rate,amount,compoundInterest;
	
	printf("Enter principal amount:");
	scanf("%f",&principal);
	
	printf("Enter time(in years):");
	scanf("%f", &time);
	
	printf("Enter rate(in %%):");
	scanf("%f", &rate);
	
	amount=principal*((1+rate/100),time);
	compoundInterest=amount-principal;
	printf("compoundInterest=sh %.2f \n",compoundInterest );
	printf("Total amount= sh %.2f",amount);
	
	return 0;
	
	
	
	
	
	
}
