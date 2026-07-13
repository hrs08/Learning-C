#include <stdio.h>

int main(void){
	//calculator program
	char operator = '\0';
	double num1 = 0.0;
	double num2 = 0.0;
	double result = 0.0;

	printf("Enter the first num : ");
	scanf(" %lf" , &num1);

	printf("Enter the operator [+ , - , / , *] : ");
	scanf(" %c" , &operator);  // the space b4 %c clear \n from input buffer

	printf("Enter the second num : ");
	scanf(" %lf" , &num2);

	switch(operator){
		case '+':
			result = num1 + num2;
			printf("Result of addition of %.2lf and %.2lf is %+.2lf" , num1 , num2 , result);
			break;
		case '-':
			result = num1 - num2;
			printf("Result of subtraction of %.2lf and %.2lf is %+.2lf" , num1 , num2 , result);
			break;
		case '/':
			if (num2 == 0){
				printf("You cannot divide by 0\n");
			}
			else{
				result = num1 / num2;
				printf("Result of division of %.2lf and %.2lf is %+.2lf" , num1 , num2 , result);
			}
			break;
		case '*':
			result = num1 * num2;
			printf("Result of multiplication of %.2lf and %.2lf is %+.2lf" , num1 , num2 , result);
			break;
		default:
			printf("Invalid Operator\n");
			
	}
	
	return  0;
}
 
