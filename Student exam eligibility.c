/* NAME:PETERSON MURIUKI
REG NO:CT100/G/30653/26
DESCRIPTION:PROGRAM DISPLAY STUDENT EXAM ELIGIBILITY
*/


// program display student exam eligibility

#include<stdio.h>

int main(){
	// declare the variables 
	float averagemarks, attendance;
	printf("Enter the attendance in percentage (1-100):");
	scanf("%f", &attendance);
	
	printf("Enter the average marks from (1-100):");
	scanf("%f", &averagemarks);
	
	if (averagemarks >= 75.0 && attendance >= 40.0){
		printf("the student is eligible for the exam. \n");
	} else {
		printf("the student is not eligible for the exam. \n");
	}
	
	return 0;
}