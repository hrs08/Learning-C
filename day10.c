#include <stdio.h>

int main(void)
{
	//weight converter program
	int ch = 0;
	float pounds = 0.0f;
	float kg = 0.0f;

	printf("Weight Conversion Calc..\n");
	printf("1. Kilogram to Pounds\n");
	printf("2. Pounds to Kilogram\n");

	printf("Enter your choice [1-2]: ");
	scanf("%d" , &ch);

	if(ch == 1){
		printf("Enter Weight in Kg : ");
		scanf("%f" , &kg);
		pounds = kg * 2.20462;
		printf("Your weight in Pounds will be %.2f" , pounds);	
	}	
	else if(ch == 2){
		printf("Enter Weight in Pounds : ");
		scanf("%f" , &pounds);
		kg = pounds / 2.20462;
		printf("Your weight in Kilograms will be %.2f" , kg);
	}
	else{
		printf("Please enter a valid choice...");
	}
	return 0;
}
