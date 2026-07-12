#include <stdio.h>
#include <stdbool.h>

int main(void){
	//Nested if statement
	float price = 10.00; 
	bool isStud = true;  //10% discount
	bool isSenior = false; //20% discount
	
	//Stud -> $9
	//Senior -> $8
	//both -> $7
	
	if (isStud){
		if(isSenior){
			printf("You get a student discount of 10%%.. \n");
			printf("You get a senior discount of 20%%.. \n");
			price*= 0.7;	
		}
		else{
			printf("You get a student discount of 10%%.. \n");
			price *= 0.9;
		}
	}
	else{
		if(isSenior){
			printf("You get a senior discount of 20%%.. \n");
			price*= 0.8;
		}
		
	}
	
	printf("The price of the ticket will be : $%.2f\n" , price);
	
	
	return 0; 
}
