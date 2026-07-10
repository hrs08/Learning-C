#include <stdio.h>

int main(void){
	//temperature converter
	char ch = 0;
	float fahrenhite = 0.0f;
	float celsius = 0.0f;

	printf("Temperature Conversion Program\n");
	printf("F. Fahrenhite to Celsius\n");
	printf("C. Celsius to Fahrenhite\n");
	printf("Is the temp in C or F : ");
	scanf(" %c" , &ch);

	if(ch == 'C'){
		//make into farenhite
		printf("Enter the temp in celsius : ");
		scanf("%f" , &celsius);
		fahrenhite = (celsius * (9.0f/5.0f)) + 32;
		printf("Given temp in fahrenhite will be %.1f F" , fahrenhite);
	}
	else if(ch == 'F'){
		//farenhite to celsius
		printf("Enter the temp in fahrenhite : ");
		scanf("%f" , &fahrenhite);
		celsius = (fahrenhite - 32) * (5.0f/9.0f);
		printf("Given temp in celsius will be %.1f C" , celsius);
	}
	else{
	printf("Invalid Input !! Enter a valid input...");
	}
	
	return 0;
}
